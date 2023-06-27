// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNoden;
struct FIntVector;
#ifdef SHOOTYARENA_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define SHOOTYARENA_Maze_generated_h

#define FID_ShootyArena_Source_ShootyArena_Maze_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoden_Statics; \
	SHOOTYARENA_API static class UScriptStruct* StaticStruct();


template<> SHOOTYARENA_API UScriptStruct* StaticStruct<struct FNoden>();

#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_RPC_WRAPPERS \
	virtual void Illuminate_Implementation(); \
	virtual void ExpandRooms_Implementation(); \
	virtual void BuildRoom_Implementation(FVector vec); \
	virtual void MakeClean_Implementation(FNoden Cube); \
	virtual void GetHunt_Implementation(FIntVector pont); \
	virtual void SetAdj_Implementation(FIntVector pont); \
	virtual void ClearToFrom_Implementation(FIntVector to, FIntVector from); \
	virtual void Hunt_Implementation(); \
	virtual void Walk_Implementation(FIntVector nuPos); \
	virtual void BuildMaze_Implementation(); \
	virtual void PlaceNodes_Implementation(); \
 \
	DECLARE_FUNCTION(execIlluminate); \
	DECLARE_FUNCTION(execExpandRooms); \
	DECLARE_FUNCTION(execBuildRoom); \
	DECLARE_FUNCTION(execMakeClean); \
	DECLARE_FUNCTION(execGetHunt); \
	DECLARE_FUNCTION(execSetAdj); \
	DECLARE_FUNCTION(execClearToFrom); \
	DECLARE_FUNCTION(execPointIndex); \
	DECLARE_FUNCTION(execHunt); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execBuildMaze); \
	DECLARE_FUNCTION(execPlaceNodes); \
	DECLARE_FUNCTION(execdepth); \
	DECLARE_FUNCTION(execheight); \
	DECLARE_FUNCTION(execwidth);


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Illuminate_Implementation(); \
	virtual void ExpandRooms_Implementation(); \
	virtual void BuildRoom_Implementation(FVector vec); \
	virtual void MakeClean_Implementation(FNoden Cube); \
	virtual void GetHunt_Implementation(FIntVector pont); \
	virtual void SetAdj_Implementation(FIntVector pont); \
	virtual void ClearToFrom_Implementation(FIntVector to, FIntVector from); \
	virtual void Hunt_Implementation(); \
	virtual void Walk_Implementation(FIntVector nuPos); \
	virtual void BuildMaze_Implementation(); \
	virtual void PlaceNodes_Implementation(); \
 \
	DECLARE_FUNCTION(execIlluminate); \
	DECLARE_FUNCTION(execExpandRooms); \
	DECLARE_FUNCTION(execBuildRoom); \
	DECLARE_FUNCTION(execMakeClean); \
	DECLARE_FUNCTION(execGetHunt); \
	DECLARE_FUNCTION(execSetAdj); \
	DECLARE_FUNCTION(execClearToFrom); \
	DECLARE_FUNCTION(execPointIndex); \
	DECLARE_FUNCTION(execHunt); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execBuildMaze); \
	DECLARE_FUNCTION(execPlaceNodes); \
	DECLARE_FUNCTION(execdepth); \
	DECLARE_FUNCTION(execheight); \
	DECLARE_FUNCTION(execwidth);


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_EVENT_PARMS \
	struct Maze_eventBuildRoom_Parms \
	{ \
		FVector vec; \
	}; \
	struct Maze_eventClearToFrom_Parms \
	{ \
		FIntVector to; \
		FIntVector from; \
	}; \
	struct Maze_eventGetHunt_Parms \
	{ \
		FIntVector pont; \
	}; \
	struct Maze_eventMakeClean_Parms \
	{ \
		FNoden Cube; \
	}; \
	struct Maze_eventSetAdj_Parms \
	{ \
		FIntVector pont; \
	}; \
	struct Maze_eventWalk_Parms \
	{ \
		FIntVector nuPos; \
	};


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public:


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_104_PROLOG \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_INCLASS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_Maze_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_Maze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
