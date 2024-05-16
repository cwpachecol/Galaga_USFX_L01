// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/RadarEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadarEnemigo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARadarEnemigo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARadarEnemigo();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APublisher();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ARadarEnemigo::StaticRegisterNativesARadarEnemigo()
	{
	}
	UClass* Z_Construct_UClass_ARadarEnemigo_NoRegister()
	{
		return ARadarEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_ARadarEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadarEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublisher,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadarEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RadarEnemigo.h" },
		{ "ModuleRelativePath", "RadarEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadarEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadarEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadarEnemigo_Statics::ClassParams = {
		&ARadarEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadarEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadarEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadarEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadarEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadarEnemigo, 1031419462);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ARadarEnemigo>()
	{
		return ARadarEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadarEnemigo(Z_Construct_UClass_ARadarEnemigo, &ARadarEnemigo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ARadarEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadarEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
