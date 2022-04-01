// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTER_ShooterBaseCharacter_generated_h
#error "ShooterBaseCharacter.generated.h already included, missing '#pragma once' in ShooterBaseCharacter.h"
#endif
#define SHOOTER_ShooterBaseCharacter_generated_h

#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection);


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection);


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterBaseCharacter(); \
	friend struct Z_Construct_UClass_AShooterBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterBaseCharacter)


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAShooterBaseCharacter(); \
	friend struct Z_Construct_UClass_AShooterBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterBaseCharacter)


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterBaseCharacter(AShooterBaseCharacter&&); \
	NO_API AShooterBaseCharacter(const AShooterBaseCharacter&); \
public:


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterBaseCharacter(AShooterBaseCharacter&&); \
	NO_API AShooterBaseCharacter(const AShooterBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterBaseCharacter)


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthTextComponent() { return STRUCT_OFFSET(AShooterBaseCharacter, HealthTextComponent); } \
	FORCEINLINE static uint32 __PPO__PlayerHealthComponent() { return STRUCT_OFFSET(AShooterBaseCharacter, PlayerHealthComponent); } \
	FORCEINLINE static uint32 __PPO__DeathAnimMontage() { return STRUCT_OFFSET(AShooterBaseCharacter, DeathAnimMontage); } \
	FORCEINLINE static uint32 __PPO__LifeSpanOnDeath() { return STRUCT_OFFSET(AShooterBaseCharacter, LifeSpanOnDeath); } \
	FORCEINLINE static uint32 __PPO__LandedDamageVelocity() { return STRUCT_OFFSET(AShooterBaseCharacter, LandedDamageVelocity); } \
	FORCEINLINE static uint32 __PPO__LandedDamage() { return STRUCT_OFFSET(AShooterBaseCharacter, LandedDamage); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(AShooterBaseCharacter, WeaponClass); }


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_20_PROLOG
#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_INCLASS \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Player_ShooterBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
