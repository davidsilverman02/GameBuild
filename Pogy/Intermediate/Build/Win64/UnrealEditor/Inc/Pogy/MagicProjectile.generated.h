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
#ifdef POGY_MagicProjectile_generated_h
#error "MagicProjectile.generated.h already included, missing '#pragma once' in MagicProjectile.h"
#endif
#define POGY_MagicProjectile_generated_h

#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_SPARSE_DATA
#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_RPC_WRAPPERS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_EVENT_PARMS
#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_CALLBACK_WRAPPERS
#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicProjectile(); \
	friend struct Z_Construct_UClass_AMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(AMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(AMagicProjectile)


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMagicProjectile(); \
	friend struct Z_Construct_UClass_AMagicProjectile_Statics; \
public: \
	DECLARE_CLASS(AMagicProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(AMagicProjectile)


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicProjectile(AMagicProjectile&&); \
	NO_API AMagicProjectile(const AMagicProjectile&); \
public:


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicProjectile(AMagicProjectile&&); \
	NO_API AMagicProjectile(const AMagicProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicProjectile)


#define FID_Pogy_Source_Pogy_MagicProjectile_h_14_PROLOG \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_EVENT_PARMS


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_SPARSE_DATA \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_RPC_WRAPPERS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_CALLBACK_WRAPPERS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_INCLASS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pogy_Source_Pogy_MagicProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_SPARSE_DATA \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_CALLBACK_WRAPPERS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_INCLASS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_MagicProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POGY_API UClass* StaticClass<class AMagicProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pogy_Source_Pogy_MagicProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
