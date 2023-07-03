// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AArenaPlayerState;
#ifdef SHOOTYARENA_ArenaPlayerState_generated_h
#error "ArenaPlayerState.generated.h already included, missing '#pragma once' in ArenaPlayerState.h"
#endif
#define SHOOTYARENA_ArenaPlayerState_generated_h

#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_11_DELEGATE \
struct _Script_ShootyArena_eventOnPointsChanged_Parms \
{ \
	AArenaPlayerState* PlayerState; \
	int32 NewPoints; \
	int32 Delta; \
}; \
static inline void FOnPointsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPointsChanged, AArenaPlayerState* PlayerState, int32 NewPoints, int32 Delta) \
{ \
	_Script_ShootyArena_eventOnPointsChanged_Parms Parms; \
	Parms.PlayerState=PlayerState; \
	Parms.NewPoints=NewPoints; \
	Parms.Delta=Delta; \
	OnPointsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_RPC_WRAPPERS \
	virtual void AddPoints_Implementation(int32 Delta); \
 \
	DECLARE_FUNCTION(execRemovePoints); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execOnRep_Points);


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddPoints_Implementation(int32 Delta); \
 \
	DECLARE_FUNCTION(execRemovePoints); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execOnRep_Points);


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_EVENT_PARMS \
	struct ArenaPlayerState_eventAddPoints_Parms \
	{ \
		int32 Delta; \
	};


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaPlayerState(); \
	friend struct Z_Construct_UClass_AArenaPlayerState_Statics; \
public: \
	DECLARE_CLASS(AArenaPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AArenaPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Points=NETFIELD_REP_START, \
		NETFIELD_REP_END=Points	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAArenaPlayerState(); \
	friend struct Z_Construct_UClass_AArenaPlayerState_Statics; \
public: \
	DECLARE_CLASS(AArenaPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AArenaPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Points=NETFIELD_REP_START, \
		NETFIELD_REP_END=Points	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaPlayerState(AArenaPlayerState&&); \
	NO_API AArenaPlayerState(const AArenaPlayerState&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaPlayerState(AArenaPlayerState&&); \
	NO_API AArenaPlayerState(const AArenaPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerState)


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_15_PROLOG \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AArenaPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ArenaPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
