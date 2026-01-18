// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "firstStepGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodefirstStepGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepGameMode();
FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_firstStep();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AfirstStepGameMode *******************************************************
void AfirstStepGameMode::StaticRegisterNativesAfirstStepGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AfirstStepGameMode;
UClass* AfirstStepGameMode::GetPrivateStaticClass()
{
	using TClass = AfirstStepGameMode;
	if (!Z_Registration_Info_UClass_AfirstStepGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("firstStepGameMode"),
			Z_Registration_Info_UClass_AfirstStepGameMode.InnerSingleton,
			StaticRegisterNativesAfirstStepGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AfirstStepGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AfirstStepGameMode_NoRegister()
{
	return AfirstStepGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AfirstStepGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "firstStepGameMode.h" },
		{ "ModuleRelativePath", "firstStepGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfirstStepGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AfirstStepGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_firstStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AfirstStepGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AfirstStepGameMode_Statics::ClassParams = {
	&AfirstStepGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AfirstStepGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AfirstStepGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AfirstStepGameMode()
{
	if (!Z_Registration_Info_UClass_AfirstStepGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AfirstStepGameMode.OuterSingleton, Z_Construct_UClass_AfirstStepGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AfirstStepGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AfirstStepGameMode);
AfirstStepGameMode::~AfirstStepGameMode() {}
// ********** End Class AfirstStepGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepGameMode_h__Script_firstStep_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AfirstStepGameMode, AfirstStepGameMode::StaticClass, TEXT("AfirstStepGameMode"), &Z_Registration_Info_UClass_AfirstStepGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AfirstStepGameMode), 1750126964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepGameMode_h__Script_firstStep_3318157851(TEXT("/Script/firstStep"),
	Z_CompiledInDeferFile_FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepGameMode_h__Script_firstStep_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepGameMode_h__Script_firstStep_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
