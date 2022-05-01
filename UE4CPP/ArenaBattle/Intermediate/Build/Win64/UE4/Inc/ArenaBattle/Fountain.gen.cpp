// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Fountain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AFountain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFountain::StaticRegisterNativesAFountain()
	{
	}
	UClass* Z_Construct_UClass_AFountain_NoRegister()
	{
		return AFountain::StaticClass();
	}
	UClass* Z_Construct_UClass_AFountain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Fountain.h" },
				{ "ModuleRelativePath", "Fountain.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Water = { UE4CodeGen_Private::EPropertyClass::Object, "Water", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AFountain, Water), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Water_MetaData, ARRAY_COUNT(NewProp_Water_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Fountain.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Object, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AFountain, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Water,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFountain>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFountain::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFountain, 3183999029);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFountain(Z_Construct_UClass_AFountain, &AFountain::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AFountain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFountain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
