// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eternal_chase/eternal_chaseWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeternal_chaseWheelRear() {}
// Cross Module References
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Ueternal_chaseWheelRear_NoRegister();
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Ueternal_chaseWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_eternal_chase();
// End Cross Module References
	void Ueternal_chaseWheelRear::StaticRegisterNativesUeternal_chaseWheelRear()
	{
	}
	UClass* Z_Construct_UClass_Ueternal_chaseWheelRear_NoRegister()
	{
		return Ueternal_chaseWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_Ueternal_chaseWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_eternal_chase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "eternal_chaseWheelRear.h" },
		{ "ModuleRelativePath", "eternal_chaseWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ueternal_chaseWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::ClassParams = {
		&Ueternal_chaseWheelRear::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ueternal_chaseWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ueternal_chaseWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ueternal_chaseWheelRear, 2472247771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ueternal_chaseWheelRear(Z_Construct_UClass_Ueternal_chaseWheelRear, &Ueternal_chaseWheelRear::StaticClass, TEXT("/Script/eternal_chase"), TEXT("Ueternal_chaseWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ueternal_chaseWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
