// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchVizCalgary/ArchVizCalgaryGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVizCalgaryGameModeBase() {}
// Cross Module References
	ARCHVIZCALGARY_API UClass* Z_Construct_UClass_AArchVizCalgaryGameModeBase_NoRegister();
	ARCHVIZCALGARY_API UClass* Z_Construct_UClass_AArchVizCalgaryGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArchVizCalgary();
// End Cross Module References
	void AArchVizCalgaryGameModeBase::StaticRegisterNativesAArchVizCalgaryGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArchVizCalgaryGameModeBase_NoRegister()
	{
		return AArchVizCalgaryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchVizCalgary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArchVizCalgaryGameModeBase.h" },
		{ "ModuleRelativePath", "ArchVizCalgaryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchVizCalgaryGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::ClassParams = {
		&AArchVizCalgaryGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArchVizCalgaryGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArchVizCalgaryGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArchVizCalgaryGameModeBase, 755576541);
	template<> ARCHVIZCALGARY_API UClass* StaticClass<AArchVizCalgaryGameModeBase>()
	{
		return AArchVizCalgaryGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArchVizCalgaryGameModeBase(Z_Construct_UClass_AArchVizCalgaryGameModeBase, &AArchVizCalgaryGameModeBase::StaticClass, TEXT("/Script/ArchVizCalgary"), TEXT("AArchVizCalgaryGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchVizCalgaryGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
