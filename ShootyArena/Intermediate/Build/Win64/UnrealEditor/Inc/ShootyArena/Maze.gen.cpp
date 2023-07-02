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
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	SHOOTYARENA_API UScriptStruct* Z_Construct_UScriptStruct_FNoden();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	SHOOTYARENA_API UClass* Z_Construct_UClass_AMaze();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics
	{
		struct _Script_ShootyArena_eventSeedRepl_Parms
		{
			AMaze* Maza;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Maza;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::NewProp_Maza = { "Maza", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ShootyArena_eventSeedRepl_Parms, Maza), Z_Construct_UClass_AMaze_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::NewProp_Maza,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootyArena, nullptr, "SeedRepl__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::_Script_ShootyArena_eventSeedRepl_Parms), Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootyArena_SeedRepl__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisited_MetaData[];
#endif
		static void NewProp_bVisited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisited;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited_MetaData[] = {
		{ "Category", "Noden" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited_SetBit(void* Obj)
	{
		((FNoden*)Obj)->bVisited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited = { "bVisited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNoden), &Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited_MetaData)) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoden_Statics::NewProp_bVisited,
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
	DEFINE_FUNCTION(AMaze::execOnRep_Seed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Seed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execIlluminate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Illuminate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execExpandRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpandRooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execMakeRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execBuildRooms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildRooms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execBuildRoom)
	{
		P_GET_STRUCT(FVector,Z_Param_vec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildRoom(Z_Param_vec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execMakeClean)
	{
		P_GET_STRUCT(FNoden,Z_Param_Cube);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeClean(Z_Param_Cube);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execGetHunt)
	{
		P_GET_STRUCT(FIntVector,Z_Param_pont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHunt(Z_Param_pont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execSetAdj)
	{
		P_GET_STRUCT(FIntVector,Z_Param_pont);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdj(Z_Param_pont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execClearToFrom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearToFrom();
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
		P_THIS->Hunt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execWalk)
	{
		P_GET_STRUCT(FIntVector,Z_Param_NuPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk(Z_Param_NuPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execBuildMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildMaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execPlaceNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceNodes();
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
	void AMaze::StaticRegisterNativesAMaze()
	{
		UClass* Class = AMaze::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildMaze", &AMaze::execBuildMaze },
			{ "BuildRoom", &AMaze::execBuildRoom },
			{ "BuildRooms", &AMaze::execBuildRooms },
			{ "ClearToFrom", &AMaze::execClearToFrom },
			{ "depth", &AMaze::execdepth },
			{ "ExpandRooms", &AMaze::execExpandRooms },
			{ "GetHunt", &AMaze::execGetHunt },
			{ "height", &AMaze::execheight },
			{ "Hunt", &AMaze::execHunt },
			{ "Illuminate", &AMaze::execIlluminate },
			{ "MakeClean", &AMaze::execMakeClean },
			{ "MakeRoom", &AMaze::execMakeRoom },
			{ "OnRep_Seed", &AMaze::execOnRep_Seed },
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_BuildMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "BuildMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_BuildMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildMaze_Statics::Function_MetaDataParams)) };
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
		struct Maze_eventBuildRoom_Parms
		{
			FVector vec;
		};
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_BuildRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "BuildRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_BuildRoom_Statics::Maze_eventBuildRoom_Parms), Z_Construct_UFunction_AMaze_BuildRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_BuildRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_BuildRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_BuildRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_BuildRooms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_BuildRooms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_BuildRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "BuildRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_BuildRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_BuildRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_BuildRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_BuildRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_ClearToFrom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_ClearToFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "ClearToFrom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_ClearToFrom_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_ExpandRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "ExpandRooms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_ExpandRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_ExpandRooms_Statics::Function_MetaDataParams)) };
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
		struct Maze_eventGetHunt_Parms
		{
			FIntVector pont;
		};
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_GetHunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "GetHunt", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_GetHunt_Statics::Maze_eventGetHunt_Parms), Z_Construct_UFunction_AMaze_GetHunt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetHunt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_GetHunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_GetHunt_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Hunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Hunt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Hunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Hunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_Hunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_Hunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_Illuminate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_Illuminate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Illuminate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Illuminate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Illuminate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Illuminate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_Illuminate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_Illuminate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_MakeClean_Statics
	{
		struct Maze_eventMakeClean_Parms
		{
			FNoden Cube;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_MakeClean_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventMakeClean_Parms, Cube), Z_Construct_UScriptStruct_FNoden, METADATA_PARAMS(nullptr, 0) }; // 3481632578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_MakeClean_Statics::NewProp_Cube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_MakeClean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "MakeClean", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_MakeClean_Statics::Maze_eventMakeClean_Parms), Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_MakeClean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_MakeClean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_MakeClean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_MakeClean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_MakeRoom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_MakeRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_MakeRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "MakeRoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_MakeRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_MakeRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_MakeRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_MakeRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_OnRep_Seed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_OnRep_Seed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_OnRep_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "OnRep_Seed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_OnRep_Seed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_OnRep_Seed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_OnRep_Seed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMaze_OnRep_Seed_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_PlaceNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "PlaceNodes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_PlaceNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_PlaceNodes_Statics::Function_MetaDataParams)) };
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
		struct Maze_eventSetAdj_Parms
		{
			FIntVector pont;
		};
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SetAdj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "SetAdj", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_SetAdj_Statics::Maze_eventSetAdj_Parms), Z_Construct_UFunction_AMaze_SetAdj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetAdj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SetAdj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SetAdj_Statics::Function_MetaDataParams)) };
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
		struct Maze_eventWalk_Parms
		{
			FIntVector NuPos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NuPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_Walk_Statics::NewProp_NuPos = { "NuPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventWalk_Parms, NuPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_Walk_Statics::NewProp_NuPos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Walk", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMaze_Walk_Statics::Maze_eventWalk_Parms), Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Walk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Walk_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Light;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Lights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_BuildMaze, "BuildMaze" }, // 3869533371
		{ &Z_Construct_UFunction_AMaze_BuildRoom, "BuildRoom" }, // 1913452586
		{ &Z_Construct_UFunction_AMaze_BuildRooms, "BuildRooms" }, // 1205607443
		{ &Z_Construct_UFunction_AMaze_ClearToFrom, "ClearToFrom" }, // 2599541231
		{ &Z_Construct_UFunction_AMaze_depth, "depth" }, // 3136817699
		{ &Z_Construct_UFunction_AMaze_ExpandRooms, "ExpandRooms" }, // 3271648429
		{ &Z_Construct_UFunction_AMaze_GetHunt, "GetHunt" }, // 1997513444
		{ &Z_Construct_UFunction_AMaze_height, "height" }, // 3375412474
		{ &Z_Construct_UFunction_AMaze_Hunt, "Hunt" }, // 1663269739
		{ &Z_Construct_UFunction_AMaze_Illuminate, "Illuminate" }, // 3522638420
		{ &Z_Construct_UFunction_AMaze_MakeClean, "MakeClean" }, // 626289606
		{ &Z_Construct_UFunction_AMaze_MakeRoom, "MakeRoom" }, // 4082314211
		{ &Z_Construct_UFunction_AMaze_OnRep_Seed, "OnRep_Seed" }, // 1113394530
		{ &Z_Construct_UFunction_AMaze_PlaceNodes, "PlaceNodes" }, // 1728547883
		{ &Z_Construct_UFunction_AMaze_PointIndex, "PointIndex" }, // 2111437330
		{ &Z_Construct_UFunction_AMaze_SetAdj, "SetAdj" }, // 2471355487
		{ &Z_Construct_UFunction_AMaze_Walk, "Walk" }, // 390265452
		{ &Z_Construct_UFunction_AMaze_width, "width" }, // 3023248045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Maze.h" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, ReplicatedUsing=\"OnRep_Seed\", Category= \"Seed\")\n" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, ReplicatedUsing=\"OnRep_Seed\", Category= \"Seed\")" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Seed), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData)) };
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_Inner = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNoden, METADATA_PARAMS(nullptr, 0) }; // 3481632578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, NodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_NodeData_MetaData)) }; // 3481632578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bHasStarted_MetaData[] = {
		{ "Category", "Maze" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite)\n//TArray<bool> Visit;\n" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite)\nTArray<bool> Visit;" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Maze" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n//UMeshComponent* Mesh;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Maze.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere)\nUMeshComponent* Mesh;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Center), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Light), Z_Construct_UClass_APointLight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Light_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Lights_Inner = { "Lights", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APointLight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Lights_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Maze.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Lights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Seed,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Lights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Lights,
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

	void AMaze::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Seed(TEXT("Seed"));

		const bool bIsValid = true
			&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMaze"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo[] = {
		{ FNoden::StaticStruct, Z_Construct_UScriptStruct_FNoden_Statics::NewStructOps, TEXT("Noden"), &Z_Registration_Info_UScriptStruct_Noden, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoden), 3481632578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMaze, AMaze::StaticClass, TEXT("AMaze"), &Z_Registration_Info_UClass_AMaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMaze), 572920500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_1441314379(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_Maze_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
