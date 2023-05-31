// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTYARENA_ShootyArenaProjectile_generated_h
#error "ShootyArenaProjectile.generated.h already included, missing '#pragma once' in ShootyArenaProjectile.h"
#endif
#define SHOOTYARENA_ShootyArenaProjectile_generated_h

#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootyArenaProjectile(); \
	friend struct Z_Construct_UClass_AShootyArenaProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AShootyArenaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootyArenaProjectile(); \
	friend struct Z_Construct_UClass_AShootyArenaProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootyArenaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(AShootyArenaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootyArenaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootyArenaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootyArenaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootyArenaProjectile(AShootyArenaProjectile&&); \
	NO_API AShootyArenaProjectile(const AShootyArenaProjectile&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootyArenaProjectile(AShootyArenaProjectile&&); \
	NO_API AShootyArenaProjectile(const AShootyArenaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootyArenaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootyArenaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootyArenaProjectile)


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_12_PROLOG
#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class AShootyArenaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ShootyArenaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
