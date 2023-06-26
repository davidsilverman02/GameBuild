// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootyArena_init() {}
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature();
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnPickUp__DelegateSignature();
	SHOOTYARENA_API UFunction* Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShootyArena;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShootyArena()
	{
		if (!Z_Registration_Info_UPackage__Script_ShootyArena.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootyArena_OnActionStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootyArena_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootyArena_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShootyArena",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0CFA0363,
				0x22D9F5CA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShootyArena.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShootyArena.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShootyArena(Z_Construct_UPackage__Script_ShootyArena, TEXT("/Script/ShootyArena"), Z_Registration_Info_UPackage__Script_ShootyArena, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0CFA0363, 0x22D9F5CA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
