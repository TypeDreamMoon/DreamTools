// - BY DreamMoon 2024 -
// https://dmstudio.top


#include "DreamToolsBlueprintFunctionLibrary.h"

#include "DesktopPlatformModule.h"
#include "IImageWrapper.h"
#include "ImageUtils.h"
#include "IImageWrapperModule.h"

void UDreamToolsBlueprintFunctionLibrary::GetViewportScreenshot(FString ImageName, bool SaveUI, EPathMode PathMode)
{
	// 获取Screenshot, 并生成图像到指定位置
	FString SavePath;
	switch (PathMode)
	{
	case EPathMode::EPM_Custom:
		SavePath = ImageName;
		break;
	case EPathMode::EPM_ProjectDir:
		SavePath = FPaths::Combine(FPaths::ProjectDir(), ImageName);
		break;
	case EPathMode::EPM_ProjectSaveDir:
		SavePath = FPaths::Combine(FPaths::ProjectSavedDir(), ImageName);
		break;
	default:
		SavePath = FPaths::Combine(FPaths::ProjectSavedDir(), ImageName);
		break;
	}
	
	FScreenshotRequest::RequestScreenshot(SavePath, SaveUI, false);
	FDelegateHandle ScreenshotHandle = FScreenshotRequest::OnScreenshotRequestProcessed().AddLambda([ScreenshotHandle]()
	{
		UE_LOG(LogTemp, Warning, TEXT("%s %d 获取Screenshot完成!"), UTF8_TO_TCHAR(__FUNCTION__), __LINE__);
		FScreenshotRequest::OnScreenshotRequestProcessed().Remove(ScreenshotHandle);
	});
}

UTexture2D* UDreamToolsBlueprintFunctionLibrary::OpenImage(FString ImageName, EPathMode PathMode)
{
	FString SavePath;
	switch (PathMode)
	{
	case EPathMode::EPM_Custom:
		SavePath = ImageName;
		return FImageUtils::ImportFileAsTexture2D(ImageName);
	case EPathMode::EPM_ProjectDir:
		SavePath = FPaths::ProjectDir();
		break;
	case EPathMode::EPM_ProjectSaveDir:
		SavePath = FPaths::ProjectSavedDir();
		break;
	default:
		SavePath = FPaths::ProjectSavedDir();
		break;
	}
	return FImageUtils::ImportFileAsTexture2D(FPaths::Combine(SavePath, ImageName));
}

UTexture2D* UDreamToolsBlueprintFunctionLibrary::OpenImageByFileDialogue()
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

	if (DesktopPlatform)
	{
		TArray<FString> OutFilenames;
		bool bOpened = DesktopPlatform->OpenFileDialog
		(
			nullptr,
			TEXT("Choose Image"),
			FPaths::ProjectContentDir(),
			TEXT(""),
			TEXT("Image Files (*.png; *.jpg| *.png;*.jpg)"),
			EFileDialogFlags::None,
			OutFilenames
		);

		if (bOpened && OutFilenames.Num() > 0)
		{
			FString SelectedImagePath = OutFilenames[0];

			TArray<uint8> ImageData;

			if (FFileHelper::LoadFileToArray(ImageData, *SelectedImagePath))
			{
				IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(
					FName("ImageWrapper"));

				EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(ImageData.GetData(), ImageData.Num());

				TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);

				if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
				{
					TArray64<uint8> RawData;

					if (ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, RawData))
					{
						TArray64<uint8>* RawDataProcessed = &RawData;
						UTexture2D* Texture = UTexture2D::CreateTransient(
							ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_R8G8B8A8);

						if (Texture)
						{
							FTexture2DMipMap& Mip = Texture->GetPlatformData()->Mips[0]; // 
							void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

							FMemory::Memcpy(Data, RawDataProcessed->GetData(), RawDataProcessed->Num());
							Mip.BulkData.Unlock();

							Texture->GetPlatformData()->SetNumSlices(1);

							Texture->NeverStream = true;

							Texture->UpdateResource();

							return Texture;
						}
					}
				}
			}
		}
	}
	return nullptr;
}
