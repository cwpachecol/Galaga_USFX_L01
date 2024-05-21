// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_USFX_L01_Subscriptor_generated_h
#error "Subscriptor.generated.h already included, missing '#pragma once' in Subscriptor.h"
#endif
#define GALAGA_USFX_L01_Subscriptor_generated_h

#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_SPARSE_DATA
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_RPC_WRAPPERS
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_L01_API USubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_L01_API, USubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_L01_API USubscriptor(USubscriptor&&); \
	GALAGA_USFX_L01_API USubscriptor(const USubscriptor&); \
public:


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_USFX_L01_API USubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_USFX_L01_API USubscriptor(USubscriptor&&); \
	GALAGA_USFX_L01_API USubscriptor(const USubscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_USFX_L01_API, USubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptor)


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubscriptor(); \
	friend struct Z_Construct_UClass_USubscriptor_Statics; \
public: \
	DECLARE_CLASS(USubscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L01"), GALAGA_USFX_L01_API) \
	DECLARE_SERIALIZER(USubscriptor)


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubscriptor() {} \
public: \
	typedef USubscriptor UClassType; \
	typedef ISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubscriptor() {} \
public: \
	typedef USubscriptor UClassType; \
	typedef ISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_10_PROLOG
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_SPARSE_DATA \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_RPC_WRAPPERS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_SPARSE_DATA \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L01_API UClass* StaticClass<class USubscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_L01_Source_Galaga_USFX_L01_Subscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
