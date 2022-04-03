// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShooterBaseWeapon_generated_h
#error "ShooterBaseWeapon.generated.h already included, missing '#pragma once' in ShooterBaseWeapon.h"
#endif
#define SHOOTER_ShooterBaseWeapon_generated_h

#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FTraceData>();

#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterBaseWeapon(); \
	friend struct Z_Construct_UClass_AShooterBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(AShooterBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterBaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAShooterBaseWeapon(); \
	friend struct Z_Construct_UClass_AShooterBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(AShooterBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterBaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterBaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterBaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterBaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterBaseWeapon(AShooterBaseWeapon&&); \
	NO_API AShooterBaseWeapon(const AShooterBaseWeapon&); \
public:


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterBaseWeapon(AShooterBaseWeapon&&); \
	NO_API AShooterBaseWeapon(const AShooterBaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterBaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterBaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AShooterBaseWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AShooterBaseWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TraceMaxDistance() { return STRUCT_OFFSET(AShooterBaseWeapon, TraceMaxDistance); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(AShooterBaseWeapon, DamageAmount); }


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_25_PROLOG
#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_INCLASS \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterBaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Weapon_ShooterBaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
