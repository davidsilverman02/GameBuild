// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pogy/Teleporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporter() {}
// Cross Module References
	POGY_API UClass* Z_Construct_UClass_ATeleporter_NoRegister();
	POGY_API UClass* Z_Construct_UClass_ATeleporter();
	POGY_API UClass* Z_Construct_UClass_AMagicProjectile();
	UPackage* Z_Construct_UPackage__Script_Pogy();
// End Cross Module References
	void ATeleporter::StaticRegisterNativesATeleporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleporter);
	UClass* Z_Construct_UClass_ATeleporter_NoRegister()
	{
		return ATeleporter::StaticClass();
	}
	struct Z_Construct_UClass_ATeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetonateDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetonateDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMagicProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Pogy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Teleporter.h" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportDelay = { "TeleportDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter, TeleportDelay), METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::NewProp_DetonateDelay_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_DetonateDelay = { "DetonateDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter, DetonateDelay), METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::NewProp_DetonateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::NewProp_DetonateDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_DetonateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleporter_Statics::ClassParams = {
		&ATeleporter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleporter()
	{
		if (!Z_Registration_Info_UClass_ATeleporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleporter.OuterSingleton, Z_Construct_UClass_ATeleporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeleporter.OuterSingleton;
	}
	template<> POGY_API UClass* StaticClass<ATeleporter>()
	{
		return ATeleporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporter);
	struct Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_Teleporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_Teleporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeleporter, ATeleporter::StaticClass, TEXT("ATeleporter"), &Z_Registration_Info_UClass_ATeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleporter), 557098324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_Teleporter_h_3923949774(TEXT("/Script/Pogy"),
		Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_Teleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_Teleporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
