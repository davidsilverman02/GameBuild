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
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaGameMode_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AShootyArenaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics
	{
		struct _Script_ShootyArena_eventOnTimeChanged_Parms
		{
			FString Tim;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::NewProp_Tim = { "Tim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnTimeChanged_Parms, Tim), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::NewProp_Tim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "OnTimeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::_Script_ShootyArena_eventOnTimeChanged_Parms), Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics
	{
		struct _Script_ShootyArena_eventGameEnded_Parms
		{
			bool HighHealth;
		};
		static void NewProp_HighHealth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HighHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::NewProp_HighHealth_SetBit(void* Obj)
	{
		((_Script_ShootyArena_eventGameEnded_Parms*)Obj)->HighHealth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::NewProp_HighHealth = { "HighHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_ShootyArena_eventGameEnded_Parms), &Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::NewProp_HighHealth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::NewProp_HighHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "GameEnded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::_Script_ShootyArena_eventGameEnded_Parms), Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AShootyArenaGameMode::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootyArenaGameMode::execTimeEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimeEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootyArenaGameMode::execTimeDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimeDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootyArenaGameMode::execTimeInMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TimeInMinutes();
		P_NATIVE_END;
	}
	void AShootyArenaGameMode::StaticRegisterNativesAShootyArenaGameMode()
	{
		UClass* Class = AShootyArenaGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartGame", &AShootyArenaGameMode::execStartGame },
			{ "TimeDown", &AShootyArenaGameMode::execTimeDown },
			{ "TimeEnd", &AShootyArenaGameMode::execTimeEnd },
			{ "TimeInMinutes", &AShootyArenaGameMode::execTimeInMinutes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaGameMode, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaGameMode, nullptr, "TimeDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaGameMode_TimeDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaGameMode_TimeDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaGameMode, nullptr, "TimeEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics
	{
		struct ShootyArenaGameMode_eventTimeInMinutes_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootyArenaGameMode_eventTimeInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootyArenaGameMode, nullptr, "TimeInMinutes", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::ShootyArenaGameMode_eventTimeInMinutes_Parms), Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootyArenaGameMode);
	UClass* Z_Construct_UClass_AShootyArenaGameMode_NoRegister()
	{
		return AShootyArenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShootyArenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MatchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimeChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGame_MetaData[];
#endif
		static void NewProp_InGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootyArenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootyArenaGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootyArenaGameMode_StartGame, "StartGame" }, // 422795472
		{ &Z_Construct_UFunction_AShootyArenaGameMode_TimeDown, "TimeDown" }, // 2707739232
		{ &Z_Construct_UFunction_AShootyArenaGameMode_TimeEnd, "TimeEnd" }, // 1002155681
		{ &Z_Construct_UFunction_AShootyArenaGameMode_TimeInMinutes, "TimeInMinutes" }, // 3025958959
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootyArenaGameMode.h" },
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchTime_MetaData[] = {
		{ "Category", "ShootyArenaGameMode" },
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaGameMode, MatchTime), METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "Category", "ShootyArenaGameMode" },
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaGameMode, CurrentTime), METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_CurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchStart_MetaData[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchStart = { "MatchStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaGameMode, MatchStart), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchStart_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_TimeChanged_MetaData[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_TimeChanged = { "TimeChanged", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaGameMode, TimeChanged), Z_Construct_UDelegateFunction_ShootyArena_OnTimeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_TimeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_TimeChanged_MetaData)) }; // 2266618145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_GameEnded_MetaData[] = {
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_GameEnded = { "GameEnded", nullptr, (EPropertyFlags)0x0010100000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootyArenaGameMode, GameEnded), Z_Construct_UDelegateFunction_ShootyArena_GameEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_GameEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_GameEnded_MetaData)) }; // 448365610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame_MetaData[] = {
		{ "Category", "ShootyArenaGameMode" },
		{ "ModuleRelativePath", "ShootyArenaGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame_SetBit(void* Obj)
	{
		((AShootyArenaGameMode*)Obj)->InGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShootyArenaGameMode), &Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootyArenaGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_CurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_MatchStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_TimeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_GameEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootyArenaGameMode_Statics::NewProp_InGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootyArenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootyArenaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootyArenaGameMode_Statics::ClassParams = {
		&AShootyArenaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootyArenaGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootyArenaGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_AShootyArenaGameMode, AShootyArenaGameMode::StaticClass, TEXT("AShootyArenaGameMode"), &Z_Registration_Info_UClass_AShootyArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootyArenaGameMode), 3493328441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_646151804(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
