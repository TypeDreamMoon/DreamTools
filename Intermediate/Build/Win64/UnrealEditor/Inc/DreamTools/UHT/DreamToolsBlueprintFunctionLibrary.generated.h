// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DreamToolsBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EPathMode : uint8;
#ifdef DREAMTOOLS_DreamToolsBlueprintFunctionLibrary_generated_h
#error "DreamToolsBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in DreamToolsBlueprintFunctionLibrary.h"
#endif
#define DREAMTOOLS_DreamToolsBlueprintFunctionLibrary_generated_h

#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_SPARSE_DATA
#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenImageByFileDialogue); \
	DECLARE_FUNCTION(execOpenImage); \
	DECLARE_FUNCTION(execGetViewportScreenshot);


#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_ACCESSORS
#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamToolsBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDreamToolsBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDreamToolsBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DreamTools"), NO_API) \
	DECLARE_SERIALIZER(UDreamToolsBlueprintFunctionLibrary)


#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamToolsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDreamToolsBlueprintFunctionLibrary(UDreamToolsBlueprintFunctionLibrary&&); \
	NO_API UDreamToolsBlueprintFunctionLibrary(const UDreamToolsBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamToolsBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamToolsBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamToolsBlueprintFunctionLibrary) \
	NO_API virtual ~UDreamToolsBlueprintFunctionLibrary();


#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_22_PROLOG
#define FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_ACCESSORS \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMTOOLS_API UClass* StaticClass<class UDreamToolsBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginsCreate_Plugins_DreamTools_Source_DreamTools_Public_DreamToolsBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EPATHMODE(op) \
	op(EPathMode::EPM_Custom) \
	op(EPathMode::EPM_ProjectDir) \
	op(EPathMode::EPM_ProjectSaveDir) 

enum class EPathMode : uint8;
template<> struct TIsUEnumClass<EPathMode> { enum { Value = true }; };
template<> DREAMTOOLS_API UEnum* StaticEnum<EPathMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
