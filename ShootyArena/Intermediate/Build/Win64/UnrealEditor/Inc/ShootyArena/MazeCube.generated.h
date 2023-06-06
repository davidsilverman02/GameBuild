// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
class USceneComponent;
#ifdef SHOOTYARENA_MazeCube_generated_h
#error "MazeCube.generated.h already included, missing '#pragma once' in MazeCube.h"
#endif
#define SHOOTYARENA_MazeCube_generated_h

#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_RPC_WRAPPERS \
	virtual void SetWest_Implementation(bool newB); \
	virtual void SetEast_Implementation(bool newB); \
	virtual void SetSouth_Implementation(bool newB); \
	virtual void SetNorth_Implementation(bool newB); \
	virtual void SetDown_Implementation(bool newB); \
	virtual void SetUp_Implementation(bool newB); \
	virtual void SetNode_Implementation(FIntVector vec); \
 \
	DECLARE_FUNCTION(execGetClog); \
	DECLARE_FUNCTION(execWestPoint); \
	DECLARE_FUNCTION(execSetWest); \
	DECLARE_FUNCTION(execGetWest); \
	DECLARE_FUNCTION(execEastPoint); \
	DECLARE_FUNCTION(execSetEast); \
	DECLARE_FUNCTION(execGetEast); \
	DECLARE_FUNCTION(execSouthPoint); \
	DECLARE_FUNCTION(execSetSouth); \
	DECLARE_FUNCTION(execGetSouth); \
	DECLARE_FUNCTION(execNorthPoint); \
	DECLARE_FUNCTION(execSetNorth); \
	DECLARE_FUNCTION(execGetNorth); \
	DECLARE_FUNCTION(execDownPoint); \
	DECLARE_FUNCTION(execSetDown); \
	DECLARE_FUNCTION(execGetDown); \
	DECLARE_FUNCTION(execUpPoint); \
	DECLARE_FUNCTION(execSetUp); \
	DECLARE_FUNCTION(execGetUp); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execSetNode); \
	DECLARE_FUNCTION(execActiveWall);


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetWest_Implementation(bool newB); \
	virtual void SetEast_Implementation(bool newB); \
	virtual void SetSouth_Implementation(bool newB); \
	virtual void SetNorth_Implementation(bool newB); \
	virtual void SetDown_Implementation(bool newB); \
	virtual void SetUp_Implementation(bool newB); \
	virtual void SetNode_Implementation(FIntVector vec); \
 \
	DECLARE_FUNCTION(execGetClog); \
	DECLARE_FUNCTION(execWestPoint); \
	DECLARE_FUNCTION(execSetWest); \
	DECLARE_FUNCTION(execGetWest); \
	DECLARE_FUNCTION(execEastPoint); \
	DECLARE_FUNCTION(execSetEast); \
	DECLARE_FUNCTION(execGetEast); \
	DECLARE_FUNCTION(execSouthPoint); \
	DECLARE_FUNCTION(execSetSouth); \
	DECLARE_FUNCTION(execGetSouth); \
	DECLARE_FUNCTION(execNorthPoint); \
	DECLARE_FUNCTION(execSetNorth); \
	DECLARE_FUNCTION(execGetNorth); \
	DECLARE_FUNCTION(execDownPoint); \
	DECLARE_FUNCTION(execSetDown); \
	DECLARE_FUNCTION(execGetDown); \
	DECLARE_FUNCTION(execUpPoint); \
	DECLARE_FUNCTION(execSetUp); \
	DECLARE_FUNCTION(execGetUp); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execSetNode); \
	DECLARE_FUNCTION(execActiveWall);


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_EVENT_PARMS \
	struct MazeCube_eventSetDown_Parms \
	{ \
		bool newB; \
	}; \
	struct MazeCube_eventSetEast_Parms \
	{ \
		bool newB; \
	}; \
	struct MazeCube_eventSetNode_Parms \
	{ \
		FIntVector vec; \
	}; \
	struct MazeCube_eventSetNorth_Parms \
	{ \
		bool newB; \
	}; \
	struct MazeCube_eventSetSouth_Parms \
	{ \
		bool newB; \
	}; \
	struct MazeCube_eventSetUp_Parms \
	{ \
		bool newB; \
	}; \
	struct MazeCube_eventSetWest_Parms \
	{ \
		bool newB; \
	};


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeCube(); \
	friend struct Z_Construct_UClass_AMazeCube_Statics; \
public: \
	DECLARE_CLASS(AMazeCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMazeCube)


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMazeCube(); \
	friend struct Z_Construct_UClass_AMazeCube_Statics; \
public: \
	DECLARE_CLASS(AMazeCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AMazeCube)


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeCube(AMazeCube&&); \
	NO_API AMazeCube(const AMazeCube&); \
public:


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeCube(AMazeCube&&); \
	NO_API AMazeCube(const AMazeCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeCube)


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_10_PROLOG \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_INCLASS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_MazeCube_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AMazeCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_MazeCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
