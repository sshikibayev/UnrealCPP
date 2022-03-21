// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTER_PlayerHealthComponent_generated_h
#error "PlayerHealthComponent.generated.h already included, missing '#pragma once' in PlayerHealthComponent.h"
#endif
#define SHOOTER_PlayerHealthComponent_generated_h

#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execisDead);


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execisDead);


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHealthComponent(); \
	friend struct Z_Construct_UClass_UPlayerHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHealthComponent)


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHealthComponent(); \
	friend struct Z_Construct_UClass_UPlayerHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHealthComponent)


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHealthComponent(UPlayerHealthComponent&&); \
	NO_API UPlayerHealthComponent(const UPlayerHealthComponent&); \
public:


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHealthComponent(UPlayerHealthComponent&&); \
	NO_API UPlayerHealthComponent(const UPlayerHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerHealthComponent)


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UPlayerHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__AutoHeal() { return STRUCT_OFFSET(UPlayerHealthComponent, AutoHeal); } \
	FORCEINLINE static uint32 __PPO__HealUpdateTime() { return STRUCT_OFFSET(UPlayerHealthComponent, HealUpdateTime); } \
	FORCEINLINE static uint32 __PPO__HealDelay() { return STRUCT_OFFSET(UPlayerHealthComponent, HealDelay); } \
	FORCEINLINE static uint32 __PPO__HealModifier() { return STRUCT_OFFSET(UPlayerHealthComponent, HealModifier); }


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_12_PROLOG
#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_INCLASS \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UPlayerHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Components_PlayerHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
