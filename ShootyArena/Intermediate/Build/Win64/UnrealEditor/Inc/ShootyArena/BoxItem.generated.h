// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
#ifdef SHOOTYARENA_BoxItem_generated_h
#error "BoxItem.generated.h already included, missing '#pragma once' in BoxItem.h"
#endif
#define SHOOTYARENA_BoxItem_generated_h

#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetNode);


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetNode);


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_EVENT_PARMS \
	struct BoxItem_eventSetDown_Parms \
	{ \
		bool newB; \
	}; \
	struct BoxItem_eventSetEast_Parms \
	{ \
		bool newB; \
	}; \
	struct BoxItem_eventSetNode_Parms \
	{ \
		FIntVector vec; \
	}; \
	struct BoxItem_eventSetNorth_Parms \
	{ \
		bool newB; \
	}; \
	struct BoxItem_eventSetSouth_Parms \
	{ \
		bool newB; \
	}; \
	struct BoxItem_eventSetUp_Parms \
	{ \
		bool newB; \
	}; \
	struct BoxItem_eventSetWest_Parms \
	{ \
		bool newB; \
	};


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoxItem(); \
	friend struct Z_Construct_UClass_UBoxItem_Statics; \
public: \
	DECLARE_CLASS(UBoxItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UBoxItem)


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBoxItem(); \
	friend struct Z_Construct_UClass_UBoxItem_Statics; \
public: \
	DECLARE_CLASS(UBoxItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UBoxItem)


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxItem(UBoxItem&&); \
	NO_API UBoxItem(const UBoxItem&); \
public:


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxItem(UBoxItem&&); \
	NO_API UBoxItem(const UBoxItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoxItem)


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_12_PROLOG \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_INCLASS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_BoxItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class UBoxItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_BoxItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
