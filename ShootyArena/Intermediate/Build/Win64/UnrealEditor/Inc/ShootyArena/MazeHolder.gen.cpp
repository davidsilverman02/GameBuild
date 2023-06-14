// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/MazeHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeHolder() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UMazeHolder_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UMazeHolder();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
// End Cross Module References
	void UMazeHolder::StaticRegisterNativesUMazeHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMazeHolder);
	UClass* Z_Construct_UClass_UMazeHolder_NoRegister()
	{
		return UMazeHolder::StaticClass();
	}
	struct Z_Construct_UClass_UMazeHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeHolder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MazeHolder.h" },
		{ "ModuleRelativePath", "MazeHolder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMazeHolder_Statics::ClassParams = {
		&UMazeHolder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeHolder()
	{
		if (!Z_Registration_Info_UClass_UMazeHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMazeHolder.OuterSingleton, Z_Construct_UClass_UMazeHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMazeHolder.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UMazeHolder>()
	{
		return UMazeHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeHolder);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeHolder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeHolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMazeHolder, UMazeHolder::StaticClass, TEXT("UMazeHolder"), &Z_Registration_Info_UClass_UMazeHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMazeHolder), 3276605367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeHolder_h_3544275528(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeHolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeHolder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
