// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POGY_Teleporter_generated_h
#error "Teleporter.generated.h already included, missing '#pragma once' in Teleporter.h"
#endif
#define POGY_Teleporter_generated_h

#define FID_Pogy_Source_Pogy_Teleporter_h_15_SPARSE_DATA
#define FID_Pogy_Source_Pogy_Teleporter_h_15_RPC_WRAPPERS
#define FID_Pogy_Source_Pogy_Teleporter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pogy_Source_Pogy_Teleporter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporter(); \
	friend struct Z_Construct_UClass_ATeleporter_Statics; \
public: \
	DECLARE_CLASS(ATeleporter, AMagicProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter)


#define FID_Pogy_Source_Pogy_Teleporter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATeleporter(); \
	friend struct Z_Construct_UClass_ATeleporter_Statics; \
public: \
	DECLARE_CLASS(ATeleporter, AMagicProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pogy"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter)


#define FID_Pogy_Source_Pogy_Teleporter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter(ATeleporter&&); \
	NO_API ATeleporter(const ATeleporter&); \
public:


#define FID_Pogy_Source_Pogy_Teleporter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter(ATeleporter&&); \
	NO_API ATeleporter(const ATeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporter)


#define FID_Pogy_Source_Pogy_Teleporter_h_12_PROLOG
#define FID_Pogy_Source_Pogy_Teleporter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_Teleporter_h_15_SPARSE_DATA \
	FID_Pogy_Source_Pogy_Teleporter_h_15_RPC_WRAPPERS \
	FID_Pogy_Source_Pogy_Teleporter_h_15_INCLASS \
	FID_Pogy_Source_Pogy_Teleporter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pogy_Source_Pogy_Teleporter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pogy_Source_Pogy_Teleporter_h_15_SPARSE_DATA \
	FID_Pogy_Source_Pogy_Teleporter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_Teleporter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Pogy_Source_Pogy_Teleporter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POGY_API UClass* StaticClass<class ATeleporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pogy_Source_Pogy_Teleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
