// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/ShooterIceDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterIceDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UShooterIceDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterIceDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UShooterIceDamageType::StaticRegisterNativesUShooterIceDamageType()
	{
	}
	UClass* Z_Construct_UClass_UShooterIceDamageType_NoRegister()
	{
		return UShooterIceDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UShooterIceDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterIceDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterIceDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/ShooterIceDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/ShooterIceDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterIceDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterIceDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterIceDamageType_Statics::ClassParams = {
		&UShooterIceDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterIceDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterIceDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterIceDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterIceDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterIceDamageType, 4136206705);
	template<> SHOOTER_API UClass* StaticClass<UShooterIceDamageType>()
	{
		return UShooterIceDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterIceDamageType(Z_Construct_UClass_UShooterIceDamageType, &UShooterIceDamageType::StaticClass, TEXT("/Script/Shooter"), TEXT("UShooterIceDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterIceDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
