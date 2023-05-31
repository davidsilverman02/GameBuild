// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ShootyArenaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootyArenaGameMode() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaGameMode_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
// End Cross Module References
	void AShootyArenaGameMode::StaticRegisterNativesAShootyArenaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootyArenaGameMode);
	UClass* Z_Construct_UClass_AShootyArenaGameMode_NoRegister()
	{
		return AShootyArenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShootyArenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootyArenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootyArenaGameMode.h" },
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootyArenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootyArenaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootyArenaGameMode_Statics::ClassParams = {
		&AShootyArenaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootyArenaGameMode()
	{
		if (!Z_Registration_Info_UClass_AShootyArenaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootyArenaGameMode.OuterSingleton, Z_Construct_UClass_AShootyArenaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootyArenaGameMode.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AShootyArenaGameMode>()
	{
		return AShootyArenaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootyArenaGameMode);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootyArenaGameMode, AShootyArenaGameMode::StaticClass, TEXT("AShootyArenaGameMode"), &Z_Registration_Info_UClass_AShootyArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootyArenaGameMode), 2009771942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_972638518(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
