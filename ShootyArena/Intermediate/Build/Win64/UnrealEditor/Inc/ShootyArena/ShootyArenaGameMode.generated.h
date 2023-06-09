// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTYARENA_ShootyArenaGameMode_generated_h
#error "ShootyArenaGameMode.generated.h already included, missing '#pragma once' in ShootyArenaGameMode.h"
#endif
#define SHOOTYARENA_ShootyArenaGameMode_generated_h

#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_10_DELEGATE \
struct _Script_ShootyArena_eventOnTimeChanged_Parms \
{ \
	FString Tim; \
}; \
static inline void FOnTimeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTimeChanged, const FString& Tim) \
{ \
	_Script_ShootyArena_eventOnTimeChanged_Parms Parms; \
	Parms.Tim=Tim; \
	OnTimeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_11_DELEGATE \
struct _Script_ShootyArena_eventGameEnded_Parms \
{ \
	bool HighHealth; \
}; \
static inline void FGameEnded_DelegateWrapper(const FMulticastScriptDelegate& GameEnded, bool HighHealth) \
{ \
	_Script_ShootyArena_eventGameEnded_Parms Parms; \
	Parms.HighHealth=HighHealth ? true : false; \
	GameEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execTimeEnd); \
	DECLARE_FUNCTION(execTimeDown); \
	DECLARE_FUNCTION(execTimeInMinutes);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execTimeEnd); \
	DECLARE_FUNCTION(execTimeDown); \
	DECLARE_FUNCTION(execTimeInMinutes);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootyArenaGameMode(); \
	friend struct Z_Construct_UClass_AShootyArenaGameMode_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), SHOOTYARENA_API) \
	DECLARE_SERIALIZER(AShootyArenaGameMode)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootyArenaGameMode(); \
	friend struct Z_Construct_UClass_AShootyArenaGameMode_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), SHOOTYARENA_API) \
	DECLARE_SERIALIZER(AShootyArenaGameMode)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTYARENA_API AShootyArenaGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootyArenaGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTYARENA_API, AShootyArenaGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTYARENA_API AShootyArenaGameMode(AShootyArenaGameMode&&); \
	SHOOTYARENA_API AShootyArenaGameMode(const AShootyArenaGameMode&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTYARENA_API AShootyArenaGameMode(AShootyArenaGameMode&&); \
	SHOOTYARENA_API AShootyArenaGameMode(const AShootyArenaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTYARENA_API, AShootyArenaGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootyArenaGameMode)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_12_PROLOG
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AShootyArenaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ShootyArenaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
