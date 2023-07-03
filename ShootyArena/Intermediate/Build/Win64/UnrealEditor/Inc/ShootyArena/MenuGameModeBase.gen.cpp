// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/MenuGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuGameModeBase() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMenuGameModeBase_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMenuGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void AMenuGameModeBase::StaticRegisterNativesAMenuGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuGameModeBase);
	UClass* Z_Construct_UClass_AMenuGameModeBase_NoRegister()
	{
		return AMenuGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMenuGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MenuGameModeBase.h" },
		{ "ModuleRelativePath", "MenuGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGameModeBase_Statics::NewProp_MyController_MetaData[] = {
		{ "Category", "MenuGameModeBase" },
		{ "Comment", "//UUserWidget* Wight;\n" },
		{ "ModuleRelativePath", "MenuGameModeBase.h" },
		{ "ToolTip", "UUserWidget* Wight;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMenuGameModeBase_Statics::NewProp_MyController = { "MyController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMenuGameModeBase, MyController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMenuGameModeBase_Statics::NewProp_MyController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameModeBase_Statics::NewProp_MyController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMenuGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMenuGameModeBase_Statics::NewProp_MyController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuGameModeBase_Statics::ClassParams = {
		&AMenuGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMenuGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMenuGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMenuGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuGameModeBase.OuterSingleton, Z_Construct_UClass_AMenuGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuGameModeBase.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AMenuGameModeBase>()
	{
		return AMenuGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuGameModeBase);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MenuGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MenuGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuGameModeBase, AMenuGameModeBase::StaticClass, TEXT("AMenuGameModeBase"), &Z_Registration_Info_UClass_AMenuGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuGameModeBase), 2766848819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MenuGameModeBase_h_3384096334(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MenuGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MenuGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
