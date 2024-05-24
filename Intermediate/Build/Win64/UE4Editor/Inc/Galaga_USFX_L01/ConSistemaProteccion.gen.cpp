// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConSistemaProteccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConSistemaProteccion() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConSistemaProteccion_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConSistemaProteccion();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void AConSistemaProteccion::StaticRegisterNativesAConSistemaProteccion()
	{
	}
	UClass* Z_Construct_UClass_AConSistemaProteccion_NoRegister()
	{
		return AConSistemaProteccion::StaticClass();
	}
	struct Z_Construct_UClass_AConSistemaProteccion_Statics
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
	UObject* (*const Z_Construct_UClass_AConSistemaProteccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConSistemaProteccion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ConSistemaProteccion.h" },
		{ "ModuleRelativePath", "ConSistemaProteccion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConSistemaProteccion_Statics::NewProp_naveJugador_MetaData[] = {
		{ "ModuleRelativePath", "ConSistemaProteccion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConSistemaProteccion_Statics::NewProp_naveJugador = { "naveJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConSistemaProteccion, naveJugador), Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConSistemaProteccion_Statics::NewProp_naveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConSistemaProteccion_Statics::NewProp_naveJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConSistemaProteccion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConSistemaProteccion_Statics::NewProp_naveJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConSistemaProteccion_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AConSistemaProteccion, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConSistemaProteccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConSistemaProteccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConSistemaProteccion_Statics::ClassParams = {
		&AConSistemaProteccion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConSistemaProteccion_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConSistemaProteccion_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConSistemaProteccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConSistemaProteccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConSistemaProteccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConSistemaProteccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConSistemaProteccion, 446400542);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConSistemaProteccion>()
	{
		return AConSistemaProteccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConSistemaProteccion(Z_Construct_UClass_AConSistemaProteccion, &AConSistemaProteccion::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConSistemaProteccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConSistemaProteccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
