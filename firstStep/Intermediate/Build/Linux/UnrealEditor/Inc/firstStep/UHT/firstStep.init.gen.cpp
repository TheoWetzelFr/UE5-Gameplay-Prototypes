// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstStep_init() {}
	FIRSTSTEP_API UFunction* Z_Construct_UDelegateFunction_firstStep_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_firstStep;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_firstStep()
	{
		if (!Z_Registration_Info_UPackage__Script_firstStep.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_firstStep_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/firstStep",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2A8EB80,
				0xB942055C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_firstStep.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_firstStep.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_firstStep(Z_Construct_UPackage__Script_firstStep, TEXT("/Script/firstStep"), Z_Registration_Info_UPackage__Script_firstStep, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2A8EB80, 0xB942055C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
