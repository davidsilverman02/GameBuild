// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionBase() {}
// Cross Module References
	SHOOTYARENA_API UScriptStruct* Z_Construct_UScriptStruct_FActionRepData();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionBase_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionRepData;
class UScriptStruct* FActionRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionRepData, Z_Construct_UPackage__Script_ShootyArena(), TEXT("ActionRepData"));
	}
	return Z_Registration_Info_UScriptStruct_ActionRepData.OuterSingleton;
}
template<> SHOOTYARENA_API UScriptStruct* StaticStruct<FActionRepData>()
{
	return FActionRepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionRepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionRepData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((FActionRepData*)Obj)->bIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActionRepData), &Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionRepData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_bIsRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionRepData_Statics::NewProp_Instigator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
		nullptr,
		&NewStructOps,
		"ActionRepData",
		sizeof(FActionRepData),
		alignof(FActionRepData),
		Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionRepData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton, Z_Construct_UScriptStruct_FActionRepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionRepData.InnerSingleton;
	}
	DEFINE_FUNCTION(UActionBase::execStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBase::execStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBase::execCanStart)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStart_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBase::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBase::execOnRep_RepData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RepData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionBase::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	static FName NAME_UActionBase_CanStart = FName(TEXT("CanStart"));
	bool UActionBase::CanStart(AActor* Instigator)
	{
		ActionBase_eventCanStart_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UActionBase_CanStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UActionBase_StartAction = FName(TEXT("StartAction"));
	void UActionBase::StartAction(AActor* Instigator)
	{
		ActionBase_eventStartAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UActionBase_StartAction),&Parms);
	}
	static FName NAME_UActionBase_StopAction = FName(TEXT("StopAction"));
	void UActionBase::StopAction(AActor* Instigator)
	{
		ActionBase_eventStopAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UActionBase_StopAction),&Parms);
	}
	void UActionBase::StaticRegisterNativesUActionBase()
	{
		UClass* Class = UActionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStart", &UActionBase::execCanStart },
			{ "GetOwningComponent", &UActionBase::execGetOwningComponent },
			{ "IsRunning", &UActionBase::execIsRunning },
			{ "OnRep_RepData", &UActionBase::execOnRep_RepData },
			{ "StartAction", &UActionBase::execStartAction },
			{ "StopAction", &UActionBase::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionBase_CanStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionBase_eventCanStart_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionBase_eventCanStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionBase_eventCanStart_Parms), &Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBase_CanStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_CanStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_CanStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_CanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "CanStart", nullptr, nullptr, sizeof(ActionBase_eventCanStart_Parms), Z_Construct_UFunction_UActionBase_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_CanStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_CanStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_CanStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_CanStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_CanStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics
	{
		struct ActionBase_eventGetOwningComponent_Parms
		{
			UActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionBase_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::ActionBase_eventGetOwningComponent_Parms), Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBase_IsRunning_Statics
	{
		struct ActionBase_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionBase_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionBase_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionBase_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionBase_eventIsRunning_Parms), &Z_Construct_UFunction_UActionBase_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBase_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionBase_IsRunning_Statics::ActionBase_eventIsRunning_Parms), Z_Construct_UFunction_UActionBase_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "OnRep_RepData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_OnRep_RepData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_OnRep_RepData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBase_StartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBase_StartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionBase_eventStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBase_StartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_StartAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_StartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "StartAction", nullptr, nullptr, sizeof(ActionBase_eventStartAction_Parms), Z_Construct_UFunction_UActionBase_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionBase_StopAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionBase_StopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionBase_eventStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionBase_StopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionBase_StopAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionBase_StopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionBase_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionBase, nullptr, "StopAction", nullptr, nullptr, sizeof(ActionBase_eventStopAction_Parms), Z_Construct_UFunction_UActionBase_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_StopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionBase_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionBase_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionBase_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionBase_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionBase);
	UClass* Z_Construct_UClass_UActionBase_NoRegister()
	{
		return UActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantsTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantsTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStarted_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionBase_CanStart, "CanStart" }, // 167974131
		{ &Z_Construct_UFunction_UActionBase_GetOwningComponent, "GetOwningComponent" }, // 1394791325
		{ &Z_Construct_UFunction_UActionBase_IsRunning, "IsRunning" }, // 4279611326
		{ &Z_Construct_UFunction_UActionBase_OnRep_RepData, "OnRep_RepData" }, // 1905433067
		{ &Z_Construct_UFunction_UActionBase_StartAction, "StartAction" }, // 265051239
		{ &Z_Construct_UFunction_UActionBase_StopAction, "StopAction" }, // 1232056731
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_ActionComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_ActionComp = { "ActionComp", nullptr, (EPropertyFlags)0x0024080000080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, ActionComp), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_ActionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_ActionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_GrantsTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags added to owning actor when activated, removed when action stops */" },
		{ "ModuleRelativePath", "ActionBase.h" },
		{ "ToolTip", "Tags added to owning actor when activated, removed when action stops" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_GrantsTags = { "GrantsTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, GrantsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_GrantsTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_GrantsTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Action can only start if OwningActor has none of these Tags applied */" },
		{ "ModuleRelativePath", "ActionBase.h" },
		{ "ToolTip", "Action can only start if OwningActor has none of these Tags applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_BlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_BlockedTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_RepData_MetaData[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_RepData = { "RepData", "OnRep_RepData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, RepData), Z_Construct_UScriptStruct_FActionRepData, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_RepData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_RepData_MetaData)) }; // 2455282389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_TimeStarted_MetaData[] = {
		{ "ModuleRelativePath", "ActionBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, TimeStarted), METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_TimeStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_TimeStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/* Start immediately when added to an action component */" },
		{ "ModuleRelativePath", "ActionBase.h" },
		{ "ToolTip", "Start immediately when added to an action component" },
	};
#endif
	void Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UActionBase*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionBase), &Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionBase_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/* Action nickname to start/stop without a reference to the object */" },
		{ "ModuleRelativePath", "ActionBase.h" },
		{ "ToolTip", "Action nickname to start/stop without a reference to the object" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActionBase_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionBase, ActionName), METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::NewProp_ActionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_ActionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_GrantsTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_BlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_RepData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_TimeStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_bAutoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionBase_Statics::NewProp_ActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionBase_Statics::ClassParams = {
		&UActionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionBase()
	{
		if (!Z_Registration_Info_UClass_UActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionBase.OuterSingleton, Z_Construct_UClass_UActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionBase.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UActionBase>()
	{
		return UActionBase::StaticClass();
	}

	void UActionBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ActionComp(TEXT("ActionComp"));
		static const FName Name_RepData(TEXT("RepData"));
		static const FName Name_TimeStarted(TEXT("TimeStarted"));

		const bool bIsValid = true
			&& Name_ActionComp == ClassReps[(int32)ENetFields_Private::ActionComp].Property->GetFName()
			&& Name_RepData == ClassReps[(int32)ENetFields_Private::RepData].Property->GetFName()
			&& Name_TimeStarted == ClassReps[(int32)ENetFields_Private::TimeStarted].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActionBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionBase);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ScriptStructInfo[] = {
		{ FActionRepData::StaticStruct, Z_Construct_UScriptStruct_FActionRepData_Statics::NewStructOps, TEXT("ActionRepData"), &Z_Registration_Info_UScriptStruct_ActionRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionRepData), 2455282389U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionBase, UActionBase::StaticClass, TEXT("UActionBase"), &Z_Registration_Info_UClass_UActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionBase), 4093569264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_2439430335(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
