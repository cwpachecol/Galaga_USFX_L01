// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConArmamentoAdicional.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConArmamentoAdicional() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConArmamentoAdicional_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConArmamentoAdicional();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void AConArmamentoAdicional::StaticRegisterNativesAConArmamentoAdicional()
	{
	}
	UClass* Z_Construct_UClass_AConArmamentoAdicional_NoRegister()
	{
		return AConArmamentoAdicional::StaticClass();
	}
	struct Z_Construct_UClass_AConArmamentoAdicional_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_naveJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_naveJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConArmamentoAdicional_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConArmamentoAdicional_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ConArmamentoAdicional.h" },
		{ "ModuleRelativePath", "ConArmamentoAdicional.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConArmamentoAdicional_Statics::NewProp_naveJugador_MetaData[] = {
		{ "ModuleRelativePath", "ConArmamentoAdicional.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConArmamentoAdicional_Statics::NewProp_naveJugador = { "naveJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConArmamentoAdicional, naveJugador), Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConArmamentoAdicional_Statics::NewProp_naveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConArmamentoAdicional_Statics::NewProp_naveJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConArmamentoAdicional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConArmamentoAdicional_Statics::NewProp_naveJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConArmamentoAdicional_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AConArmamentoAdicional, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConArmamentoAdicional_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConArmamentoAdicional>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConArmamentoAdicional_Statics::ClassParams = {
		&AConArmamentoAdicional::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConArmamentoAdicional_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConArmamentoAdicional_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConArmamentoAdicional_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConArmamentoAdicional_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConArmamentoAdicional()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConArmamentoAdicional_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConArmamentoAdicional, 1831361025);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConArmamentoAdicional>()
	{
		return AConArmamentoAdicional::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConArmamentoAdicional(Z_Construct_UClass_AConArmamentoAdicional, &AConArmamentoAdicional::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConArmamentoAdicional"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConArmamentoAdicional);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
