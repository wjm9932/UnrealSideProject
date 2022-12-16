// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideProject/SideProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideProjectGameMode() {}
// Cross Module References
	SIDEPROJECT_API UClass* Z_Construct_UClass_ASideProjectGameMode_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_ASideProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideProject();
// End Cross Module References
	void ASideProjectGameMode::StaticRegisterNativesASideProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideProjectGameMode);
	UClass* Z_Construct_UClass_ASideProjectGameMode_NoRegister()
	{
		return ASideProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASideProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SideProjectGameMode.h" },
		{ "ModuleRelativePath", "SideProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideProjectGameMode_Statics::ClassParams = {
		&ASideProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASideProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_ASideProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideProjectGameMode.OuterSingleton, Z_Construct_UClass_ASideProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASideProjectGameMode.OuterSingleton;
	}
	template<> SIDEPROJECT_API UClass* StaticClass<ASideProjectGameMode>()
	{
		return ASideProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideProjectGameMode);
	struct Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_SideProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_SideProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASideProjectGameMode, ASideProjectGameMode::StaticClass, TEXT("ASideProjectGameMode"), &Z_Registration_Info_UClass_ASideProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideProjectGameMode), 3969521168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_SideProjectGameMode_h_3201774555(TEXT("/Script/SideProject"),
		Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_SideProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_SideProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
