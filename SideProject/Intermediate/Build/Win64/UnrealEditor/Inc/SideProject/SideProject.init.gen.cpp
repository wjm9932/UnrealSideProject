// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SideProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SideProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SideProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SideProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFD32AEA7,
				0x4F091076,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SideProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SideProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SideProject(Z_Construct_UPackage__Script_SideProject, TEXT("/Script/SideProject"), Z_Registration_Info_UPackage__Script_SideProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD32AEA7, 0x4F091076));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
