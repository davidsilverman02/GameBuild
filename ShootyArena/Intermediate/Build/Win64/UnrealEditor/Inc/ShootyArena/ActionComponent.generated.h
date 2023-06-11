// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActionComponent;
class UActionBase;
class AActor;
#ifdef SHOOTYARENA_ActionComponent_generated_h
#error "ActionComponent.generated.h already included, missing '#pragma once' in ActionComponent.h"
#endif
#define SHOOTYARENA_ActionComponent_generated_h

#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_13_DELEGATE \
struct _Script_ShootyArena_eventOnActionStateChanged_Parms \
{ \
	UActionComponent* OwningComp; \
	UActionBase* Action; \
}; \
static inline void FOnActionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActionStateChanged, UActionComponent* OwningComp, UActionBase* Action) \
{ \
	_Script_ShootyArena_eventOnActionStateChanged_Parms Parms; \
	Parms.OwningComp=OwningComp; \
	Parms.Action=Action; \
	OnActionStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_SPARSE_DATA
#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_RPC_WRAPPERS \
	virtual void ServerStopAction_Implementation(AActor* Instigator, FName ActionName); \
	virtual void ServerStartAction_Implementation(AActor* Instigator, FName ActionName); \
 \
	DECLARE_FUNCTION(execServerStopAction); \
	DECLARE_FUNCTION(execServerStartAction); \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerStopAction_Implementation(AActor* Instigator, FName ActionName); \
	virtual void ServerStartAction_Implementation(AActor* Instigator, FName ActionName); \
 \
	DECLARE_FUNCTION(execServerStopAction); \
	DECLARE_FUNCTION(execServerStartAction); \
	DECLARE_FUNCTION(execStopActionByName); \
	DECLARE_FUNCTION(execStartActionByName); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execAddAction);


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_EVENT_PARMS \
	struct ActionComponent_eventServerStartAction_Parms \
	{ \
		AActor* Instigator; \
		FName ActionName; \
	}; \
	struct ActionComponent_eventServerStopAction_Parms \
	{ \
		AActor* Instigator; \
		FName ActionName; \
	};


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_CALLBACK_WRAPPERS
#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionComponent(); \
	friend struct Z_Construct_UClass_UActionComponent_Statics; \
public: \
	DECLARE_CLASS(UActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UActionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Actions=NETFIELD_REP_START, \
		NETFIELD_REP_END=Actions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUActionComponent(); \
	friend struct Z_Construct_UClass_UActionComponent_Statics; \
public: \
	DECLARE_CLASS(UActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootyArena"), NO_API) \
	DECLARE_SERIALIZER(UActionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Actions=NETFIELD_REP_START, \
		NETFIELD_REP_END=Actions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionComponent(UActionComponent&&); \
	NO_API UActionComponent(const UActionComponent&); \
public:


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionComponent(UActionComponent&&); \
	NO_API UActionComponent(const UActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionComponent)


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_15_PROLOG \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_EVENT_PARMS


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_RPC_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_INCLASS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_SPARSE_DATA \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_CALLBACK_WRAPPERS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_ShootyArena_Source_ShootyArena_ActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTYARENA_API UClass* StaticClass<class UActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShootyArena_Source_ShootyArena_ActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
