// - BY DreamMoon 2024 -
// https://dmstudio.top

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DreamToolsBlueprintFunctionLibrary.generated.h"

/**
 * 
 */

UENUM(BlueprintType, DisplayName = "E路径模式")
enum class EPathMode : uint8
{
	EPM_Custom				= 0 UMETA(DisplayName = "自定义路径"),
	EPM_ProjectDir			= 1 UMETA(DisplayName = "项目路径"),
	EPM_ProjectSaveDir		= 2 UMETA(DisplayName = "项目保存路径")
};

UCLASS(DisplayName="DreamTools蓝图函数库")
class DREAMTOOLS_API UDreamToolsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Dream工具箱", DisplayName="获取视口截图")
	static void GetViewportScreenshot(FString ImageName, bool SaveUI, EPathMode PathMode = EPathMode::EPM_ProjectSaveDir);

    UFUNCTION(BlueprintCallable, Category="Dream工具箱", DisplayName="打开图像")
	static UTexture2D* OpenImage(FString ImageName, EPathMode PathMode = EPathMode::EPM_ProjectSaveDir);

	UFUNCTION(BlueprintCallable, Category="Dream工具箱", DisplayName="从文件对话框中打开图像")
	static UTexture2D* OpenImageByFileDialogue();
};
