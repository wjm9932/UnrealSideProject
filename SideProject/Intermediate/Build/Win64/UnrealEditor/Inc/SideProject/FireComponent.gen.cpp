// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideProject/FireComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireComponent() {}
// Cross Module References
	SIDEPROJECT_API UClass* Z_Construct_UClass_UFireComponent_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_UFireComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SideProject();
// End Cross Module References
	void UFireComponent::StaticRegisterNativesUFireComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireComponent);
	UClass* Z_Construct_UClass_UFireComponent_NoRegister()
	{
		return UFireComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFireComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOnAim_MetaData[];
#endif
		static void NewProp_isOnAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnAim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SideProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FireComponent.h" },
		{ "ModuleRelativePath", "FireComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "FireComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim_SetBit(void* Obj)
	{
		((UFireComponent*)Obj)->isOnAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim = { "isOnAim", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFireComponent), &Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireComponent_Statics::NewProp_isOnAim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireComponent_Statics::ClassParams = {
		&UFireComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFireComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFireComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFireComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireComponent()
	{
		if (!Z_Registration_Info_UClass_UFireComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireComponent.OuterSingleton, Z_Construct_UClass_UFireComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFireComponent.OuterSingleton;
	}
	template<> SIDEPROJECT_API UClass* StaticClass<UFireComponent>()
	{
		return UFireComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireComponent);
	struct Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_FireComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_FireComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFireComponent, UFireComponent::StaticClass, TEXT("UFireComponent"), &Z_Registration_Info_UClass_UFireComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireComponent), 1024650370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_FireComponent_h_1354117620(TEXT("/Script/SideProject"),
		Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_FireComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_FireComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
