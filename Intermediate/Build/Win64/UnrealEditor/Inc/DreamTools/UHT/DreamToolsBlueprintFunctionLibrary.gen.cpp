// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamTools/Public/DreamToolsBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamToolsBlueprintFunctionLibrary() {}
// Cross Module References
	DREAMTOOLS_API UClass* Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary();
	DREAMTOOLS_API UClass* Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_NoRegister();
	DREAMTOOLS_API UEnum* Z_Construct_UEnum_DreamTools_EPathMode();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DreamTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathMode;
	static UEnum* EPathMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamTools_EPathMode, (UObject*)Z_Construct_UPackage__Script_DreamTools(), TEXT("EPathMode"));
		}
		return Z_Registration_Info_UEnum_EPathMode.OuterSingleton;
	}
	template<> DREAMTOOLS_API UEnum* StaticEnum<EPathMode>()
	{
		return EPathMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DreamTools_EPathMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enumerators[] = {
		{ "EPathMode::EPM_Custom", (int64)EPathMode::EPM_Custom },
		{ "EPathMode::EPM_ProjectDir", (int64)EPathMode::EPM_ProjectDir },
		{ "EPathMode::EPM_ProjectSaveDir", (int64)EPathMode::EPM_ProjectSaveDir },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "E\xe8\xb7\xaf\xe5\xbe\x84\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "EPM_Custom.Comment", "/**\n * \n */" },
		{ "EPM_Custom.DisplayName", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "EPM_Custom.Name", "EPathMode::EPM_Custom" },
		{ "EPM_ProjectDir.Comment", "/**\n * \n */" },
		{ "EPM_ProjectDir.DisplayName", "\xe9\xa1\xb9\xe7\x9b\xae\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "EPM_ProjectDir.Name", "EPathMode::EPM_ProjectDir" },
		{ "EPM_ProjectSaveDir.Comment", "/**\n * \n */" },
		{ "EPM_ProjectSaveDir.DisplayName", "\xe9\xa1\xb9\xe7\x9b\xae\xe4\xbf\x9d\xe5\xad\x98\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "EPM_ProjectSaveDir.Name", "EPathMode::EPM_ProjectSaveDir" },
		{ "ModuleRelativePath", "Public/DreamToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamTools_EPathMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DreamTools,
		nullptr,
		"EPathMode",
		"EPathMode",
		Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamTools_EPathMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DreamTools_EPathMode()
	{
		if (!Z_Registration_Info_UEnum_EPathMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathMode.InnerSingleton, Z_Construct_UEnum_DreamTools_EPathMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UDreamToolsBlueprintFunctionLibrary::execOpenImageByFileDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UDreamToolsBlueprintFunctionLibrary::OpenImageByFileDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamToolsBlueprintFunctionLibrary::execOpenImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageName);
		P_GET_ENUM(EPathMode,Z_Param_PathMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UDreamToolsBlueprintFunctionLibrary::OpenImage(Z_Param_ImageName,EPathMode(Z_Param_PathMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDreamToolsBlueprintFunctionLibrary::execGetViewportScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageName);
		P_GET_UBOOL(Z_Param_SaveUI);
		P_GET_ENUM(EPathMode,Z_Param_PathMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDreamToolsBlueprintFunctionLibrary::GetViewportScreenshot(Z_Param_ImageName,Z_Param_SaveUI,EPathMode(Z_Param_PathMode));
		P_NATIVE_END;
	}
	void UDreamToolsBlueprintFunctionLibrary::StaticRegisterNativesUDreamToolsBlueprintFunctionLibrary()
	{
		UClass* Class = UDreamToolsBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewportScreenshot", &UDreamToolsBlueprintFunctionLibrary::execGetViewportScreenshot },
			{ "OpenImage", &UDreamToolsBlueprintFunctionLibrary::execOpenImage },
			{ "OpenImageByFileDialogue", &UDreamToolsBlueprintFunctionLibrary::execOpenImageByFileDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics
	{
		struct DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms
		{
			FString ImageName;
			bool SaveUI;
			EPathMode PathMode;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static void NewProp_SaveUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveUI;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PathMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PathMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms, ImageName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_SaveUI_SetBit(void* Obj)
	{
		((DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms*)Obj)->SaveUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_SaveUI = { "SaveUI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms), &Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_SaveUI_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_PathMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_PathMode = { "PathMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms, PathMode), Z_Construct_UEnum_DreamTools_EPathMode, METADATA_PARAMS(0, nullptr) }; // 828504953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_SaveUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_PathMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::NewProp_PathMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dream\xe5\xb7\xa5\xe5\x85\xb7\xe7\xae\xb1" },
		{ "CPP_Default_PathMode", "EPM_ProjectSaveDir" },
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe5\x8f\xa3\xe6\x88\xaa\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/DreamToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary, nullptr, "GetViewportScreenshot", nullptr, nullptr, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::DreamToolsBlueprintFunctionLibrary_eventGetViewportScreenshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics
	{
		struct DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms
		{
			FString ImageName;
			EPathMode PathMode;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PathMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PathMode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms, ImageName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_PathMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_PathMode = { "PathMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms, PathMode), Z_Construct_UEnum_DreamTools_EPathMode, METADATA_PARAMS(0, nullptr) }; // 828504953
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_PathMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_PathMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dream\xe5\xb7\xa5\xe5\x85\xb7\xe7\xae\xb1" },
		{ "CPP_Default_PathMode", "EPM_ProjectSaveDir" },
		{ "DisplayName", "\xe6\x89\x93\xe5\xbc\x80\xe5\x9b\xbe\xe5\x83\x8f" },
		{ "ModuleRelativePath", "Public/DreamToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary, nullptr, "OpenImage", nullptr, nullptr, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::DreamToolsBlueprintFunctionLibrary_eventOpenImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics
	{
		struct DreamToolsBlueprintFunctionLibrary_eventOpenImageByFileDialogue_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamToolsBlueprintFunctionLibrary_eventOpenImageByFileDialogue_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dream\xe5\xb7\xa5\xe5\x85\xb7\xe7\xae\xb1" },
		{ "DisplayName", "\xe4\xbb\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\xe4\xb8\xad\xe6\x89\x93\xe5\xbc\x80\xe5\x9b\xbe\xe5\x83\x8f" },
		{ "ModuleRelativePath", "Public/DreamToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary, nullptr, "OpenImageByFileDialogue", nullptr, nullptr, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::DreamToolsBlueprintFunctionLibrary_eventOpenImageByFileDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::DreamToolsBlueprintFunctionLibrary_eventOpenImageByFileDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamToolsBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_NoRegister()
	{
		return UDreamToolsBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_GetViewportScreenshot, "GetViewportScreenshot" }, // 2056636057
		{ &Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImage, "OpenImage" }, // 1807701350
		{ &Z_Construct_UFunction_UDreamToolsBlueprintFunctionLibrary_OpenImageByFileDialogue, "OpenImageByFileDialogue" }, // 2179317580
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "DreamTools\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93" },
		{ "IncludePath", "DreamToolsBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DreamToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamToolsBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::ClassParams = {
		&UDreamToolsBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDreamToolsBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamToolsBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDreamToolsBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> DREAMTOOLS_API UClass* StaticClass<UDreamToolsBlueprintFunctionLibrary>()
	{
		return UDreamToolsBlueprintFunctionLibrary::StaticClass();
	}
	UDreamToolsBlueprintFunctionLibrary::UDreamToolsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamToolsBlueprintFunctionLibrary);
	UDreamToolsBlueprintFunctionLibrary::~UDreamToolsBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EPathMode_StaticEnum, TEXT("EPathMode"), &Z_Registration_Info_UEnum_EPathMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 828504953U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary, UDreamToolsBlueprintFunctionLibrary::StaticClass, TEXT("UDreamToolsBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UDreamToolsBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamToolsBlueprintFunctionLibrary), 1213789439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_402538489(TEXT("/Script/DreamTools"),
		Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
