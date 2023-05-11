// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pogy/MagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicProjectile() {}
// Cross Module References
	POGY_API UClass* Z_Construct_UClass_AMagicProjectile_NoRegister();
	POGY_API UClass* Z_Construct_UClass_AMagicProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pogy();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AMagicProjectile::StaticRegisterNativesAMagicProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicProjectile);
	UClass* Z_Construct_UClass_AMagicProjectile_NoRegister()
	{
		return AMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectan_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pogy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicProjectile.h" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, speed), METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan = { "Projectan", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, Projectan), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts_MetaData[] = {
		{ "Category", "MagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, Parts), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicProjectile_Statics::ClassParams = {
		&AMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicProjectile()
	{
		if (!Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton, Z_Construct_UClass_AMagicProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicProjectile.OuterSingleton;
	}
	template<> POGY_API UClass* StaticClass<AMagicProjectile>()
	{
		return AMagicProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicProjectile);
	struct Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicProjectile, AMagicProjectile::StaticClass, TEXT("AMagicProjectile"), &Z_Registration_Info_UClass_AMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicProjectile), 2306774215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_3024060883(TEXT("/Script/Pogy"),
		Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
