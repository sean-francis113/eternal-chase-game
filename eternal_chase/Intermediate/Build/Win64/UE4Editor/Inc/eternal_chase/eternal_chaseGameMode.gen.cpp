// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eternal_chase/eternal_chaseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeternal_chaseGameMode() {}
// Cross Module References
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Aeternal_chaseGameMode_NoRegister();
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Aeternal_chaseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_eternal_chase();
// End Cross Module References
	void Aeternal_chaseGameMode::StaticRegisterNativesAeternal_chaseGameMode()
	{
	}
	UClass* Z_Construct_UClass_Aeternal_chaseGameMode_NoRegister()
	{
		return Aeternal_chaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aeternal_chaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aeternal_chaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_eternal_chase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aeternal_chaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "eternal_chaseGameMode.h" },
		{ "ModuleRelativePath", "eternal_chaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aeternal_chaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aeternal_chaseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aeternal_chaseGameMode_Statics::ClassParams = {
		&Aeternal_chaseGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Aeternal_chaseGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aeternal_chaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aeternal_chaseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aeternal_chaseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aeternal_chaseGameMode, 3490762678);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aeternal_chaseGameMode(Z_Construct_UClass_Aeternal_chaseGameMode, &Aeternal_chaseGameMode::StaticClass, TEXT("/Script/eternal_chase"), TEXT("Aeternal_chaseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aeternal_chaseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
