// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/ShooterCharacterMovementComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacterMovementComp() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UShooterCharacterMovementComp_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterCharacterMovementComp();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UShooterCharacterMovementComp::StaticRegisterNativesUShooterCharacterMovementComp()
	{
	}
	UClass* Z_Construct_UClass_UShooterCharacterMovementComp_NoRegister()
	{
		return UShooterCharacterMovementComp::StaticClass();
	}
	struct Z_Construct_UClass_UShooterCharacterMovementComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterCharacterMovementComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCharacterMovementComp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/ShooterCharacterMovementComp.h" },
		{ "ModuleRelativePath", "Public/Components/ShooterCharacterMovementComp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCharacterMovementComp_Statics::NewProp_SprintModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "1.2" },
		{ "ModuleRelativePath", "Public/Components/ShooterCharacterMovementComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterCharacterMovementComp_Statics::NewProp_SprintModifier = { "SprintModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterCharacterMovementComp, SprintModifier), METADATA_PARAMS(Z_Construct_UClass_UShooterCharacterMovementComp_Statics::NewProp_SprintModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCharacterMovementComp_Statics::NewProp_SprintModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterCharacterMovementComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterCharacterMovementComp_Statics::NewProp_SprintModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterCharacterMovementComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterCharacterMovementComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterCharacterMovementComp_Statics::ClassParams = {
		&UShooterCharacterMovementComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterCharacterMovementComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCharacterMovementComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterCharacterMovementComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCharacterMovementComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterCharacterMovementComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterCharacterMovementComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterCharacterMovementComp, 292007322);
	template<> SHOOTER_API UClass* StaticClass<UShooterCharacterMovementComp>()
	{
		return UShooterCharacterMovementComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterCharacterMovementComp(Z_Construct_UClass_UShooterCharacterMovementComp, &UShooterCharacterMovementComp::StaticClass, TEXT("/Script/Shooter"), TEXT("UShooterCharacterMovementComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterCharacterMovementComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
