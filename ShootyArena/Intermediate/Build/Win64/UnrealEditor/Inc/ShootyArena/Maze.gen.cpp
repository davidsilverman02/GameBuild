// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/Maze.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze() {}
// Cross Module References
	SHOOTYARENA_API UScriptStruct* Z_Construct_UScriptStruct_FNoden();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMaze();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMazeCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Noden;
class UScriptStruct* FNoden::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Noden.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Noden.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoden, Z_Construct_UPackage__Script_ShootyArena(), TEXT("Noden"));
	}
	return Z_Registration_Info_UScriptStruct_Noden.OuterSingleton;
}
template<> SHOOTYARENA_API UScriptStruct* StaticStruct<FNoden>()
{
	return FNoden::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoden_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoden>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp = { "bUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown = { "bDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bNorth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth = { "bNorth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bSouth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth = { "bSouth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bWest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest = { "bWest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bEast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast = { "bEast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_NodePos_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_NodePos = { "NodePos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNoden, NodePos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_NodePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_NodePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bSouth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bWest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_NodePos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoden_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
		nullptr,
		&NewStructOps,
		"Noden",
		sizeof(FNoden),
		alignof(FNoden),
		Z_Construct_UScriptStruct_FNoden_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoden()
	{
		if (!Z_Registration_Info_UScriptStruct_Noden.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Noden.InnerSingleton, Z_Construct_UScriptStruct_FNoden_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Noden.InnerSingleton;
	}
	DEFINE_FUNCTION(AMaze::execExpandRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpandRooms_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execBuildRoom)
	{
		P_GET_STRUCT(FVector,Z_Param_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildRoom_Implementation(Z_Param_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execMakeClean)
	{
		P_GET_OBJECT(AMazeCube,Z_Param_Cube);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeClean_Implementation(Z_Param_Cube);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execGetHunt)
	{
		P_GET_STRUCT(FIntVector,Z_Param_pont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHunt_Implementation(Z_Param_pont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execSetAdj)
	{
		P_GET_STRUCT(FIntVector,Z_Param_pont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdj_Implementation(Z_Param_pont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execClearToFrom)
	{
		P_GET_STRUCT(FIntVector,Z_Param_to);
		P_GET_STRUCT(FIntVector,Z_Param_from);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearToFrom_Implementation(Z_Param_to,Z_Param_from);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execPointIndex)
	{
		P_GET_STRUCT(FIntVector,Z_Param_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PointIndex(Z_Param_pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execHunt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hunt_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execWalk)
	{
		P_GET_STRUCT(FIntVector,Z_Param_nuPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk_Implementation(Z_Param_nuPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execBuildMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildMaze_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execPlaceNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceNodes_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execdepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->depth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execheight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->height();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execwidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->width();
		P_NATIVE_END;
	}
	static FName NAME_AMaze_BuildMaze = FName(TEXT("BuildMaze"));
	void AMaze::BuildMaze()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMaze_BuildMaze),NULL);
	}
	static FName NAME_AMaze_BuildRoom = FName(TEXT("BuildRoom"));
	void AMaze::BuildRoom(FVector vec)
	{
		Maze_eventBuildRoom_Parms Parms;
		Parms.vec=vec;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_BuildRoom),&Parms);
	}
	static FName NAME_AMaze_ClearToFrom = FName(TEXT("ClearToFrom"));
	void AMaze::ClearToFrom(FIntVector to, FIntVector from)
	{
		Maze_eventClearToFrom_Parms Parms;
		Parms.to=to;
		Parms.from=from;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_ClearToFrom),&Parms);
	}
	static FName NAME_AMaze_ExpandRooms = FName(TEXT("ExpandRooms"));
	void AMaze::ExpandRooms()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMaze_ExpandRooms),NULL);
	}
	static FName NAME_AMaze_GetHunt = FName(TEXT("GetHunt"));
	void AMaze::GetHunt(FIntVector pont)
	{
		Maze_eventGetHunt_Parms Parms;
		Parms.pont=pont;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_GetHunt),&Parms);
	}
	static FName NAME_AMaze_Hunt = FName(TEXT("Hunt"));
	void AMaze::Hunt()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMaze_Hunt),NULL);
	}
	static FName NAME_AMaze_MakeClean = FName(TEXT("MakeClean"));
	void AMaze::MakeClean(AMazeCube* Cube)
	{
		Maze_eventMakeClean_Parms Parms;
		Parms.Cube=Cube;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_MakeClean),&Parms);
	}
	static FName NAME_AMaze_PlaceNodes = FName(TEXT("PlaceNodes"));
	void AMaze::PlaceNodes()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMaze_PlaceNodes),NULL);
	}
	static FName NAME_AMaze_SetAdj = FName(TEXT("SetAdj"));
	void AMaze::SetAdj(FIntVector pont)
	{
		Maze_eventSetAdj_Parms Parms;
		Parms.pont=pont;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_SetAdj),&Parms);
	}
	static FName NAME_AMaze_Walk = FName(TEXT("Walk"));
	void AMaze::Walk(FIntVector nuPos)
	{
		Maze_eventWalk_Parms Parms;
		Parms.nuPos=nuPos;
		ProcessEvent(FindFunctionChecked(NAME_AMaze_Walk),&Parms);
	}
	void AMaze::StaticRegisterNativesAMaze()
	{
		UClass* Class = AMaze::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildMaze", &AMaze::execBuildMaze },
			{ "BuildRoom", &AMaze::execBuildRoom },
			{ "ClearToFrom", &AMaze::execClearToFrom },
			{ "depth", &AMaze::execdepth },
			{ "ExpandRooms", &AMaze::execExpandRooms },
			{ "GetHunt", &AMaze::execGetHunt },
			{ "height", &AMaze::execheight },
			{ "Hunt", &AMaze::execHunt },
			{ "MakeClean", &AMaze::execMakeClean },
			{ "PlaceNodes", &AMaze::execPlaceNodes },
			{ "PointIndex", &AMaze::execPointIndex },
			{ "SetAdj", &AMaze::execSetAdj },
			{ "Walk", &AMaze::execWalk },
			{ "width", &AMaze::execwidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_BuildMaze_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_BuildMaze_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_BuildMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "BuildMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_BuildMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_BuildMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_BuildMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_BuildRoom_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_BuildRoom_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventBuildRoom_Parms, vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_BuildRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_BuildRoom_Statics::NewProp_vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_BuildRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_BuildRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "BuildRoom", nullptr, nullptr, sizeof(Maze_eventBuildRoom_Parms), Z_Construct_UFunction_AMaze_BuildRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_BuildRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_BuildRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_BuildRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_ClearToFrom_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_to;
		static const UECodeGen_Private::FStructPropertyParams NewProp_from;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_ClearToFrom_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventClearToFrom_Parms, to), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_ClearToFrom_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventClearToFrom_Parms, from), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_ClearToFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_ClearToFrom_Statics::NewProp_to,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_ClearToFrom_Statics::NewProp_from,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_ClearToFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "ClearToFrom", nullptr, nullptr, sizeof(Maze_eventClearToFrom_Parms), Z_Construct_UFunction_AMaze_ClearToFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_ClearToFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_ClearToFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_ClearToFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_depth_Statics
	{
		struct Maze_eventdepth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_depth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventdepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_depth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_depth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_depth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_depth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "depth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_depth_Statics::Maze_eventdepth_Parms), Z_Construct_UFunction_AMaze_depth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_depth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_depth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_depth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_depth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_depth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_ExpandRooms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_ExpandRooms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_ExpandRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "ExpandRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_ExpandRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_ExpandRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_ExpandRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_ExpandRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_GetHunt_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_pont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_GetHunt_Statics::NewProp_pont = { "pont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventGetHunt_Parms, pont), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_GetHunt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_GetHunt_Statics::NewProp_pont,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_GetHunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetHunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "GetHunt", nullptr, nullptr, sizeof(Maze_eventGetHunt_Parms), Z_Construct_UFunction_AMaze_GetHunt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetHunt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetHunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetHunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_GetHunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_GetHunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_height_Statics
	{
		struct Maze_eventheight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_height_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventheight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_height_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_height_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_height_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_height_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "height", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_height_Statics::Maze_eventheight_Parms), Z_Construct_UFunction_AMaze_height_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_height_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_height_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_height_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_height()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_height_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_Hunt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_Hunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Hunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Hunt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Hunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Hunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_Hunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_Hunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_MakeClean_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_MakeClean_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventMakeClean_Parms, Cube), Z_Construct_UClass_AMazeCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_MakeClean_Statics::NewProp_Cube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_MakeClean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "MakeClean", nullptr, nullptr, sizeof(Maze_eventMakeClean_Parms), Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_MakeClean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_MakeClean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_PlaceNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_PlaceNodes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_PlaceNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "PlaceNodes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_PlaceNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_PlaceNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_PlaceNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_PlaceNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_PointIndex_Statics
	{
		struct Maze_eventPointIndex_Parms
		{
			FIntVector pos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_PointIndex_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventPointIndex_Parms, pos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_PointIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventPointIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_PointIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_PointIndex_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_PointIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_PointIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_PointIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "PointIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_PointIndex_Statics::Maze_eventPointIndex_Parms), Z_Construct_UFunction_AMaze_PointIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_PointIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_PointIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_PointIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_PointIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_PointIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SetAdj_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_pont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_SetAdj_Statics::NewProp_pont = { "pont", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSetAdj_Parms, pont), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SetAdj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SetAdj_Statics::NewProp_pont,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SetAdj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SetAdj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "SetAdj", nullptr, nullptr, sizeof(Maze_eventSetAdj_Parms), Z_Construct_UFunction_AMaze_SetAdj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetAdj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SetAdj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetAdj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SetAdj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_SetAdj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_Walk_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_nuPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_Walk_Statics::NewProp_nuPos = { "nuPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventWalk_Parms, nuPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_Walk_Statics::NewProp_nuPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Walk", nullptr, nullptr, sizeof(Maze_eventWalk_Parms), Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_width_Statics
	{
		struct Maze_eventwidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMaze_width_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventwidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_width_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_width_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_width_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_width_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "width", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_width_Statics::Maze_eventwidth_Parms), Z_Construct_UFunction_AMaze_width_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_width_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_width_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_width_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_width()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_width_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMaze);
	UClass* Z_Construct_UClass_AMaze_NoRegister()
	{
		return AMaze::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_halfWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_halfWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_halfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_halfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_halfDepth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_halfDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSizeInUnits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomSizeInUnits;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Adjacent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Adjacent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Adjacent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeData;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visit_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Visit_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visit_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Visit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasStarted_MetaData[];
#endif
		static void NewProp_bHasStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[];
#endif
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartedHunt_MetaData[];
#endif
		static void NewProp_bStartedHunt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedHunt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCantHunt_MetaData[];
#endif
		static void NewProp_bCantHunt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCantHunt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBud_MetaData[];
#endif
		static void NewProp_bBud_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsdPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsdPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NorthWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NorthWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SouthWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SouthWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EastWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EastWalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WestWalls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WestWalls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_BuildMaze, "BuildMaze" }, // 2057390350
		{ &Z_Construct_UFunction_AMaze_BuildRoom, "BuildRoom" }, // 786793426
		{ &Z_Construct_UFunction_AMaze_ClearToFrom, "ClearToFrom" }, // 2547296019
		{ &Z_Construct_UFunction_AMaze_depth, "depth" }, // 3136817699
		{ &Z_Construct_UFunction_AMaze_ExpandRooms, "ExpandRooms" }, // 3079951362
		{ &Z_Construct_UFunction_AMaze_GetHunt, "GetHunt" }, // 687775430
		{ &Z_Construct_UFunction_AMaze_height, "height" }, // 3375412474
		{ &Z_Construct_UFunction_AMaze_Hunt, "Hunt" }, // 3303200691
		{ &Z_Construct_UFunction_AMaze_MakeClean, "MakeClean" }, // 3602023360
		{ &Z_Construct_UFunction_AMaze_PlaceNodes, "PlaceNodes" }, // 479120819
		{ &Z_Construct_UFunction_AMaze_PointIndex, "PointIndex" }, // 2111437330
		{ &Z_Construct_UFunction_AMaze_SetAdj, "SetAdj" }, // 3894162302
		{ &Z_Construct_UFunction_AMaze_Walk, "Walk" }, // 1771112920
		{ &Z_Construct_UFunction_AMaze_width, "width" }, // 3023248045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Maze.h" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_halfWidth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_halfWidth = { "halfWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, halfWidth), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_halfWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_halfWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_halfHeight_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_halfHeight = { "halfHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, halfHeight), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_halfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_halfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_halfDepth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_halfDepth = { "halfDepth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, halfDepth), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_halfDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_halfDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_RoomSizeInUnits_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_RoomSizeInUnits = { "RoomSizeInUnits", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, RoomSizeInUnits), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_RoomSizeInUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_RoomSizeInUnits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_flatPart_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_flatPart = { "flatPart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, flatPart), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_flatPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_flatPart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_thinPart_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_thinPart = { "thinPart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, thinPart), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_thinPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_thinPart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_DistS_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_DistS = { "DistS", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, DistS), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_DistS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_DistS_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent_Inner = { "Adjacent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent = { "Adjacent", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Adjacent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_Inner = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNoden, METADATA_PARAMS(nullptr, 0) }; // 3910870931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, NodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData)) }; // 3910870931
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Visit_ValueProp = { "Visit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Visit_Key_KeyProp = { "Visit_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Visit_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Visit = { "Visit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Visit), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Visit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Visit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bHasStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted = { "bHasStarted", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bRunning_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bStartedHunt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt = { "bStartedHunt", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bCantHunt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt = { "bCantHunt", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bBud_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bBud_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bBud = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bBud = { "bBud", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bBud_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bBud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bBud_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_NumPos_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NumPos = { "NumPos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, NumPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_NumPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_NumPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_UsdPos_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_UsdPos = { "UsdPos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, UsdPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_UsdPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_UsdPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Stack_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Stack), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Stack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Stack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_UpWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_UpWalls = { "UpWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, UpWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_UpWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_UpWalls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_DownWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_DownWalls = { "DownWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, DownWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_DownWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_DownWalls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_NorthWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NorthWalls = { "NorthWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, NorthWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_NorthWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_NorthWalls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_SouthWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_SouthWalls = { "SouthWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, SouthWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_SouthWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_SouthWalls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_EastWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_EastWalls = { "EastWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, EastWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_EastWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_EastWalls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_WestWalls_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_WestWalls = { "WestWalls", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, WestWalls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_WestWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_WestWalls_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_halfWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_halfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_halfDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_RoomSizeInUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_flatPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_thinPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_DistS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Adjacent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_NodeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Visit_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Visit_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Visit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bStartedHunt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bCantHunt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bBud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_NumPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_UsdPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Stack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_UpWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_DownWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_NorthWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_SouthWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_EastWalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_WestWalls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Statics::ClassParams = {
		&AMaze::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMaze_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze()
	{
		if (!Z_Registration_Info_UClass_AMaze.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMaze.OuterSingleton, Z_Construct_UClass_AMaze_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMaze.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<AMaze>()
	{
		return AMaze::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo[] = {
		{ FNoden::StaticStruct, Z_Construct_UScriptStruct_FNoden_Statics::NewStructOps, TEXT("Noden"), &Z_Registration_Info_UScriptStruct_Noden, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoden), 3910870931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMaze, AMaze::StaticClass, TEXT("AMaze"), &Z_Registration_Info_UClass_AMaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaze), 3984716118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_310854574(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
