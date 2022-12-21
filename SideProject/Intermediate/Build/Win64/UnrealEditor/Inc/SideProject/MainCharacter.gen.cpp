// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideProject/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	SIDEPROJECT_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_AMainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SideProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_UFireComponent_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainCharacter::execOnReloadMonatageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReloadMonatageEnded(Z_Param_montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReloadMonatageEnded", &AMainCharacter::execOnReloadMonatageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics
	{
		struct MainCharacter_eventOnReloadMonatageEnded_Parms
		{
			UAnimMontage* montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainCharacter_eventOnReloadMonatageEnded_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((MainCharacter_eventOnReloadMonatageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MainCharacter_eventOnReloadMonatageEnded_Parms), &Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "OnReloadMonatageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::MainCharacter_eventOnReloadMonatageEnded_Parms), Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isFire_MetaData[];
#endif
		static void NewProp_isFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOnAim_MetaData[];
#endif
		static void NewProp_isOnAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isRunning_MetaData[];
#endif
		static void NewProp_isRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isReloading_MetaData[];
#endif
		static void NewProp_isReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isReloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_followCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_followCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verticalValueForAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_verticalValueForAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_horizontalValueForAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_horizontalValueForAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fireComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_myInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SideProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_OnReloadMonatageEnded, "OnReloadMonatageEnded" }, // 4015945503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire_SetBit(void* Obj)
	{
		((AMainCharacter*)Obj)->isFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire = { "isFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim_SetBit(void* Obj)
	{
		((AMainCharacter*)Obj)->isOnAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim = { "isOnAim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning_SetBit(void* Obj)
	{
		((AMainCharacter*)Obj)->isRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading_SetBit(void* Obj)
	{
		((AMainCharacter*)Obj)->isReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading = { "isReloading", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_followCamera_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_followCamera = { "followCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, followCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_followCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_followCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_verticalValueForAnimation_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_verticalValueForAnimation = { "verticalValueForAnimation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, verticalValueForAnimation), METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_verticalValueForAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_verticalValueForAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_horizontalValueForAnimation_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_horizontalValueForAnimation = { "horizontalValueForAnimation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, horizontalValueForAnimation), METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_horizontalValueForAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_horizontalValueForAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_fireComponent_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_fireComponent = { "fireComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, fireComponent), Z_Construct_UClass_UFireComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_fireComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_fireComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp_myInstance_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_myInstance = { "myInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, myInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp_myInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp_myInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_isFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_isOnAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_isRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_isReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_springArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_followCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_verticalValueForAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_horizontalValueForAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_fireComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_myInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> SIDEPROJECT_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	struct Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_MainCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 437503092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_MainCharacter_h_559931758(TEXT("/Script/SideProject"),
		Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_Source_SideProject_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
