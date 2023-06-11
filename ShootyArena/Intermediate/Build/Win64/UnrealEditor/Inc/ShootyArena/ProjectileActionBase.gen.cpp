// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ProjectileActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActionBase() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UProjectileActionBase_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UProjectileActionBase();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionBase();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileActionBase::execAttackDelay_Elapsed)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InstigatorCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackDelay_Elapsed(Z_Param_InstigatorCharacter);
		P_NATIVE_END;
	}
	void UProjectileActionBase::StaticRegisterNativesUProjectileActionBase()
	{
		UClass* Class = UProjectileActionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackDelay_Elapsed", &UProjectileActionBase::execAttackDelay_Elapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics
	{
		struct ProjectileActionBase_eventAttackDelay_Elapsed_Parms
		{
			ACharacter* InstigatorCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileActionBase_eventAttackDelay_Elapsed_Parms, InstigatorCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::NewProp_InstigatorCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileActionBase, nullptr, "AttackDelay_Elapsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::ProjectileActionBase_eventAttackDelay_Elapsed_Parms), Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileActionBase);
	UClass* Z_Construct_UClass_UProjectileActionBase_NoRegister()
	{
		return UProjectileActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepDistanceFallback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistanceFallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAnimDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CastingEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CastingSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileActionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileActionBase_AttackDelay_Elapsed, "AttackDelay_Elapsed" }, // 3319851225
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectileActionBase.h" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepRadius_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/* Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction */" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
		{ "ToolTip", "Sphere radius of the sweep to find desired target under crosshair. Adjusts final projectile direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepRadius = { "SweepRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, SweepRadius), METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepDistanceFallback_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/* Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction */" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
		{ "ToolTip", "Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepDistanceFallback = { "SweepDistanceFallback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, SweepDistanceFallback), METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepDistanceFallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepDistanceFallback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, HandSocketName), METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_HandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_HandSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnimDelay_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnimDelay = { "AttackAnimDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, AttackAnimDelay), METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnimDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnimDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnim_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingEffect_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "/* Particle System played during attack animation */" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
		{ "ToolTip", "Particle System played during attack animation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingEffect = { "CastingEffect", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, CastingEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingSound_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "/* Sound Effect to play (Can be Wave or Cue) */" },
		{ "ModuleRelativePath", "ProjectileActionBase.h" },
		{ "ToolTip", "Sound Effect to play (Can be Wave or Cue)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingSound = { "CastingSound", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectileActionBase, CastingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileActionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_SweepDistanceFallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_HandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnimDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_AttackAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileActionBase_Statics::NewProp_CastingSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileActionBase_Statics::ClassParams = {
		&UProjectileActionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileActionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectileActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectileActionBase()
	{
		if (!Z_Registration_Info_UClass_UProjectileActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileActionBase.OuterSingleton, Z_Construct_UClass_UProjectileActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileActionBase.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UProjectileActionBase>()
	{
		return UProjectileActionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileActionBase);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileActionBase, UProjectileActionBase::StaticClass, TEXT("UProjectileActionBase"), &Z_Registration_Info_UClass_UProjectileActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileActionBase), 1747743332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_3900416215(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
