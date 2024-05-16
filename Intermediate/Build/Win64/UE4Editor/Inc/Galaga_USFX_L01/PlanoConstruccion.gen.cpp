// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PlanoConstruccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoConstruccion() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UPlanoConstruccion_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UPlanoConstruccion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UPlanoConstruccion::StaticRegisterNativesUPlanoConstruccion()
	{
	}
	UClass* Z_Construct_UClass_UPlanoConstruccion_NoRegister()
	{
		return UPlanoConstruccion::StaticClass();
	}
	struct Z_Construct_UClass_UPlanoConstruccion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanoConstruccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanoConstruccion_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanoConstruccion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanoConstruccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoConstruccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanoConstruccion_Statics::ClassParams = {
		&UPlanoConstruccion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanoConstruccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoConstruccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanoConstruccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanoConstruccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanoConstruccion, 1672537831);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UPlanoConstruccion>()
	{
		return UPlanoConstruccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanoConstruccion(Z_Construct_UClass_UPlanoConstruccion, &UPlanoConstruccion::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UPlanoConstruccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoConstruccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
