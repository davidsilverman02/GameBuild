// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/BoxSerial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxSerial() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UBoxSerial_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UBoxSerial();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
// End Cross Module References
	void UBoxSerial::StaticRegisterNativesUBoxSerial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxSerial);
	UClass* Z_Construct_UClass_UBoxSerial_NoRegister()
	{
		return UBoxSerial::StaticClass();
	}
	struct Z_Construct_UClass_UBoxSerial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxSerial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxSerial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BoxSerial.h" },
		{ "ModuleRelativePath", "BoxSerial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxSerial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxSerial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxSerial_Statics::ClassParams = {
		&UBoxSerial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoxSerial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxSerial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxSerial()
	{
		if (!Z_Registration_Info_UClass_UBoxSerial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxSerial.OuterSingleton, Z_Construct_UClass_UBoxSerial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoxSerial.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UBoxSerial>()
	{
		return UBoxSerial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxSerial);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxSerial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxSerial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoxSerial, UBoxSerial::StaticClass, TEXT("UBoxSerial"), &Z_Registration_Info_UClass_UBoxSerial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxSerial), 1293697709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxSerial_h_335962326(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxSerial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxSerial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
