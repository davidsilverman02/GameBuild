// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootyArena/StatisticComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatisticComponent() {}
// Cross Module References
	SHOOTYARENA_API UClass* Z_Construct_UClass_UStatisticComponent_NoRegister();
	SHOOTYARENA_API UClass* Z_Construct_UClass_UStatisticComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ShootyArena();
// End Cross Module References
	DEFINE_FUNCTION(UStatisticComponent::execAddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Doints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_Doints);
		P_NATIVE_END;
	}
	void UStatisticComponent::StaticRegisterNativesUStatisticComponent()
	{
		UClass* Class = UStatisticComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &UStatisticComponent::execAddPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics
	{
		struct StatisticComponent_eventAddPoints_Parms
		{
			int32 Doints;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Doints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::NewProp_Doints = { "Doints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatisticComponent_eventAddPoints_Parms, Doints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::NewProp_Doints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StatisticComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatisticComponent, nullptr, "AddPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::StatisticComponent_eventAddPoints_Parms), Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatisticComponent_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatisticComponent_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatisticComponent);
	UClass* Z_Construct_UClass_UStatisticComponent_NoRegister()
	{
		return UStatisticComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatisticComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatisticComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootyArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatisticComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatisticComponent_AddPoints, "AddPoints" }, // 2175881006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatisticComponent.h" },
		{ "ModuleRelativePath", "StatisticComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticComponent_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "StatisticComponent" },
		{ "ModuleRelativePath", "StatisticComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStatisticComponent_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticComponent, Points), METADATA_PARAMS(Z_Construct_UClass_UStatisticComponent_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticComponent_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatisticComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticComponent_Statics::NewProp_Points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatisticComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatisticComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatisticComponent_Statics::ClassParams = {
		&UStatisticComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatisticComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatisticComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatisticComponent()
	{
		if (!Z_Registration_Info_UClass_UStatisticComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatisticComponent.OuterSingleton, Z_Construct_UClass_UStatisticComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatisticComponent.OuterSingleton;
	}
	template<> SHOOTYARENA_API UClass* StaticClass<UStatisticComponent>()
	{
		return UStatisticComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatisticComponent);
	struct Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_StatisticComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_StatisticComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatisticComponent, UStatisticComponent::StaticClass, TEXT("UStatisticComponent"), &Z_Registration_Info_UClass_UStatisticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatisticComponent), 1489907100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_StatisticComponent_h_3147381477(TEXT("/Script/ShootyArena"),
		Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_StatisticComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootyArena_Source_ShootyArena_StatisticComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
