// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "eternal_chase/eternal_chaseWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeternal_chaseWheelFront() {}
// Cross Module References
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Ueternal_chaseWheelFront_NoRegister();
	ETERNAL_CHASE_API UClass* Z_Construct_UClass_Ueternal_chaseWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_eternal_chase();
// End Cross Module References
	void Ueternal_chaseWheelFront::StaticRegisterNativesUeternal_chaseWheelFront()
	{
	}
	UClass* Z_Construct_UClass_Ueternal_chaseWheelFront_NoRegister()
	{
		return Ueternal_chaseWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_Ueternal_chaseWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_eternal_chase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "eternal_chaseWheelFront.h" },
		{ "ModuleRelativePath", "eternal_chaseWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ueternal_chaseWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::ClassParams = {
		&Ueternal_chaseWheelFront::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ueternal_chaseWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ueternal_chaseWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ueternal_chaseWheelFront, 2216177599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ueternal_chaseWheelFront(Z_Construct_UClass_Ueternal_chaseWheelFront, &Ueternal_chaseWheelFront::StaticClass, TEXT("/Script/eternal_chase"), TEXT("Ueternal_chaseWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ueternal_chaseWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
