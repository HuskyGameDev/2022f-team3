// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAPHAEL_RaphaelCharacter_generated_h
#error "RaphaelCharacter.generated.h already included, missing '#pragma once' in RaphaelCharacter.h"
#endif
#define RAPHAEL_RaphaelCharacter_generated_h

#define Raphael_Source_Raphael_RaphaelCharacter_h_22_SPARSE_DATA
#define Raphael_Source_Raphael_RaphaelCharacter_h_22_RPC_WRAPPERS
#define Raphael_Source_Raphael_RaphaelCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Raphael_Source_Raphael_RaphaelCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARaphaelCharacter(); \
	friend struct Z_Construct_UClass_ARaphaelCharacter_Statics; \
public: \
	DECLARE_CLASS(ARaphaelCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Raphael"), NO_API) \
	DECLARE_SERIALIZER(ARaphaelCharacter)


#define Raphael_Source_Raphael_RaphaelCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARaphaelCharacter(); \
	friend struct Z_Construct_UClass_ARaphaelCharacter_Statics; \
public: \
	DECLARE_CLASS(ARaphaelCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Raphael"), NO_API) \
	DECLARE_SERIALIZER(ARaphaelCharacter)


#define Raphael_Source_Raphael_RaphaelCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARaphaelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARaphaelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaphaelCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaphaelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaphaelCharacter(ARaphaelCharacter&&); \
	NO_API ARaphaelCharacter(const ARaphaelCharacter&); \
public:


#define Raphael_Source_Raphael_RaphaelCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARaphaelCharacter(ARaphaelCharacter&&); \
	NO_API ARaphaelCharacter(const ARaphaelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARaphaelCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARaphaelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARaphaelCharacter)


#define Raphael_Source_Raphael_RaphaelCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ARaphaelCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARaphaelCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ARaphaelCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ARaphaelCharacter, IdleAnimation); }


#define Raphael_Source_Raphael_RaphaelCharacter_h_19_PROLOG
#define Raphael_Source_Raphael_RaphaelCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_SPARSE_DATA \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_RPC_WRAPPERS \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_INCLASS \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Raphael_Source_Raphael_RaphaelCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_SPARSE_DATA \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Raphael_Source_Raphael_RaphaelCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAPHAEL_API UClass* StaticClass<class ARaphaelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Raphael_Source_Raphael_RaphaelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
