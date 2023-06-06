// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/MazeCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeCube() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMazeCube_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMazeCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMazeCube::execGetClog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execWestPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->WestPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetWest)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWest_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetWest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execEastPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->EastPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetEast)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEast_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetEast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSouthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->SouthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetSouth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSouth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetSouth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSouth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execNorthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->NorthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetNorth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNorth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetNorth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNorth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execDownPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->DownPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetDown)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDown_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execUpPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->UpPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetUp)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUp_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execGetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execSetNode)
	{
		P_GET_STRUCT(FIntVector,Z_Param_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNode_Implementation(Z_Param_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeCube::execActiveWall)
	{
		P_GET_UBOOL(Z_Param_Use);
		P_GET_OBJECT(USceneComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveWall(Z_Param_Use,Z_Param_Comp);
		P_NATIVE_END;
	}
	static FName NAME_AMazeCube_SetDown = FName(TEXT("SetDown"));
	void AMazeCube::SetDown(bool newB)
	{
		MazeCube_eventSetDown_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetDown),&Parms);
	}
	static FName NAME_AMazeCube_SetEast = FName(TEXT("SetEast"));
	void AMazeCube::SetEast(bool newB)
	{
		MazeCube_eventSetEast_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetEast),&Parms);
	}
	static FName NAME_AMazeCube_SetNode = FName(TEXT("SetNode"));
	void AMazeCube::SetNode(FIntVector vec)
	{
		MazeCube_eventSetNode_Parms Parms;
		Parms.vec=vec;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetNode),&Parms);
	}
	static FName NAME_AMazeCube_SetNorth = FName(TEXT("SetNorth"));
	void AMazeCube::SetNorth(bool newB)
	{
		MazeCube_eventSetNorth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetNorth),&Parms);
	}
	static FName NAME_AMazeCube_SetSouth = FName(TEXT("SetSouth"));
	void AMazeCube::SetSouth(bool newB)
	{
		MazeCube_eventSetSouth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetSouth),&Parms);
	}
	static FName NAME_AMazeCube_SetUp = FName(TEXT("SetUp"));
	void AMazeCube::SetUp(bool newB)
	{
		MazeCube_eventSetUp_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetUp),&Parms);
	}
	static FName NAME_AMazeCube_SetWest = FName(TEXT("SetWest"));
	void AMazeCube::SetWest(bool newB)
	{
		MazeCube_eventSetWest_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMazeCube_SetWest),&Parms);
	}
	void AMazeCube::StaticRegisterNativesAMazeCube()
	{
		UClass* Class = AMazeCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveWall", &AMazeCube::execActiveWall },
			{ "DownPoint", &AMazeCube::execDownPoint },
			{ "EastPoint", &AMazeCube::execEastPoint },
			{ "GetClog", &AMazeCube::execGetClog },
			{ "GetDown", &AMazeCube::execGetDown },
			{ "GetEast", &AMazeCube::execGetEast },
			{ "GetNode", &AMazeCube::execGetNode },
			{ "GetNorth", &AMazeCube::execGetNorth },
			{ "GetSouth", &AMazeCube::execGetSouth },
			{ "GetUp", &AMazeCube::execGetUp },
			{ "GetWest", &AMazeCube::execGetWest },
			{ "NorthPoint", &AMazeCube::execNorthPoint },
			{ "SetDown", &AMazeCube::execSetDown },
			{ "SetEast", &AMazeCube::execSetEast },
			{ "SetNode", &AMazeCube::execSetNode },
			{ "SetNorth", &AMazeCube::execSetNorth },
			{ "SetSouth", &AMazeCube::execSetSouth },
			{ "SetUp", &AMazeCube::execSetUp },
			{ "SetWest", &AMazeCube::execSetWest },
			{ "SouthPoint", &AMazeCube::execSouthPoint },
			{ "UpPoint", &AMazeCube::execUpPoint },
			{ "WestPoint", &AMazeCube::execWestPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeCube_ActiveWall_Statics
	{
		struct MazeCube_eventActiveWall_Parms
		{
			bool Use;
			USceneComponent* Comp;
		};
		static void NewProp_Use_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Use;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Use_SetBit(void* Obj)
	{
		((MazeCube_eventActiveWall_Parms*)Obj)->Use = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Use = { "Use", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventActiveWall_Parms), &Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Use_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventActiveWall_Parms, Comp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Use,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::NewProp_Comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "ActiveWall", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::MazeCube_eventActiveWall_Parms), Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_ActiveWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_ActiveWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_DownPoint_Statics
	{
		struct MazeCube_eventDownPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_DownPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventDownPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_DownPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_DownPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_DownPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_DownPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "DownPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_DownPoint_Statics::MazeCube_eventDownPoint_Parms), Z_Construct_UFunction_AMazeCube_DownPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_DownPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_DownPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_DownPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_DownPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_DownPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_EastPoint_Statics
	{
		struct MazeCube_eventEastPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_EastPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventEastPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_EastPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_EastPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_EastPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_EastPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "EastPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_EastPoint_Statics::MazeCube_eventEastPoint_Parms), Z_Construct_UFunction_AMazeCube_EastPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_EastPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_EastPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_EastPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_EastPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_EastPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetClog_Statics
	{
		struct MazeCube_eventGetClog_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetClog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetClog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetClog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetClog_Parms), &Z_Construct_UFunction_AMazeCube_GetClog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetClog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetClog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetClog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetClog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetClog", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetClog_Statics::MazeCube_eventGetClog_Parms), Z_Construct_UFunction_AMazeCube_GetClog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetClog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetClog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetClog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetClog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetClog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetDown_Statics
	{
		struct MazeCube_eventGetDown_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetDown_Parms), &Z_Construct_UFunction_AMazeCube_GetDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetDown_Statics::MazeCube_eventGetDown_Parms), Z_Construct_UFunction_AMazeCube_GetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetEast_Statics
	{
		struct MazeCube_eventGetEast_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetEast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetEast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetEast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetEast_Parms), &Z_Construct_UFunction_AMazeCube_GetEast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetEast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetEast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetEast_Statics::MazeCube_eventGetEast_Parms), Z_Construct_UFunction_AMazeCube_GetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetNode_Statics
	{
		struct MazeCube_eventGetNode_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventGetNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetNode_Statics::MazeCube_eventGetNode_Parms), Z_Construct_UFunction_AMazeCube_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetNorth_Statics
	{
		struct MazeCube_eventGetNorth_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetNorth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetNorth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetNorth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetNorth_Parms), &Z_Construct_UFunction_AMazeCube_GetNorth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetNorth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetNorth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetNorth_Statics::MazeCube_eventGetNorth_Parms), Z_Construct_UFunction_AMazeCube_GetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetSouth_Statics
	{
		struct MazeCube_eventGetSouth_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetSouth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetSouth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetSouth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetSouth_Parms), &Z_Construct_UFunction_AMazeCube_GetSouth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetSouth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetSouth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetSouth_Statics::MazeCube_eventGetSouth_Parms), Z_Construct_UFunction_AMazeCube_GetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetUp_Statics
	{
		struct MazeCube_eventGetUp_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetUp_Parms), &Z_Construct_UFunction_AMazeCube_GetUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetUp_Statics::MazeCube_eventGetUp_Parms), Z_Construct_UFunction_AMazeCube_GetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_GetWest_Statics
	{
		struct MazeCube_eventGetWest_Parms
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
	void Z_Construct_UFunction_AMazeCube_GetWest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeCube_eventGetWest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_GetWest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventGetWest_Parms), &Z_Construct_UFunction_AMazeCube_GetWest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_GetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_GetWest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_GetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_GetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "GetWest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_GetWest_Statics::MazeCube_eventGetWest_Parms), Z_Construct_UFunction_AMazeCube_GetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_GetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_GetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_GetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_GetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_NorthPoint_Statics
	{
		struct MazeCube_eventNorthPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventNorthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "NorthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::MazeCube_eventNorthPoint_Parms), Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_NorthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_NorthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetDown_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetDown_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetDown_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetDown_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetDown_Parms), &Z_Construct_UFunction_AMazeCube_SetDown_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetDown_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetDown", nullptr, nullptr, sizeof(MazeCube_eventSetDown_Parms), Z_Construct_UFunction_AMazeCube_SetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetEast_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetEast_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetEast_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetEast_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetEast_Parms), &Z_Construct_UFunction_AMazeCube_SetEast_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetEast_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetEast", nullptr, nullptr, sizeof(MazeCube_eventSetEast_Parms), Z_Construct_UFunction_AMazeCube_SetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetNode_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_SetNode_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventSetNode_Parms, vec), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetNode_Statics::NewProp_vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetNode", nullptr, nullptr, sizeof(MazeCube_eventSetNode_Parms), Z_Construct_UFunction_AMazeCube_SetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetNorth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetNorth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetNorth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetNorth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetNorth_Parms), &Z_Construct_UFunction_AMazeCube_SetNorth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetNorth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetNorth", nullptr, nullptr, sizeof(MazeCube_eventSetNorth_Parms), Z_Construct_UFunction_AMazeCube_SetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetSouth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetSouth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetSouth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetSouth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetSouth_Parms), &Z_Construct_UFunction_AMazeCube_SetSouth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetSouth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetSouth", nullptr, nullptr, sizeof(MazeCube_eventSetSouth_Parms), Z_Construct_UFunction_AMazeCube_SetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetUp_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetUp_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetUp_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetUp_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetUp_Parms), &Z_Construct_UFunction_AMazeCube_SetUp_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetUp_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetUp", nullptr, nullptr, sizeof(MazeCube_eventSetUp_Parms), Z_Construct_UFunction_AMazeCube_SetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SetWest_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeCube_SetWest_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeCube_eventSetWest_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeCube_SetWest_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeCube_eventSetWest_Parms), &Z_Construct_UFunction_AMazeCube_SetWest_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SetWest_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SetWest", nullptr, nullptr, sizeof(MazeCube_eventSetWest_Parms), Z_Construct_UFunction_AMazeCube_SetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_SouthPoint_Statics
	{
		struct MazeCube_eventSouthPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventSouthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "SouthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::MazeCube_eventSouthPoint_Parms), Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_SouthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_SouthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_UpPoint_Statics
	{
		struct MazeCube_eventUpPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_UpPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventUpPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_UpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_UpPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_UpPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_UpPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "UpPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_UpPoint_Statics::MazeCube_eventUpPoint_Parms), Z_Construct_UFunction_AMazeCube_UpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_UpPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_UpPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_UpPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_UpPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_UpPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeCube_WestPoint_Statics
	{
		struct MazeCube_eventWestPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMazeCube_WestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeCube_eventWestPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeCube_WestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeCube_WestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCube_WestPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCube_WestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCube, nullptr, "WestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMazeCube_WestPoint_Statics::MazeCube_eventWestPoint_Parms), Z_Construct_UFunction_AMazeCube_WestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_WestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeCube_WestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCube_WestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeCube_WestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCube_WestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeCube);
	UClass* Z_Construct_UClass_AMazeCube_NoRegister()
	{
		return AMazeCube::StaticClass();
	}
	struct Z_Construct_UClass_AMazeCube_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDown_MetaData[];
#endif
		static void NewProp_bDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNorth_MetaData[];
#endif
		static void NewProp_bNorth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNorth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NorthWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NorthWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSouth_MetaData[];
#endif
		static void NewProp_bSouth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSouth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SouthWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SouthWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWest_MetaData[];
#endif
		static void NewProp_bWest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WestWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WestWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEast_MetaData[];
#endif
		static void NewProp_bEast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EastWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EastWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Light;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeCube_ActiveWall, "ActiveWall" }, // 4041270278
		{ &Z_Construct_UFunction_AMazeCube_DownPoint, "DownPoint" }, // 3496372292
		{ &Z_Construct_UFunction_AMazeCube_EastPoint, "EastPoint" }, // 1158164348
		{ &Z_Construct_UFunction_AMazeCube_GetClog, "GetClog" }, // 928289023
		{ &Z_Construct_UFunction_AMazeCube_GetDown, "GetDown" }, // 1869064428
		{ &Z_Construct_UFunction_AMazeCube_GetEast, "GetEast" }, // 771908344
		{ &Z_Construct_UFunction_AMazeCube_GetNode, "GetNode" }, // 1041415010
		{ &Z_Construct_UFunction_AMazeCube_GetNorth, "GetNorth" }, // 3364170657
		{ &Z_Construct_UFunction_AMazeCube_GetSouth, "GetSouth" }, // 2552832392
		{ &Z_Construct_UFunction_AMazeCube_GetUp, "GetUp" }, // 1976539967
		{ &Z_Construct_UFunction_AMazeCube_GetWest, "GetWest" }, // 2125122312
		{ &Z_Construct_UFunction_AMazeCube_NorthPoint, "NorthPoint" }, // 1406176742
		{ &Z_Construct_UFunction_AMazeCube_SetDown, "SetDown" }, // 977180094
		{ &Z_Construct_UFunction_AMazeCube_SetEast, "SetEast" }, // 2665117664
		{ &Z_Construct_UFunction_AMazeCube_SetNode, "SetNode" }, // 1579365304
		{ &Z_Construct_UFunction_AMazeCube_SetNorth, "SetNorth" }, // 1953927585
		{ &Z_Construct_UFunction_AMazeCube_SetSouth, "SetSouth" }, // 36302607
		{ &Z_Construct_UFunction_AMazeCube_SetUp, "SetUp" }, // 2430559787
		{ &Z_Construct_UFunction_AMazeCube_SetWest, "SetWest" }, // 4217890494
		{ &Z_Construct_UFunction_AMazeCube_SouthPoint, "SouthPoint" }, // 2203125039
		{ &Z_Construct_UFunction_AMazeCube_UpPoint, "UpPoint" }, // 2518724780
		{ &Z_Construct_UFunction_AMazeCube_WestPoint, "WestPoint" }, // 62181135
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeCube.h" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_UpWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_UpWall = { "UpWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, UpWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_UpWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_UpWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_DownWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_DownWall = { "DownWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, DownWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_DownWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_DownWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bNorth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth = { "bNorth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_NorthWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_NorthWall = { "NorthWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, NorthWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_NorthWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_NorthWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bSouth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth = { "bSouth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_SouthWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_SouthWall = { "SouthWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, SouthWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_SouthWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_SouthWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bWest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest = { "bWest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_WestWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_WestWall = { "WestWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, WestWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_WestWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_WestWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	void Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast_SetBit(void* Obj)
	{
		((AMazeCube*)Obj)->bEast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast = { "bEast", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeCube), &Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_EastWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_EastWall = { "EastWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, EastWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_EastWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_EastWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_Light_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCube_Statics::NewProp_NodePos_MetaData[] = {
		{ "Category", "MazeCube" },
		{ "ModuleRelativePath", "MazeCube.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeCube_Statics::NewProp_NodePos = { "NodePos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeCube, NodePos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::NewProp_NodePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::NewProp_NodePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_UpWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_DownWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_NorthWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bSouth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_SouthWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bWest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_WestWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_bEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_EastWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_Light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCube_Statics::NewProp_NodePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeCube_Statics::ClassParams = {
		&AMazeCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMazeCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeCube()
	{
		if (!Z_Registration_Info_UClass_AMazeCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeCube.OuterSingleton, Z_Construct_UClass_AMazeCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMazeCube.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AMazeCube>()
	{
		return AMazeCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeCube);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMazeCube, AMazeCube::StaticClass, TEXT("AMazeCube"), &Z_Registration_Info_UClass_AMazeCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeCube), 2367428077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeCube_h_3256444636(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
