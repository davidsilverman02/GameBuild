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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagicProjectile::execExplode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicProjectile::execOnActorHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_AMagicProjectile_Explode = FName(TEXT("Explode"));
	void AMagicProjectile::Explode()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMagicProjectile_Explode),NULL);
	}
	void AMagicProjectile::StaticRegisterNativesAMagicProjectile()
	{
		UClass* Class = AMagicProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explode", &AMagicProjectile::execExplode },
			{ "OnActorHit", &AMagicProjectile::execOnActorHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicProjectile_Explode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_Explode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicProjectile_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicProjectile, nullptr, "Explode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_Explode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_Explode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicProjectile_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicProjectile_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics
	{
		struct MagicProjectile_eventOnActorHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicProjectile_eventOnActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicProjectile, nullptr, "OnActorHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::MagicProjectile_eventOnActorHit_Parms), Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicProjectile_OnActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicProjectile_OnActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicProjectile);
	UClass* Z_Construct_UClass_AMagicProjectile_NoRegister()
	{
		return AMagicProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMagicProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpactVFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pogy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicProjectile_Explode, "Explode" }, // 2508602746
		{ &Z_Construct_UFunction_AMagicProjectile_OnActorHit, "OnActorHit" }, // 1681837108
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "MagicProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicProjectile, ImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Projectan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_Parts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicProjectile_Statics::NewProp_ImpactVFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicProjectile_Statics::ClassParams = {
		&AMagicProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AMagicProjectile, AMagicProjectile::StaticClass, TEXT("AMagicProjectile"), &Z_Registration_Info_UClass_AMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicProjectile), 4199056874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_984220320(TEXT("/Script/Pogy"),
		Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_MagicProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
