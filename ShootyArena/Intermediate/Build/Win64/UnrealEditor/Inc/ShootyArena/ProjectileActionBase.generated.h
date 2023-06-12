// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef SHOOTYARENA_ProjectileActionBase_generated_h
#error "ProjectileActionBase.generated.h already included, missing '#pragma once' in ProjectileActionBase.h"
#endif
#define SHOOTYARENA_ProjectileActionBase_generated_h

#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMuzzle); \
	DECLARE_FUNCTION(execGetRot); \
	DECLARE_FUNCTION(execAttackDelay_Elapsed);


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMuzzle); \
	DECLARE_FUNCTION(execGetRot); \
	DECLARE_FUNCTION(execAttackDelay_Elapsed);


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileActionBase(); \
	friend struct Z_Construct_UClass_UProjectileActionBase_Statics; \
public: \
	DECLARE_CLASS(UProjectileActionBase, UActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UProjectileActionBase)


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUProjectileActionBase(); \
	friend struct Z_Construct_UClass_UProjectileActionBase_Statics; \
public: \
	DECLARE_CLASS(UProjectileActionBase, UActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UProjectileActionBase)


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileActionBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileActionBase(UProjectileActionBase&&); \
	NO_API UProjectileActionBase(const UProjectileActionBase&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileActionBase(UProjectileActionBase&&); \
	NO_API UProjectileActionBase(const UProjectileActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileActionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectileActionBase)


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_12_PROLOG
#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class UProjectileActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ProjectileActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
