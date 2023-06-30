// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ArenaPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaPlayerState() {}
// Cross Module References
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AArenaPlayerState_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AArenaPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics
	{
		struct _Script_ShootyArena_eventOnPointsChanged_Parms
		{
			AArenaPlayerState* PlayerState;
			int32 NewPoints;
			int32 Delta;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPoints;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnPointsChanged_Parms, PlayerState), Z_Construct_UClass_AArenaPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_NewPoints = { "NewPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnPointsChanged_Parms, NewPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnPointsChanged_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_NewPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "OnPointsChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::_Script_ShootyArena_eventOnPointsChanged_Parms), Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AArenaPlayerState::execRemovePoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePoints(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaPlayerState::execAddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaPlayerState::execGetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaPlayerState::execOnRep_Points)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Points(Z_Param_OldPoints);
		P_NATIVE_END;
	}
	void AArenaPlayerState::StaticRegisterNativesAArenaPlayerState()
	{
		UClass* Class = AArenaPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &AArenaPlayerState::execAddPoints },
			{ "GetPoints", &AArenaPlayerState::execGetPoints },
			{ "OnRep_Points", &AArenaPlayerState::execOnRep_Points },
			{ "RemovePoints", &AArenaPlayerState::execRemovePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics
	{
		struct ArenaPlayerState_eventAddPoints_Parms
		{
			int32 Delta;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaPlayerState_eventAddPoints_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaPlayerState, nullptr, "AddPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::ArenaPlayerState_eventAddPoints_Parms), Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaPlayerState_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaPlayerState_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics
	{
		struct ArenaPlayerState_eventGetPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaPlayerState_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaPlayerState, nullptr, "GetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::ArenaPlayerState_eventGetPoints_Parms), Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaPlayerState_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaPlayerState_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics
	{
		struct ArenaPlayerState_eventOnRep_Points_Parms
		{
			int32 OldPoints;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::NewProp_OldPoints = { "OldPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaPlayerState_eventOnRep_Points_Parms, OldPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::NewProp_OldPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaPlayerState, nullptr, "OnRep_Points", nullptr, nullptr, sizeof(Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::ArenaPlayerState_eventOnRep_Points_Parms), Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaPlayerState_OnRep_Points()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaPlayerState_OnRep_Points_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics
	{
		struct ArenaPlayerState_eventRemovePoints_Parms
		{
			int32 Delta;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaPlayerState_eventRemovePoints_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArenaPlayerState_eventRemovePoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArenaPlayerState_eventRemovePoints_Parms), &Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaPlayerState, nullptr, "RemovePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::ArenaPlayerState_eventRemovePoints_Parms), Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaPlayerState_RemovePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaPlayerState_RemovePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaPlayerState);
	UClass* Z_Construct_UClass_AArenaPlayerState_NoRegister()
	{
		return AArenaPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AArenaPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPointsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArenaPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArenaPlayerState_AddPoints, "AddPoints" }, // 1544514952
		{ &Z_Construct_UFunction_AArenaPlayerState_GetPoints, "GetPoints" }, // 3451113910
		{ &Z_Construct_UFunction_AArenaPlayerState_OnRep_Points, "OnRep_Points" }, // 2346453735
		{ &Z_Construct_UFunction_AArenaPlayerState_RemovePoints, "RemovePoints" }, // 3542170229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArenaPlayerState.h" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_Points = { "Points", "OnRep_Points", (EPropertyFlags)0x0020080100010021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaPlayerState, Points), METADATA_PARAMS(Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_OnPointsChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "ArenaPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_OnPointsChanged = { "OnPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaPlayerState, OnPointsChanged), Z_Construct_UDelegateFunction_ShootyArena_OnPointsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_OnPointsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_OnPointsChanged_MetaData)) }; // 3809442845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaPlayerState_Statics::NewProp_OnPointsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaPlayerState_Statics::ClassParams = {
		&AArenaPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArenaPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArenaPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArenaPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArenaPlayerState()
	{
		if (!Z_Registration_Info_UClass_AArenaPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaPlayerState.OuterSingleton, Z_Construct_UClass_AArenaPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArenaPlayerState.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AArenaPlayerState>()
	{
		return AArenaPlayerState::StaticClass();
	}

	void AArenaPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Points(TEXT("Points"));

		const bool bIsValid = true
			&& Name_Points == ClassReps[(int32)ENetFields_Private::Points].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AArenaPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaPlayerState);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArenaPlayerState, AArenaPlayerState::StaticClass, TEXT("AArenaPlayerState"), &Z_Registration_Info_UClass_AArenaPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaPlayerState), 3094493005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_889847660(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
