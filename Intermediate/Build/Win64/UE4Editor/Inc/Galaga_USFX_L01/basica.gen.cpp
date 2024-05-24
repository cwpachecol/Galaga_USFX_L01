// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/basica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebasica() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_Abasica_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_Abasica();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void Abasica::StaticRegisterNativesAbasica()
	{
	}
	UClass* Z_Construct_UClass_Abasica_NoRegister()
	{
		return Abasica::StaticClass();
	}
	struct Z_Construct_UClass_Abasica_Statics
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
	UObject* (*const Z_Construct_UClass_Abasica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abasica_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "basica.h" },
		{ "ModuleRelativePath", "basica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abasica_Statics::NewProp_naveJugador_MetaData[] = {
		{ "ModuleRelativePath", "basica.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abasica_Statics::NewProp_naveJugador = { "naveJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abasica, naveJugador), Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Abasica_Statics::NewProp_naveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Abasica_Statics::NewProp_naveJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abasica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abasica_Statics::NewProp_naveJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_Abasica_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(Abasica, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Abasica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abasica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Abasica_Statics::ClassParams = {
		&Abasica::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Abasica_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Abasica_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Abasica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Abasica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Abasica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Abasica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Abasica, 3863966672);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<Abasica>()
	{
		return Abasica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Abasica(Z_Construct_UClass_Abasica, &Abasica::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("Abasica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Abasica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
