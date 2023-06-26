// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/BoxItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxItem() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UBoxItem_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UBoxItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	DEFINE_FUNCTION(UBoxItem::execGetClog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execWestPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->WestPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetWest)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWest_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetWest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execEastPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->EastPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetEast)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEast_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetEast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSouthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->SouthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetSouth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSouth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetSouth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSouth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execNorthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->NorthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetNorth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNorth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetNorth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNorth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execDownPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->DownPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetDown)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDown_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execUpPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->UpPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetUp)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUp_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execGetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoxItem::execSetNode)
	{
		P_GET_STRUCT(FIntVector,Z_Param_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNode_Implementation(Z_Param_vec);
		P_NATIVE_END;
	}
	static FName NAME_UBoxItem_SetDown = FName(TEXT("SetDown"));
	void UBoxItem::SetDown(bool newB)
	{
		BoxItem_eventSetDown_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetDown),&Parms);
	}
	static FName NAME_UBoxItem_SetEast = FName(TEXT("SetEast"));
	void UBoxItem::SetEast(bool newB)
	{
		BoxItem_eventSetEast_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetEast),&Parms);
	}
	static FName NAME_UBoxItem_SetNode = FName(TEXT("SetNode"));
	void UBoxItem::SetNode(FIntVector vec)
	{
		BoxItem_eventSetNode_Parms Parms;
		Parms.vec=vec;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetNode),&Parms);
	}
	static FName NAME_UBoxItem_SetNorth = FName(TEXT("SetNorth"));
	void UBoxItem::SetNorth(bool newB)
	{
		BoxItem_eventSetNorth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetNorth),&Parms);
	}
	static FName NAME_UBoxItem_SetSouth = FName(TEXT("SetSouth"));
	void UBoxItem::SetSouth(bool newB)
	{
		BoxItem_eventSetSouth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetSouth),&Parms);
	}
	static FName NAME_UBoxItem_SetUp = FName(TEXT("SetUp"));
	void UBoxItem::SetUp(bool newB)
	{
		BoxItem_eventSetUp_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetUp),&Parms);
	}
	static FName NAME_UBoxItem_SetWest = FName(TEXT("SetWest"));
	void UBoxItem::SetWest(bool newB)
	{
		BoxItem_eventSetWest_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UBoxItem_SetWest),&Parms);
	}
	void UBoxItem::StaticRegisterNativesUBoxItem()
	{
		UClass* Class = UBoxItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownPoint", &UBoxItem::execDownPoint },
			{ "EastPoint", &UBoxItem::execEastPoint },
			{ "GetClog", &UBoxItem::execGetClog },
			{ "GetDown", &UBoxItem::execGetDown },
			{ "GetEast", &UBoxItem::execGetEast },
			{ "GetNode", &UBoxItem::execGetNode },
			{ "GetNorth", &UBoxItem::execGetNorth },
			{ "GetSouth", &UBoxItem::execGetSouth },
			{ "GetUp", &UBoxItem::execGetUp },
			{ "GetWest", &UBoxItem::execGetWest },
			{ "NorthPoint", &UBoxItem::execNorthPoint },
			{ "SetDown", &UBoxItem::execSetDown },
			{ "SetEast", &UBoxItem::execSetEast },
			{ "SetNode", &UBoxItem::execSetNode },
			{ "SetNorth", &UBoxItem::execSetNorth },
			{ "SetSouth", &UBoxItem::execSetSouth },
			{ "SetUp", &UBoxItem::execSetUp },
			{ "SetWest", &UBoxItem::execSetWest },
			{ "SouthPoint", &UBoxItem::execSouthPoint },
			{ "UpPoint", &UBoxItem::execUpPoint },
			{ "WestPoint", &UBoxItem::execWestPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoxItem_DownPoint_Statics
	{
		struct BoxItem_eventDownPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_DownPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventDownPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_DownPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_DownPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_DownPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_DownPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "DownPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_DownPoint_Statics::BoxItem_eventDownPoint_Parms), Z_Construct_UFunction_UBoxItem_DownPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_DownPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_DownPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_DownPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_DownPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_DownPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_EastPoint_Statics
	{
		struct BoxItem_eventEastPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_EastPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventEastPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_EastPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_EastPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_EastPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_EastPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "EastPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_EastPoint_Statics::BoxItem_eventEastPoint_Parms), Z_Construct_UFunction_UBoxItem_EastPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_EastPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_EastPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_EastPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_EastPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_EastPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetClog_Statics
	{
		struct BoxItem_eventGetClog_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetClog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetClog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetClog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetClog_Parms), &Z_Construct_UFunction_UBoxItem_GetClog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetClog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetClog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetClog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetClog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetClog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetClog_Statics::BoxItem_eventGetClog_Parms), Z_Construct_UFunction_UBoxItem_GetClog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetClog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetClog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetClog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetClog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetClog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetDown_Statics
	{
		struct BoxItem_eventGetDown_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetDown_Parms), &Z_Construct_UFunction_UBoxItem_GetDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetDown_Statics::BoxItem_eventGetDown_Parms), Z_Construct_UFunction_UBoxItem_GetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetEast_Statics
	{
		struct BoxItem_eventGetEast_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetEast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetEast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetEast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetEast_Parms), &Z_Construct_UFunction_UBoxItem_GetEast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetEast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetEast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetEast_Statics::BoxItem_eventGetEast_Parms), Z_Construct_UFunction_UBoxItem_GetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetNode_Statics
	{
		struct BoxItem_eventGetNode_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventGetNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetNode_Statics::BoxItem_eventGetNode_Parms), Z_Construct_UFunction_UBoxItem_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetNorth_Statics
	{
		struct BoxItem_eventGetNorth_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetNorth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetNorth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetNorth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetNorth_Parms), &Z_Construct_UFunction_UBoxItem_GetNorth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetNorth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetNorth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetNorth_Statics::BoxItem_eventGetNorth_Parms), Z_Construct_UFunction_UBoxItem_GetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetSouth_Statics
	{
		struct BoxItem_eventGetSouth_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetSouth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetSouth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetSouth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetSouth_Parms), &Z_Construct_UFunction_UBoxItem_GetSouth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetSouth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetSouth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetSouth_Statics::BoxItem_eventGetSouth_Parms), Z_Construct_UFunction_UBoxItem_GetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetUp_Statics
	{
		struct BoxItem_eventGetUp_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetUp_Parms), &Z_Construct_UFunction_UBoxItem_GetUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetUp_Statics::BoxItem_eventGetUp_Parms), Z_Construct_UFunction_UBoxItem_GetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_GetWest_Statics
	{
		struct BoxItem_eventGetWest_Parms
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
	void Z_Construct_UFunction_UBoxItem_GetWest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoxItem_eventGetWest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_GetWest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventGetWest_Parms), &Z_Construct_UFunction_UBoxItem_GetWest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_GetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_GetWest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_GetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_GetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "GetWest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_GetWest_Statics::BoxItem_eventGetWest_Parms), Z_Construct_UFunction_UBoxItem_GetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_GetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_GetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_GetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_GetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_NorthPoint_Statics
	{
		struct BoxItem_eventNorthPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventNorthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "NorthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::BoxItem_eventNorthPoint_Parms), Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_NorthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_NorthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetDown_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetDown_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetDown_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetDown_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetDown_Parms), &Z_Construct_UFunction_UBoxItem_SetDown_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetDown_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetDown", nullptr, nullptr, sizeof(BoxItem_eventSetDown_Parms), Z_Construct_UFunction_UBoxItem_SetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetEast_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetEast_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetEast_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetEast_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetEast_Parms), &Z_Construct_UFunction_UBoxItem_SetEast_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetEast_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetEast", nullptr, nullptr, sizeof(BoxItem_eventSetEast_Parms), Z_Construct_UFunction_UBoxItem_SetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetNode_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_SetNode_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventSetNode_Parms, vec), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetNode_Statics::NewProp_vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetNode", nullptr, nullptr, sizeof(BoxItem_eventSetNode_Parms), Z_Construct_UFunction_UBoxItem_SetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetNorth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetNorth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetNorth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetNorth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetNorth_Parms), &Z_Construct_UFunction_UBoxItem_SetNorth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetNorth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetNorth", nullptr, nullptr, sizeof(BoxItem_eventSetNorth_Parms), Z_Construct_UFunction_UBoxItem_SetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetSouth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetSouth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetSouth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetSouth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetSouth_Parms), &Z_Construct_UFunction_UBoxItem_SetSouth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetSouth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetSouth", nullptr, nullptr, sizeof(BoxItem_eventSetSouth_Parms), Z_Construct_UFunction_UBoxItem_SetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetUp_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetUp_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetUp_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetUp_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetUp_Parms), &Z_Construct_UFunction_UBoxItem_SetUp_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetUp_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetUp", nullptr, nullptr, sizeof(BoxItem_eventSetUp_Parms), Z_Construct_UFunction_UBoxItem_SetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SetWest_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxItem_SetWest_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((BoxItem_eventSetWest_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxItem_SetWest_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxItem_eventSetWest_Parms), &Z_Construct_UFunction_UBoxItem_SetWest_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SetWest_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SetWest", nullptr, nullptr, sizeof(BoxItem_eventSetWest_Parms), Z_Construct_UFunction_UBoxItem_SetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_SouthPoint_Statics
	{
		struct BoxItem_eventSouthPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventSouthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "SouthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::BoxItem_eventSouthPoint_Parms), Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_SouthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_SouthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_UpPoint_Statics
	{
		struct BoxItem_eventUpPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_UpPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventUpPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_UpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_UpPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_UpPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_UpPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "UpPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_UpPoint_Statics::BoxItem_eventUpPoint_Parms), Z_Construct_UFunction_UBoxItem_UpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_UpPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_UpPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_UpPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_UpPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_UpPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxItem_WestPoint_Statics
	{
		struct BoxItem_eventWestPoint_Parms
		{
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxItem_WestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxItem_eventWestPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxItem_WestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxItem_WestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxItem_WestPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxItem_WestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxItem, nullptr, "WestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoxItem_WestPoint_Statics::BoxItem_eventWestPoint_Parms), Z_Construct_UFunction_UBoxItem_WestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_WestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxItem_WestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxItem_WestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxItem_WestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxItem_WestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxItem);
	UClass* Z_Construct_UClass_UBoxItem_NoRegister()
	{
		return UBoxItem::StaticClass();
	}
	struct Z_Construct_UClass_UBoxItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUp_MetaData[];
#endif
		static void NewProp_bUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDown_MetaData[];
#endif
		static void NewProp_bDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNorth_MetaData[];
#endif
		static void NewProp_bNorth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNorth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSouth_MetaData[];
#endif
		static void NewProp_bSouth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSouth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWest_MetaData[];
#endif
		static void NewProp_bWest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEast_MetaData[];
#endif
		static void NewProp_bEast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoxItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoxItem_DownPoint, "DownPoint" }, // 1520644451
		{ &Z_Construct_UFunction_UBoxItem_EastPoint, "EastPoint" }, // 1491905285
		{ &Z_Construct_UFunction_UBoxItem_GetClog, "GetClog" }, // 396198265
		{ &Z_Construct_UFunction_UBoxItem_GetDown, "GetDown" }, // 34436574
		{ &Z_Construct_UFunction_UBoxItem_GetEast, "GetEast" }, // 1069829321
		{ &Z_Construct_UFunction_UBoxItem_GetNode, "GetNode" }, // 2735322651
		{ &Z_Construct_UFunction_UBoxItem_GetNorth, "GetNorth" }, // 1367859603
		{ &Z_Construct_UFunction_UBoxItem_GetSouth, "GetSouth" }, // 2817304804
		{ &Z_Construct_UFunction_UBoxItem_GetUp, "GetUp" }, // 1926617493
		{ &Z_Construct_UFunction_UBoxItem_GetWest, "GetWest" }, // 441561913
		{ &Z_Construct_UFunction_UBoxItem_NorthPoint, "NorthPoint" }, // 3516958003
		{ &Z_Construct_UFunction_UBoxItem_SetDown, "SetDown" }, // 3268051889
		{ &Z_Construct_UFunction_UBoxItem_SetEast, "SetEast" }, // 2727738720
		{ &Z_Construct_UFunction_UBoxItem_SetNode, "SetNode" }, // 455254328
		{ &Z_Construct_UFunction_UBoxItem_SetNorth, "SetNorth" }, // 3395729381
		{ &Z_Construct_UFunction_UBoxItem_SetSouth, "SetSouth" }, // 3944179169
		{ &Z_Construct_UFunction_UBoxItem_SetUp, "SetUp" }, // 2538446598
		{ &Z_Construct_UFunction_UBoxItem_SetWest, "SetWest" }, // 3551876549
		{ &Z_Construct_UFunction_UBoxItem_SouthPoint, "SouthPoint" }, // 575162501
		{ &Z_Construct_UFunction_UBoxItem_UpPoint, "UpPoint" }, // 2539832683
		{ &Z_Construct_UFunction_UBoxItem_WestPoint, "WestPoint" }, // 3916114846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BoxItem.h" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bNorth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth = { "bNorth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bSouth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth = { "bSouth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bWest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest = { "bWest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	void Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast_SetBit(void* Obj)
	{
		((UBoxItem*)Obj)->bEast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast = { "bEast", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBoxItem), &Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxItem_Statics::NewProp_NodePos_MetaData[] = {
		{ "Category", "BoxItem" },
		{ "ModuleRelativePath", "BoxItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxItem_Statics::NewProp_NodePos = { "NodePos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoxItem, NodePos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::NewProp_NodePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::NewProp_NodePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bSouth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bWest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_bEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxItem_Statics::NewProp_NodePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxItem_Statics::ClassParams = {
		&UBoxItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoxItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoxItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoxItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxItem()
	{
		if (!Z_Registration_Info_UClass_UBoxItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxItem.OuterSingleton, Z_Construct_UClass_UBoxItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoxItem.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UBoxItem>()
	{
		return UBoxItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxItem);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoxItem, UBoxItem::StaticClass, TEXT("UBoxItem"), &Z_Registration_Info_UClass_UBoxItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxItem), 3253014014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxItem_h_1964966433(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_BoxItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
