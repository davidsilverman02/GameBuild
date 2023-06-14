// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ShootyArenaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootyArenaCharacter() {}
// Cross Module References
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaCharacter_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UStatisticComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaProjectile_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AShootyArenaCharacter::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootyArenaCharacter::execGetMuzzle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootyArenaCharacter::execGetRota)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRota();
		P_NATIVE_END;
	}
	static FName NAME_AShootyArenaCharacter_Shoot = FName(TEXT("Shoot"));
	void AShootyArenaCharacter::Shoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootyArenaCharacter_Shoot),NULL);
	}
	void AShootyArenaCharacter::StaticRegisterNativesAShootyArenaCharacter()
	{
		UClass* Class = AShootyArenaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMuzzle", &AShootyArenaCharacter::execGetMuzzle },
			{ "GetRota", &AShootyArenaCharacter::execGetRota },
			{ "Shoot", &AShootyArenaCharacter::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics
	{
		struct ShootyArenaCharacter_eventGetMuzzle_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootyArenaCharacter_eventGetMuzzle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaCharacter, nullptr, "GetMuzzle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::ShootyArenaCharacter_eventGetMuzzle_Parms), Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics
	{
		struct ShootyArenaCharacter_eventGetRota_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootyArenaCharacter_eventGetRota_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaCharacter, nullptr, "GetRota", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::ShootyArenaCharacter_eventGetRota_Parms), Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaCharacter_GetRota()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaCharacter_GetRota_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaCharacter, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootyArenaCharacter);
	UClass* Z_Construct_UClass_AShootyArenaCharacter_NoRegister()
	{
		return AShootyArenaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootyArenaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Puntas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Puntas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootyArenaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootyArenaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootyArenaCharacter_GetMuzzle, "GetMuzzle" }, // 838609170
		{ &Z_Construct_UFunction_AShootyArenaCharacter_GetRota, "GetRota" }, // 3268233021
		{ &Z_Construct_UFunction_AShootyArenaCharacter_Shoot, "Shoot" }, // 2286523030
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootyArenaCharacter.h" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, Actions), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Puntas_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Puntas = { "Puntas", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, Puntas), Z_Construct_UClass_UStatisticComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Puntas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Puntas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_JumpSpeed_MetaData[] = {
		{ "Category", "ShootyArenaCharacter" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_JumpSpeed = { "JumpSpeed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, JumpSpeed), METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_JumpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_JumpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, OnUseItem), Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 2939935926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ShootyArenaCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaCharacter, ProjectileClass), Z_Construct_UClass_AShootyArenaProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootyArenaCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_Puntas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_JumpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaCharacter_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootyArenaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootyArenaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootyArenaCharacter_Statics::ClassParams = {
		&AShootyArenaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootyArenaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootyArenaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootyArenaCharacter()
	{
		if (!Z_Registration_Info_UClass_AShootyArenaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootyArenaCharacter.OuterSingleton, Z_Construct_UClass_AShootyArenaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootyArenaCharacter.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AShootyArenaCharacter>()
	{
		return AShootyArenaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootyArenaCharacter);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootyArenaCharacter, AShootyArenaCharacter::StaticClass, TEXT("AShootyArenaCharacter"), &Z_Registration_Info_UClass_AShootyArenaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootyArenaCharacter), 2573341663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_388885483(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
