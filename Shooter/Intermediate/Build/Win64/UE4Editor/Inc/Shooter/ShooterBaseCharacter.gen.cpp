// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/ShooterBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBaseCharacter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AShooterBaseCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(AShooterBaseCharacter::execOnGroundLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGroundLanded(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterBaseCharacter::execGetMovementDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterBaseCharacter::execFIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FIsSprinting();
		P_NATIVE_END;
	}
	void AShooterBaseCharacter::StaticRegisterNativesAShooterBaseCharacter()
	{
		UClass* Class = AShooterBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FIsSprinting", &AShooterBaseCharacter::execFIsSprinting },
			{ "GetMovementDirection", &AShooterBaseCharacter::execGetMovementDirection },
			{ "OnGroundLanded", &AShooterBaseCharacter::execOnGroundLanded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics
	{
		struct ShooterBaseCharacter_eventFIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterBaseCharacter_eventFIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShooterBaseCharacter_eventFIsSprinting_Parms), &Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movements" },
		{ "Comment", "//Movement vars;\n" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
		{ "ToolTip", "Movement vars;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterBaseCharacter, nullptr, "FIsSprinting", nullptr, nullptr, sizeof(ShooterBaseCharacter_eventFIsSprinting_Parms), Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics
	{
		struct ShooterBaseCharacter_eventGetMovementDirection_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterBaseCharacter_eventGetMovementDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterBaseCharacter, nullptr, "GetMovementDirection", nullptr, nullptr, sizeof(ShooterBaseCharacter_eventGetMovementDirection_Parms), Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics
	{
		struct ShooterBaseCharacter_eventOnGroundLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShooterBaseCharacter_eventOnGroundLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Using for landed damage\n" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
		{ "ToolTip", "Using for landed damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterBaseCharacter, nullptr, "OnGroundLanded", nullptr, nullptr, sizeof(ShooterBaseCharacter_eventOnGroundLanded_Parms), Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterBaseCharacter_NoRegister()
	{
		return AShooterBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthTextComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthTextComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanOnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandedDamageVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandedDamageVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandedDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandedDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterBaseCharacter_FIsSprinting, "FIsSprinting" }, // 481874629
		{ &Z_Construct_UFunction_AShooterBaseCharacter_GetMovementDirection, "GetMovementDirection" }, // 2598557145
		{ &Z_Construct_UFunction_AShooterBaseCharacter_OnGroundLanded, "OnGroundLanded" }, // 864564299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/ShooterBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_HealthTextComponent = { "HealthTextComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, HealthTextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_PlayerHealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_PlayerHealthComponent = { "PlayerHealthComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, PlayerHealthComponent), Z_Construct_UClass_UPlayerHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_PlayerHealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_PlayerHealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_DeathAnimMontage = { "DeathAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, DeathAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LifeSpanOnDeath = { "LifeSpanOnDeath", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, LifeSpanOnDeath), METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamageVelocity = { "LandedDamageVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, LandedDamageVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/ShooterBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamage = { "LandedDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBaseCharacter, LandedDamage), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_HealthTextComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_PlayerHealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_DeathAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LifeSpanOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamageVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBaseCharacter_Statics::NewProp_LandedDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterBaseCharacter_Statics::ClassParams = {
		&AShooterBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterBaseCharacter, 899972033);
	template<> SHOOTER_API UClass* StaticClass<AShooterBaseCharacter>()
	{
		return AShooterBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterBaseCharacter(Z_Construct_UClass_AShooterBaseCharacter, &AShooterBaseCharacter::StaticClass, TEXT("/Script/Shooter"), TEXT("AShooterBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
