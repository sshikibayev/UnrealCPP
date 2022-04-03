// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/ShooterBaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBaseWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AShooterBaseWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterBaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AShooterBaseWeapon::StaticRegisterNativesAShooterBaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_AShooterBaseWeapon_NoRegister()
	{
		return AShooterBaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterBaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/ShooterBaseWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/ShooterBaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/ShooterBaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "ShooterBaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/ShooterBaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData[] = {
		{ "Category", "ShooterBaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/ShooterBaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_TraceMaxDistance = { "TraceMaxDistance", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseWeapon, TraceMaxDistance), METADATA_PARAMS(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "ShooterBaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/ShooterBaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_DamageAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterBaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_MuzzleSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_TraceMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseWeapon_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterBaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterBaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterBaseWeapon_Statics::ClassParams = {
		&AShooterBaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterBaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterBaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterBaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterBaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterBaseWeapon, 2455213730);
	template<> SHOOTER_API UClass* StaticClass<AShooterBaseWeapon>()
	{
		return AShooterBaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterBaseWeapon(Z_Construct_UClass_AShooterBaseWeapon, &AShooterBaseWeapon::StaticClass, TEXT("/Script/Shooter"), TEXT("AShooterBaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
