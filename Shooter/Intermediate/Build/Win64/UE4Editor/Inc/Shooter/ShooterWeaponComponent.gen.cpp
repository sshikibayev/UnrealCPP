// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/ShooterWeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UShooterWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterBaseWeapon_NoRegister();
// End Cross Module References
	void UShooterWeaponComponent::StaticRegisterNativesUShooterWeaponComponent()
	{
	}
	UClass* Z_Construct_UClass_UShooterWeaponComponent_NoRegister()
	{
		return UShooterWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShooterWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPointName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/ShooterWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ShooterWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/ShooterWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterWeaponComponent, WeaponClass), Z_Construct_UClass_AShooterBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/ShooterWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponAttachPointName = { "WeaponAttachPointName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterWeaponComponent, WeaponAttachPointName), METADATA_PARAMS(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ShooterWeaponComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterWeaponComponent, CurrentWeapon), Z_Construct_UClass_AShooterBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterWeaponComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_WeaponAttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterWeaponComponent_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterWeaponComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterWeaponComponent_Statics::ClassParams = {
		&UShooterWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterWeaponComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterWeaponComponent, 2571913952);
	template<> SHOOTER_API UClass* StaticClass<UShooterWeaponComponent>()
	{
		return UShooterWeaponComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterWeaponComponent(Z_Construct_UClass_UShooterWeaponComponent, &UShooterWeaponComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("UShooterWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
