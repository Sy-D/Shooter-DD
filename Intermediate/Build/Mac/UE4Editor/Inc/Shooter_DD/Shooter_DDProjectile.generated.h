// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTER_DD_Shooter_DDProjectile_generated_h
#error "Shooter_DDProjectile.generated.h already included, missing '#pragma once' in Shooter_DDProjectile.h"
#endif
#define SHOOTER_DD_Shooter_DDProjectile_generated_h

#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAShooter_DDProjectile(); \
	friend SHOOTER_DD_API class UClass* Z_Construct_UClass_AShooter_DDProjectile(); \
	public: \
	DECLARE_CLASS(AShooter_DDProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter_DD"), NO_API) \
	DECLARE_SERIALIZER(AShooter_DDProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAShooter_DDProjectile(); \
	friend SHOOTER_DD_API class UClass* Z_Construct_UClass_AShooter_DDProjectile(); \
	public: \
	DECLARE_CLASS(AShooter_DDProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter_DD"), NO_API) \
	DECLARE_SERIALIZER(AShooter_DDProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooter_DDProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooter_DDProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter_DDProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter_DDProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter_DDProjectile(AShooter_DDProjectile&&); \
	NO_API AShooter_DDProjectile(const AShooter_DDProjectile&); \
public:


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter_DDProjectile(AShooter_DDProjectile&&); \
	NO_API AShooter_DDProjectile(const AShooter_DDProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter_DDProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter_DDProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter_DDProjectile)


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShooter_DDProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShooter_DDProjectile, ProjectileMovement); }


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_6_PROLOG
#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_RPC_WRAPPERS \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_INCLASS \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_INCLASS_NO_PURE_DECLS \
	Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_DD_Source_Shooter_DD_Shooter_DDProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
