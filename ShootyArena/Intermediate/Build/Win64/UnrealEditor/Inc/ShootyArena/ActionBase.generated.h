// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActionComponent;
#ifdef SHOOTYARENA_ActionBase_generated_h
#error "ActionBase.generated.h already included, missing '#pragma once' in ActionBase.h"
#endif
#define SHOOTYARENA_ActionBase_generated_h

#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionRepData_Statics; \
	SHOOTYARENA_API static class UScriptStruct* StaticStruct();


template<> SHOOTYARENA_API UScriptStruct* StaticStruct<struct FActionRepData>();

#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_RPC_WRAPPERS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopAction_Implementation(AActor* Instigator); \
	virtual void StartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execGetOwningComponent);


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_EVENT_PARMS \
	struct ActionBase_eventCanStart_Parms \
	{ \
		AActor* Instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ActionBase_eventCanStart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ActionBase_eventStartAction_Parms \
	{ \
		AActor* Instigator; \
	}; \
	struct ActionBase_eventStopAction_Parms \
	{ \
		AActor* Instigator; \
	};


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionBase(); \
	friend struct Z_Construct_UClass_UActionBase_Statics; \
public: \
	DECLARE_CLASS(UActionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UActionBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActionComp=NETFIELD_REP_START, \
		RepData, \
		TimeStarted, \
		NETFIELD_REP_END=TimeStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActionBase) \
public:


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUActionBase(); \
	friend struct Z_Construct_UClass_UActionBase_Statics; \
public: \
	DECLARE_CLASS(UActionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UActionBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActionComp=NETFIELD_REP_START, \
		RepData, \
		TimeStarted, \
		NETFIELD_REP_END=TimeStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActionBase) \
public:


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionBase(UActionBase&&); \
	NO_API UActionBase(const UActionBase&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionBase(UActionBase&&); \
	NO_API UActionBase(const UActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionBase)


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_30_PROLOG \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ActionBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class UActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
