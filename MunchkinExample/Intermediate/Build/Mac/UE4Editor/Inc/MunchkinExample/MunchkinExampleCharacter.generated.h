// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MUNCHKINEXAMPLE_MunchkinExampleCharacter_generated_h
#error "MunchkinExampleCharacter.generated.h already included, missing '#pragma once' in MunchkinExampleCharacter.h"
#endif
#define MUNCHKINEXAMPLE_MunchkinExampleCharacter_generated_h

#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_RPC_WRAPPERS
#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMunchkinExampleCharacter(); \
	friend MUNCHKINEXAMPLE_API class UClass* Z_Construct_UClass_AMunchkinExampleCharacter(); \
public: \
	DECLARE_CLASS(AMunchkinExampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MunchkinExample"), NO_API) \
	DECLARE_SERIALIZER(AMunchkinExampleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMunchkinExampleCharacter(); \
	friend MUNCHKINEXAMPLE_API class UClass* Z_Construct_UClass_AMunchkinExampleCharacter(); \
public: \
	DECLARE_CLASS(AMunchkinExampleCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MunchkinExample"), NO_API) \
	DECLARE_SERIALIZER(AMunchkinExampleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMunchkinExampleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMunchkinExampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMunchkinExampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMunchkinExampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMunchkinExampleCharacter(AMunchkinExampleCharacter&&); \
	NO_API AMunchkinExampleCharacter(const AMunchkinExampleCharacter&); \
public:


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMunchkinExampleCharacter(AMunchkinExampleCharacter&&); \
	NO_API AMunchkinExampleCharacter(const AMunchkinExampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMunchkinExampleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMunchkinExampleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMunchkinExampleCharacter)


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMunchkinExampleCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMunchkinExampleCharacter, FollowCamera); }


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_9_PROLOG
#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_RPC_WRAPPERS \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_INCLASS \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MunchkinExample_Source_MunchkinExample_MunchkinExampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
