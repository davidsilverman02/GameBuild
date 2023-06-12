// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTYARENA_ShootyArenaCharacter_generated_h
#error "ShootyArenaCharacter.generated.h already included, missing '#pragma once' in ShootyArenaCharacter.h"
#endif
#define SHOOTYARENA_ShootyArenaCharacter_generated_h

#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_19_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_RPC_WRAPPERS \
	virtual void Shoot_Implementation(); \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGetMuzzle); \
	DECLARE_FUNCTION(execGetRota);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Shoot_Implementation(); \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGetMuzzle); \
	DECLARE_FUNCTION(execGetRota);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_EVENT_PARMS
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootyArenaCharacter(); \
	friend struct Z_Construct_UClass_AShootyArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AShootyArenaCharacter)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAShootyArenaCharacter(); \
	friend struct Z_Construct_UClass_AShootyArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AShootyArenaCharacter)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootyArenaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootyArenaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootyArenaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootyArenaCharacter(AShootyArenaCharacter&&); \
	NO_API AShootyArenaCharacter(const AShootyArenaCharacter&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootyArenaCharacter(AShootyArenaCharacter&&); \
	NO_API AShootyArenaCharacter(const AShootyArenaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootyArenaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootyArenaCharacter)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_21_PROLOG \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AShootyArenaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ShootyArenaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
