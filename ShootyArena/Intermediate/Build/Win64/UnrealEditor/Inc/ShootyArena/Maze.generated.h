// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMazeCube;
struct FIntVector;
#ifdef SHOOTYARENA_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define SHOOTYARENA_Maze_generated_h

#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_RPC_WRAPPERS \
	virtual void MakeClean_Implementation(AMazeCube* Cube); \
	virtual void GetHunt_Implementation(FIntVector pont); \
	virtual void SetAdj_Implementation(FIntVector pont); \
	virtual void ClearToFrom_Implementation(FIntVector to, FIntVector from); \
	virtual void Hunt_Implementation(); \
	virtual void Walk_Implementation(FIntVector nuPos); \
	virtual void BuildMaze_Implementation(); \
	virtual void PlaceNodes_Implementation(); \
 \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MakeClean_Implementation(AMazeCube* Cube); \
	virtual void GetHunt_Implementation(FIntVector pont); \
	virtual void SetAdj_Implementation(FIntVector pont); \
	virtual void ClearToFrom_Implementation(FIntVector to, FIntVector from); \
	virtual void Hunt_Implementation(); \
	virtual void Walk_Implementation(FIntVector nuPos); \
	virtual void BuildMaze_Implementation(); \
	virtual void PlaceNodes_Implementation(); \
 \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_EVENT_PARMS \
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
		AMazeCube* Cube; \
	}; \
	struct Maze_eventSetAdj_Parms \
	{ \
		FIntVector pont; \
	}; \
	struct Maze_eventWalk_Parms \
	{ \
		FIntVector nuPos; \
	};


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_STANDARD_CONSTRUCTORS \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_11_PROLOG \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_INCLASS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_Maze_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_Maze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
