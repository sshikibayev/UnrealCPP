// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/PlayerHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHealthComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UPlayerHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHealthComponent::execOnTakeAnyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_UDamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeAnyDamage(Z_Param_DamageActor,Z_Param_Damage,Z_Param_UDamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHealthComponent::execisDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isDead();
		P_NATIVE_END;
	}
	void UPlayerHealthComponent::StaticRegisterNativesUPlayerHealthComponent()
	{
		UClass* Class = UPlayerHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isDead", &UPlayerHealthComponent::execisDead },
			{ "OnTakeAnyDamage", &UPlayerHealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics
	{
		struct PlayerHealthComponent_eventisDead_Parms
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
	void Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHealthComponent_eventisDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHealthComponent_eventisDead_Parms), &Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHealthComponent, nullptr, "isDead", nullptr, nullptr, sizeof(PlayerHealthComponent_eventisDead_Parms), Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHealthComponent_isDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerHealthComponent_isDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics
	{
		struct PlayerHealthComponent_eventOnTakeAnyDamage_Parms
		{
			AActor* DamageActor;
			float Damage;
			const UDamageType* UDamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UDamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageActor = { "DamageActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHealthComponent_eventOnTakeAnyDamage_Parms, DamageActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHealthComponent_eventOnTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_UDamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_UDamageType = { "UDamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHealthComponent_eventOnTakeAnyDamage_Parms, UDamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_UDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_UDamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHealthComponent_eventOnTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHealthComponent_eventOnTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_UDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHealthComponent, nullptr, "OnTakeAnyDamage", nullptr, nullptr, sizeof(PlayerHealthComponent_eventOnTakeAnyDamage_Parms), Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister()
	{
		return UPlayerHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoHeal_MetaData[];
#endif
		static void NewProp_AutoHeal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealUpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHealthComponent_isDead, "isDead" }, // 1786046678
		{ &Z_Construct_UFunction_UPlayerHealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 2507551925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PlayerHealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal_MetaData[] = {
		{ "Category", "Heal" },
		{ "Comment", "//Heal properties;\n" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
		{ "ToolTip", "Heal properties;" },
	};
#endif
	void Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal_SetBit(void* Obj)
	{
		((UPlayerHealthComponent*)Obj)->AutoHeal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal = { "AutoHeal", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerHealthComponent), &Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealUpdateTime_MetaData[] = {
		{ "Category", "Heal" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "AutoHeal" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealUpdateTime = { "HealUpdateTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, HealUpdateTime), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealUpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealDelay_MetaData[] = {
		{ "Category", "Heal" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "AutoHeal" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealDelay = { "HealDelay", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, HealDelay), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealModifier_MetaData[] = {
		{ "Category", "Heal" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "AutoHeal" },
		{ "ModuleRelativePath", "Public/Components/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealModifier = { "HealModifier", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, HealModifier), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_AutoHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealUpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_HealModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHealthComponent_Statics::ClassParams = {
		&UPlayerHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHealthComponent, 2748431079);
	template<> SHOOTER_API UClass* StaticClass<UPlayerHealthComponent>()
	{
		return UPlayerHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHealthComponent(Z_Construct_UClass_UPlayerHealthComponent, &UPlayerHealthComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("UPlayerHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
