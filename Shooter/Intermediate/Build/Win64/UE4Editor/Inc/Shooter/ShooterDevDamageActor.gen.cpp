// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/ShooterDevDamageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterDevDamageActor() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AShooterDevDamageActor_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterDevDamageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void AShooterDevDamageActor::StaticRegisterNativesAShooterDevDamageActor()
	{
	}
	UClass* Z_Construct_UClass_AShooterDevDamageActor_NoRegister()
	{
		return AShooterDevDamageActor::StaticClass();
	}
	struct Z_Construct_UClass_AShooterDevDamageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterDevDamageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dev/ShooterDevDamageActor.h" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterDevDamageActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterDevDamageActor, Radius), METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterDevDamageActor, Damage), METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
	void Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((AShooterDevDamageActor*)Obj)->DoFullDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterDevDamageActor), &Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterDevDamageActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "ShooterDevDamageActor" },
		{ "Comment", "//Damage types\n" },
		{ "ModuleRelativePath", "Public/Dev/ShooterDevDamageActor.h" },
		{ "ToolTip", "Damage types" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterDevDamageActor, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterDevDamageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DoFullDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_SphereColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterDevDamageActor_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterDevDamageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterDevDamageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterDevDamageActor_Statics::ClassParams = {
		&AShooterDevDamageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterDevDamageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterDevDamageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDevDamageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterDevDamageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterDevDamageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterDevDamageActor, 3528726560);
	template<> SHOOTER_API UClass* StaticClass<AShooterDevDamageActor>()
	{
		return AShooterDevDamageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterDevDamageActor(Z_Construct_UClass_AShooterDevDamageActor, &AShooterDevDamageActor::StaticClass, TEXT("/Script/Shooter"), TEXT("AShooterDevDamageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterDevDamageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
