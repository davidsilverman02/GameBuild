// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMaze;
struct FNoden;
struct FIntVector;
#ifdef SHOOTYARENA_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define SHOOTYARENA_Maze_generated_h

#define FID_ShootyArena_Source_ShootyArena_Maze_h_18_DELEGATE \
struct _Script_ShootyArena_eventSeedRepl_Parms \
{ \
	AMaze* Maza; \
}; \
static inline void FSeedRepl_DelegateWrapper(const FMulticastScriptDelegate& SeedRepl, AMaze* Maza) \
{ \
	_Script_ShootyArena_eventSeedRepl_Parms Parms; \
	Parms.Maza=Maza; \
	SeedRepl.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ShootyArena_Source_ShootyArena_Maze_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNoden_Statics; \
	SHOOTYARENA_API static class UScriptStruct* StaticStruct();


template<> SHOOTYARENA_API UScriptStruct* StaticStruct<struct FNoden>();

#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Seed); \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Seed); \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMaze) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_STANDARD_CONSTRUCTORS \
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


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define FID_ShootyArena_Source_ShootyArena_Maze_h_112_PROLOG
#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_INCLASS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_Maze_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_Maze_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_Maze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
