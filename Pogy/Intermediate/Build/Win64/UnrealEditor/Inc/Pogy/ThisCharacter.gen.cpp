// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pogy/ThisCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThisCharacter() {}
// Cross Module References
	POGY_API UClass* Z_Construct_UClass_AThisCharacter_NoRegister();
	POGY_API UClass* Z_Construct_UClass_AThisCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Pogy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AThisCharacter::StaticRegisterNativesAThisCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThisCharacter);
	UClass* Z_Construct_UClass_AThisCharacter_NoRegister()
	{
		return AThisCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThisCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fJumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fJumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shotPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_shotPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spring_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThisCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Pogy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThisCharacter.h" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::NewProp_fJumpForce_MetaData[] = {
		{ "Category", "ThisCharacter" },
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThisCharacter_Statics::NewProp_fJumpForce = { "fJumpForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThisCharacter, fJumpForce), METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::NewProp_fJumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::NewProp_fJumpForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::NewProp_shotPos_MetaData[] = {
		{ "Category", "ThisCharacter" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AThisCharacter_Statics::NewProp_shotPos = { "shotPos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThisCharacter, shotPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::NewProp_shotPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::NewProp_shotPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "ThisCharacter" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThisCharacter_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThisCharacter, Projectile), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::NewProp_Spring_MetaData[] = {
		{ "Category", "ThisCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThisCharacter_Statics::NewProp_Spring = { "Spring", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThisCharacter, Spring), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Spring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Spring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThisCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ThisCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThisCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThisCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThisCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::NewProp_Camera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThisCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisCharacter_Statics::NewProp_fJumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisCharacter_Statics::NewProp_shotPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisCharacter_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisCharacter_Statics::NewProp_Spring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThisCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThisCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThisCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThisCharacter_Statics::ClassParams = {
		&AThisCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThisCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThisCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThisCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThisCharacter()
	{
		if (!Z_Registration_Info_UClass_AThisCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThisCharacter.OuterSingleton, Z_Construct_UClass_AThisCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThisCharacter.OuterSingleton;
	}
	template<> POGY_API UClass* StaticClass<AThisCharacter>()
	{
		return AThisCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThisCharacter);
	struct Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_ThisCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_ThisCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThisCharacter, AThisCharacter::StaticClass, TEXT("AThisCharacter"), &Z_Registration_Info_UClass_AThisCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThisCharacter), 695807319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_ThisCharacter_h_841144780(TEXT("/Script/Pogy"),
		Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_ThisCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pogy_Source_Pogy_ThisCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
