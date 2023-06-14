// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/MazeBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeBox() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UMazeBox_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UMazeBox();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMazeBox::execGetClog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execWestPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->WestPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetWest)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWest_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetWest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execEastPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->EastPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetEast)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEast_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetEast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSouthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->SouthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetSouth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSouth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetSouth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSouth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execNorthPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->NorthPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetNorth)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNorth_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetNorth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNorth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execDownPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->DownPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetDown)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDown_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execUpPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->UpPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetUp)
	{
		P_GET_UBOOL(Z_Param_newB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUp_Implementation(Z_Param_newB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execGetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execSetNode)
	{
		P_GET_STRUCT(FIntVector,Z_Param_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNode_Implementation(Z_Param_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeBox::execActiveWall)
	{
		P_GET_UBOOL(Z_Param_Use);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveWall(Z_Param_Use,Z_Param_Comp);
		P_NATIVE_END;
	}
	static FName NAME_UMazeBox_SetDown = FName(TEXT("SetDown"));
	void UMazeBox::SetDown(bool newB)
	{
		MazeBox_eventSetDown_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetDown),&Parms);
	}
	static FName NAME_UMazeBox_SetEast = FName(TEXT("SetEast"));
	void UMazeBox::SetEast(bool newB)
	{
		MazeBox_eventSetEast_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetEast),&Parms);
	}
	static FName NAME_UMazeBox_SetNode = FName(TEXT("SetNode"));
	void UMazeBox::SetNode(FIntVector vec)
	{
		MazeBox_eventSetNode_Parms Parms;
		Parms.vec=vec;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetNode),&Parms);
	}
	static FName NAME_UMazeBox_SetNorth = FName(TEXT("SetNorth"));
	void UMazeBox::SetNorth(bool newB)
	{
		MazeBox_eventSetNorth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetNorth),&Parms);
	}
	static FName NAME_UMazeBox_SetSouth = FName(TEXT("SetSouth"));
	void UMazeBox::SetSouth(bool newB)
	{
		MazeBox_eventSetSouth_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetSouth),&Parms);
	}
	static FName NAME_UMazeBox_SetUp = FName(TEXT("SetUp"));
	void UMazeBox::SetUp(bool newB)
	{
		MazeBox_eventSetUp_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetUp),&Parms);
	}
	static FName NAME_UMazeBox_SetWest = FName(TEXT("SetWest"));
	void UMazeBox::SetWest(bool newB)
	{
		MazeBox_eventSetWest_Parms Parms;
		Parms.newB=newB ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMazeBox_SetWest),&Parms);
	}
	void UMazeBox::StaticRegisterNativesUMazeBox()
	{
		UClass* Class = UMazeBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveWall", &UMazeBox::execActiveWall },
			{ "DownPoint", &UMazeBox::execDownPoint },
			{ "EastPoint", &UMazeBox::execEastPoint },
			{ "GetClog", &UMazeBox::execGetClog },
			{ "GetDown", &UMazeBox::execGetDown },
			{ "GetEast", &UMazeBox::execGetEast },
			{ "GetNode", &UMazeBox::execGetNode },
			{ "GetNorth", &UMazeBox::execGetNorth },
			{ "GetSouth", &UMazeBox::execGetSouth },
			{ "GetUp", &UMazeBox::execGetUp },
			{ "GetWest", &UMazeBox::execGetWest },
			{ "NorthPoint", &UMazeBox::execNorthPoint },
			{ "SetDown", &UMazeBox::execSetDown },
			{ "SetEast", &UMazeBox::execSetEast },
			{ "SetNode", &UMazeBox::execSetNode },
			{ "SetNorth", &UMazeBox::execSetNorth },
			{ "SetSouth", &UMazeBox::execSetSouth },
			{ "SetUp", &UMazeBox::execSetUp },
			{ "SetWest", &UMazeBox::execSetWest },
			{ "SouthPoint", &UMazeBox::execSouthPoint },
			{ "UpPoint", &UMazeBox::execUpPoint },
			{ "WestPoint", &UMazeBox::execWestPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeBox_ActiveWall_Statics
	{
		struct MazeBox_eventActiveWall_Parms
		{
			bool Use;
			UStaticMeshComponent* Comp;
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
	void Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Use_SetBit(void* Obj)
	{
		((MazeBox_eventActiveWall_Parms*)Obj)->Use = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Use = { "Use", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventActiveWall_Parms), &Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Use_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventActiveWall_Parms, Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Use,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::NewProp_Comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "ActiveWall", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::MazeBox_eventActiveWall_Parms), Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_ActiveWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_ActiveWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_DownPoint_Statics
	{
		struct MazeBox_eventDownPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_DownPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventDownPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_DownPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_DownPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_DownPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_DownPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "DownPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_DownPoint_Statics::MazeBox_eventDownPoint_Parms), Z_Construct_UFunction_UMazeBox_DownPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_DownPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_DownPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_DownPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_DownPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_DownPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_EastPoint_Statics
	{
		struct MazeBox_eventEastPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_EastPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventEastPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_EastPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_EastPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_EastPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_EastPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "EastPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_EastPoint_Statics::MazeBox_eventEastPoint_Parms), Z_Construct_UFunction_UMazeBox_EastPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_EastPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_EastPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_EastPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_EastPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_EastPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetClog_Statics
	{
		struct MazeBox_eventGetClog_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetClog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetClog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetClog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetClog_Parms), &Z_Construct_UFunction_UMazeBox_GetClog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetClog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetClog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetClog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetClog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetClog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetClog_Statics::MazeBox_eventGetClog_Parms), Z_Construct_UFunction_UMazeBox_GetClog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetClog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetClog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetClog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetClog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetClog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetDown_Statics
	{
		struct MazeBox_eventGetDown_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetDown_Parms), &Z_Construct_UFunction_UMazeBox_GetDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetDown_Statics::MazeBox_eventGetDown_Parms), Z_Construct_UFunction_UMazeBox_GetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetEast_Statics
	{
		struct MazeBox_eventGetEast_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetEast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetEast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetEast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetEast_Parms), &Z_Construct_UFunction_UMazeBox_GetEast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetEast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetEast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetEast_Statics::MazeBox_eventGetEast_Parms), Z_Construct_UFunction_UMazeBox_GetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetNode_Statics
	{
		struct MazeBox_eventGetNode_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventGetNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetNode_Statics::MazeBox_eventGetNode_Parms), Z_Construct_UFunction_UMazeBox_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetNorth_Statics
	{
		struct MazeBox_eventGetNorth_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetNorth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetNorth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetNorth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetNorth_Parms), &Z_Construct_UFunction_UMazeBox_GetNorth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetNorth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetNorth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetNorth_Statics::MazeBox_eventGetNorth_Parms), Z_Construct_UFunction_UMazeBox_GetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetSouth_Statics
	{
		struct MazeBox_eventGetSouth_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetSouth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetSouth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetSouth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetSouth_Parms), &Z_Construct_UFunction_UMazeBox_GetSouth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetSouth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetSouth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetSouth_Statics::MazeBox_eventGetSouth_Parms), Z_Construct_UFunction_UMazeBox_GetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetUp_Statics
	{
		struct MazeBox_eventGetUp_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetUp_Parms), &Z_Construct_UFunction_UMazeBox_GetUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetUp_Statics::MazeBox_eventGetUp_Parms), Z_Construct_UFunction_UMazeBox_GetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_GetWest_Statics
	{
		struct MazeBox_eventGetWest_Parms
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
	void Z_Construct_UFunction_UMazeBox_GetWest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeBox_eventGetWest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_GetWest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventGetWest_Parms), &Z_Construct_UFunction_UMazeBox_GetWest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_GetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_GetWest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_GetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_GetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "GetWest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_GetWest_Statics::MazeBox_eventGetWest_Parms), Z_Construct_UFunction_UMazeBox_GetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_GetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_GetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_GetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_GetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_NorthPoint_Statics
	{
		struct MazeBox_eventNorthPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventNorthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "NorthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::MazeBox_eventNorthPoint_Parms), Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_NorthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_NorthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetDown_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetDown_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetDown_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetDown_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetDown_Parms), &Z_Construct_UFunction_UMazeBox_SetDown_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetDown_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetDown", nullptr, nullptr, sizeof(MazeBox_eventSetDown_Parms), Z_Construct_UFunction_UMazeBox_SetDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetEast_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetEast_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetEast_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetEast_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetEast_Parms), &Z_Construct_UFunction_UMazeBox_SetEast_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetEast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetEast_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetEast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetEast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetEast", nullptr, nullptr, sizeof(MazeBox_eventSetEast_Parms), Z_Construct_UFunction_UMazeBox_SetEast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetEast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetEast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetEast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetEast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetEast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetNode_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_SetNode_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventSetNode_Parms, vec), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetNode_Statics::NewProp_vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetNode", nullptr, nullptr, sizeof(MazeBox_eventSetNode_Parms), Z_Construct_UFunction_UMazeBox_SetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetNorth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetNorth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetNorth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetNorth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetNorth_Parms), &Z_Construct_UFunction_UMazeBox_SetNorth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetNorth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetNorth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetNorth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetNorth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetNorth", nullptr, nullptr, sizeof(MazeBox_eventSetNorth_Parms), Z_Construct_UFunction_UMazeBox_SetNorth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetNorth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetNorth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetNorth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetNorth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetNorth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetSouth_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetSouth_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetSouth_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetSouth_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetSouth_Parms), &Z_Construct_UFunction_UMazeBox_SetSouth_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetSouth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetSouth_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetSouth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetSouth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetSouth", nullptr, nullptr, sizeof(MazeBox_eventSetSouth_Parms), Z_Construct_UFunction_UMazeBox_SetSouth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetSouth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetSouth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetSouth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetSouth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetSouth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetUp_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetUp_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetUp_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetUp_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetUp_Parms), &Z_Construct_UFunction_UMazeBox_SetUp_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetUp_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetUp", nullptr, nullptr, sizeof(MazeBox_eventSetUp_Parms), Z_Construct_UFunction_UMazeBox_SetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SetWest_Statics
	{
		static void NewProp_newB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_newB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeBox_SetWest_Statics::NewProp_newB_SetBit(void* Obj)
	{
		((MazeBox_eventSetWest_Parms*)Obj)->newB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeBox_SetWest_Statics::NewProp_newB = { "newB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeBox_eventSetWest_Parms), &Z_Construct_UFunction_UMazeBox_SetWest_Statics::NewProp_newB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SetWest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SetWest_Statics::NewProp_newB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SetWest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SetWest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SetWest", nullptr, nullptr, sizeof(MazeBox_eventSetWest_Parms), Z_Construct_UFunction_UMazeBox_SetWest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetWest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SetWest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SetWest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SetWest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SetWest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_SouthPoint_Statics
	{
		struct MazeBox_eventSouthPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventSouthPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "SouthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::MazeBox_eventSouthPoint_Parms), Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_SouthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_SouthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_UpPoint_Statics
	{
		struct MazeBox_eventUpPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_UpPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventUpPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_UpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_UpPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_UpPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_UpPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "UpPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_UpPoint_Statics::MazeBox_eventUpPoint_Parms), Z_Construct_UFunction_UMazeBox_UpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_UpPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_UpPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_UpPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_UpPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_UpPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeBox_WestPoint_Statics
	{
		struct MazeBox_eventWestPoint_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeBox_WestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeBox_eventWestPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeBox_WestPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeBox_WestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeBox_WestPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeBox_WestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeBox, nullptr, "WestPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMazeBox_WestPoint_Statics::MazeBox_eventWestPoint_Parms), Z_Construct_UFunction_UMazeBox_WestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_WestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeBox_WestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeBox_WestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeBox_WestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMazeBox_WestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMazeBox);
	UClass* Z_Construct_UClass_UMazeBox_NoRegister()
	{
		return UMazeBox::StaticClass();
	}
	struct Z_Construct_UClass_UMazeBox_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flatPart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_flatPart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thinPart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_thinPart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeBox_ActiveWall, "ActiveWall" }, // 1367856274
		{ &Z_Construct_UFunction_UMazeBox_DownPoint, "DownPoint" }, // 1434839604
		{ &Z_Construct_UFunction_UMazeBox_EastPoint, "EastPoint" }, // 180310092
		{ &Z_Construct_UFunction_UMazeBox_GetClog, "GetClog" }, // 1757475779
		{ &Z_Construct_UFunction_UMazeBox_GetDown, "GetDown" }, // 2888936344
		{ &Z_Construct_UFunction_UMazeBox_GetEast, "GetEast" }, // 753712773
		{ &Z_Construct_UFunction_UMazeBox_GetNode, "GetNode" }, // 4275207709
		{ &Z_Construct_UFunction_UMazeBox_GetNorth, "GetNorth" }, // 872958670
		{ &Z_Construct_UFunction_UMazeBox_GetSouth, "GetSouth" }, // 1913180029
		{ &Z_Construct_UFunction_UMazeBox_GetUp, "GetUp" }, // 2247877136
		{ &Z_Construct_UFunction_UMazeBox_GetWest, "GetWest" }, // 2446211349
		{ &Z_Construct_UFunction_UMazeBox_NorthPoint, "NorthPoint" }, // 1745769504
		{ &Z_Construct_UFunction_UMazeBox_SetDown, "SetDown" }, // 1611408908
		{ &Z_Construct_UFunction_UMazeBox_SetEast, "SetEast" }, // 3616007419
		{ &Z_Construct_UFunction_UMazeBox_SetNode, "SetNode" }, // 1300149339
		{ &Z_Construct_UFunction_UMazeBox_SetNorth, "SetNorth" }, // 2230131163
		{ &Z_Construct_UFunction_UMazeBox_SetSouth, "SetSouth" }, // 3880626388
		{ &Z_Construct_UFunction_UMazeBox_SetUp, "SetUp" }, // 2317679093
		{ &Z_Construct_UFunction_UMazeBox_SetWest, "SetWest" }, // 372617671
		{ &Z_Construct_UFunction_UMazeBox_SouthPoint, "SouthPoint" }, // 1876089459
		{ &Z_Construct_UFunction_UMazeBox_UpPoint, "UpPoint" }, // 3875667935
		{ &Z_Construct_UFunction_UMazeBox_WestPoint, "WestPoint" }, // 904332160
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MazeBox.h" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_UpWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_UpWall = { "UpWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, UpWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_UpWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_UpWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_DownWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_DownWall = { "DownWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, DownWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_DownWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_DownWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bNorth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth = { "bNorth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_NorthWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_NorthWall = { "NorthWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, NorthWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_NorthWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_NorthWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bSouth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth = { "bSouth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_SouthWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_SouthWall = { "SouthWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, SouthWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_SouthWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_SouthWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bWest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest = { "bWest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_WestWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_WestWall = { "WestWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, WestWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_WestWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_WestWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	void Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast_SetBit(void* Obj)
	{
		((UMazeBox*)Obj)->bEast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast = { "bEast", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeBox), &Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_EastWall_MetaData[] = {
		{ "Category", "Walls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_EastWall = { "EastWall", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, EastWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_EastWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_EastWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_Light_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_NodePos_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_NodePos = { "NodePos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, NodePos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_NodePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_NodePos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_flatPart_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_flatPart = { "flatPart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, flatPart), METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_flatPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_flatPart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_thinPart_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_thinPart = { "thinPart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, thinPart), METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_thinPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_thinPart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeBox_Statics::NewProp_DistS_MetaData[] = {
		{ "Category", "MazeBox" },
		{ "ModuleRelativePath", "MazeBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMazeBox_Statics::NewProp_DistS = { "DistS", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeBox, DistS), METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::NewProp_DistS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::NewProp_DistS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMazeBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_UpWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_DownWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_NorthWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bSouth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_SouthWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bWest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_WestWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_bEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_EastWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_Light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_NodePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_flatPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_thinPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeBox_Statics::NewProp_DistS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMazeBox_Statics::ClassParams = {
		&UMazeBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMazeBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeBox()
	{
		if (!Z_Registration_Info_UClass_UMazeBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMazeBox.OuterSingleton, Z_Construct_UClass_UMazeBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMazeBox.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UMazeBox>()
	{
		return UMazeBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeBox);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMazeBox, UMazeBox::StaticClass, TEXT("UMazeBox"), &Z_Registration_Info_UClass_UMazeBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMazeBox), 2315006690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeBox_h_1319043644(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_MazeBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
