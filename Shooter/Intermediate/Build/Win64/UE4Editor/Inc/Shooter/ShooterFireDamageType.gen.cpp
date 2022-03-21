// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/ShooterFireDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterFireDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UShooterFireDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterFireDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UShooterFireDamageType::StaticRegisterNativesUShooterFireDamageType()
	{
	}
	UClass* Z_Construct_UClass_UShooterFireDamageType_NoRegister()
	{
		return UShooterFireDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UShooterFireDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterFireDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterFireDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/ShooterFireDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/ShooterFireDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterFireDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterFireDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterFireDamageType_Statics::ClassParams = {
		&UShooterFireDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterFireDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterFireDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterFireDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterFireDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterFireDamageType, 1641323918);
	template<> SHOOTER_API UClass* StaticClass<UShooterFireDamageType>()
	{
		return UShooterFireDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterFireDamageType(Z_Construct_UClass_UShooterFireDamageType, &UShooterFireDamageType::StaticClass, TEXT("/Script/Shooter"), TEXT("UShooterFireDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterFireDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
