// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/ActionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionComponent() {}
// Cross Module References
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionComponent_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionBase_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics
	{
		struct _Script_ShootyArena_eventOnActionStateChanged_Parms
		{
			UActionComponent* OwningComp;
			UActionBase* Action;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnActionStateChanged_Parms, OwningComp), Z_Construct_UClass_UActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventOnActionStateChanged_Parms, Action), Z_Construct_UClass_UActionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_OwningComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "OnActionStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::_Script_ShootyArena_eventOnActionStateChanged_Parms), Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UActionComponent::execServerStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStopAction_Implementation(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execServerStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartAction_Implementation(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execStopActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execStartActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execGetAction)
	{
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActionBase**)Z_Param__Result=P_THIS->GetAction(Z_Param_ActionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execRemoveAction)
	{
		P_GET_OBJECT(UActionBase,Z_Param_ActionToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAction(Z_Param_ActionToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionComponent::execAddAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAction(Z_Param_Instigator,Z_Param_ActionClass);
		P_NATIVE_END;
	}
	static FName NAME_UActionComponent_ServerStartAction = FName(TEXT("ServerStartAction"));
	void UActionComponent::ServerStartAction(AActor* Instigator, FName ActionName)
	{
		ActionComponent_eventServerStartAction_Parms Parms;
		Parms.Instigator=Instigator;
		Parms.ActionName=ActionName;
		ProcessEvent(FindFunctionChecked(NAME_UActionComponent_ServerStartAction),&Parms);
	}
	static FName NAME_UActionComponent_ServerStopAction = FName(TEXT("ServerStopAction"));
	void UActionComponent::ServerStopAction(AActor* Instigator, FName ActionName)
	{
		ActionComponent_eventServerStopAction_Parms Parms;
		Parms.Instigator=Instigator;
		Parms.ActionName=ActionName;
		ProcessEvent(FindFunctionChecked(NAME_UActionComponent_ServerStopAction),&Parms);
	}
	void UActionComponent::StaticRegisterNativesUActionComponent()
	{
		UClass* Class = UActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &UActionComponent::execAddAction },
			{ "GetAction", &UActionComponent::execGetAction },
			{ "RemoveAction", &UActionComponent::execRemoveAction },
			{ "ServerStartAction", &UActionComponent::execServerStartAction },
			{ "ServerStopAction", &UActionComponent::execServerStopAction },
			{ "StartActionByName", &UActionComponent::execStartActionByName },
			{ "StopActionByName", &UActionComponent::execStopActionByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionComponent_AddAction_Statics
	{
		struct ActionComponent_eventAddAction_Parms
		{
			AActor* Instigator;
			TSubclassOf<UActionBase>  ActionClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventAddAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventAddAction_Parms, ActionClass), Z_Construct_UClass_UActionBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_AddAction_Statics::NewProp_ActionClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "AddAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_AddAction_Statics::ActionComponent_eventAddAction_Parms), Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_GetAction_Statics
	{
		struct ActionComponent_eventGetAction_Parms
		{
			TSubclassOf<UActionBase>  ActionClass;
			UActionBase* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActionComponent_GetAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventGetAction_Parms, ActionClass), Z_Construct_UClass_UActionBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_GetAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventGetAction_Parms, ReturnValue), Z_Construct_UClass_UActionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_GetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_GetAction_Statics::NewProp_ActionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_GetAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_GetAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "Comment", "/* Returns first occurrence of action matching the class provided */" },
		{ "ModuleRelativePath", "ActionComponent.h" },
		{ "ToolTip", "Returns first occurrence of action matching the class provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_GetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "GetAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_GetAction_Statics::ActionComponent_eventGetAction_Parms), Z_Construct_UFunction_UActionComponent_GetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_GetAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_GetAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_GetAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_GetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_GetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_RemoveAction_Statics
	{
		struct ActionComponent_eventRemoveAction_Parms
		{
			UActionBase* ActionToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::NewProp_ActionToRemove = { "ActionToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventRemoveAction_Parms, ActionToRemove), Z_Construct_UClass_UActionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::NewProp_ActionToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "RemoveAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::ActionComponent_eventRemoveAction_Parms), Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventServerStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventServerStartAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "ServerStartAction", nullptr, nullptr, sizeof(ActionComponent_eventServerStartAction_Parms), Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_ServerStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_ServerStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventServerStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventServerStopAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "ServerStopAction", nullptr, nullptr, sizeof(ActionComponent_eventServerStopAction_Parms), Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_ServerStopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_ServerStopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_StartActionByName_Statics
	{
		struct ActionComponent_eventStartActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStartActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStartActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionComponent_eventStartActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionComponent_eventStartActionByName_Parms), &Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "StartActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::ActionComponent_eventStartActionByName_Parms), Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_StartActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_StartActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionComponent_StopActionByName_Statics
	{
		struct ActionComponent_eventStopActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStopActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionComponent_eventStopActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionComponent_eventStopActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionComponent_eventStopActionByName_Parms), &Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionComponent, nullptr, "StopActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::ActionComponent_eventStopActionByName_Parms), Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionComponent_StopActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActionComponent_StopActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionComponent);
	UClass* Z_Construct_UClass_UActionComponent_NoRegister()
	{
		return UActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTags;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultActions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionStopped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionStopped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionComponent_AddAction, "AddAction" }, // 1800391614
		{ &Z_Construct_UFunction_UActionComponent_GetAction, "GetAction" }, // 2053483323
		{ &Z_Construct_UFunction_UActionComponent_RemoveAction, "RemoveAction" }, // 2384264308
		{ &Z_Construct_UFunction_UActionComponent_ServerStartAction, "ServerStartAction" }, // 4188140452
		{ &Z_Construct_UFunction_UActionComponent_ServerStopAction, "ServerStopAction" }, // 2745728944
		{ &Z_Construct_UFunction_UActionComponent_StartActionByName, "StartActionByName" }, // 1789819240
		{ &Z_Construct_UFunction_UActionComponent_StopActionByName, "StopActionByName" }, // 3575556452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActionComponent.h" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags = { "ActiveGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, ActiveGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions_Inner = { "DefaultActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActionBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/* Granted abilities at game start */" },
		{ "ModuleRelativePath", "ActionComponent.h" },
		{ "ToolTip", "Granted abilities at game start" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions = { "DefaultActions", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, DefaultActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "ActionComponent" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0024080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStarted_MetaData[] = {
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStarted = { "OnActionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, OnActionStarted), Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStarted_MetaData)) }; // 498861407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStopped_MetaData[] = {
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStopped = { "OnActionStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, OnActionStopped), Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStopped_MetaData)) }; // 498861407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionComponent_Statics::NewProp_Instigation_MetaData[] = {
		{ "Category", "ActionComponent" },
		{ "ModuleRelativePath", "ActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionComponent_Statics::NewProp_Instigation = { "Instigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionComponent, Instigation), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::NewProp_Instigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::NewProp_Instigation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_ActiveGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_DefaultActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_OnActionStopped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionComponent_Statics::NewProp_Instigation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionComponent_Statics::ClassParams = {
		&UActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionComponent()
	{
		if (!Z_Registration_Info_UClass_UActionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionComponent.OuterSingleton, Z_Construct_UClass_UActionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionComponent.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UActionComponent>()
	{
		return UActionComponent::StaticClass();
	}

	void UActionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Actions(TEXT("Actions"));

		const bool bIsValid = true
			&& Name_Actions == ClassReps[(int32)ENetFields_Private::Actions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionComponent);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionComponent, UActionComponent::StaticClass, TEXT("UActionComponent"), &Z_Registration_Info_UClass_UActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionComponent), 2469012523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionComponent_h_3889507828(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_ActionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
