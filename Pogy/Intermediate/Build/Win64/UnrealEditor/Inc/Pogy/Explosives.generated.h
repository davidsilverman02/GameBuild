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
#ifdef POGY_Explosives_generated_h
#error "Explosives.generated.h already included, missing '#pragma once' in Explosives.h"
#endif
#define POGY_Explosives_generated_h

#define FID_Pogy_Source_Pogy_Explosives_h_14_SPARSE_DATA
#define FID_Pogy_Source_Pogy_Explosives_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_Pogy_Source_Pogy_Explosives_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define FID_Pogy_Source_Pogy_Explosives_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosives(); \
	friend struct Z_Construct_UClass_AExplosives_Statics; \
public: \
	DECLARE_CLASS(AExplosives, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(AExplosives)


#define FID_Pogy_Source_Pogy_Explosives_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAExplosives(); \
	friend struct Z_Construct_UClass_AExplosives_Statics; \
public: \
	DECLARE_CLASS(AExplosives, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(AExplosives)


#define FID_Pogy_Source_Pogy_Explosives_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosives(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosives) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosives); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosives); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosives(AExplosives&&); \
	NO_API AExplosives(const AExplosives&); \
public:


#define FID_Pogy_Source_Pogy_Explosives_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosives(AExplosives&&); \
	NO_API AExplosives(const AExplosives&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosives); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosives); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosives)


#define FID_Pogy_Source_Pogy_Explosives_h_11_PROLOG
#define FID_Pogy_Source_Pogy_Explosives_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_Explosives_h_14_SPARSE_DATA \
	FID_Pogy_Source_Pogy_Explosives_h_14_RPC_WRAPPERS \
	FID_Pogy_Source_Pogy_Explosives_h_14_INCLASS \
	FID_Pogy_Source_Pogy_Explosives_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pogy_Source_Pogy_Explosives_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_Explosives_h_14_SPARSE_DATA \
	FID_Pogy_Source_Pogy_Explosives_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_Explosives_h_14_INCLASS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_Explosives_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POGY_API UClass* StaticClass<class AExplosives>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pogy_Source_Pogy_Explosives_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
