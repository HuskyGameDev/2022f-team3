// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Raphael/RaphaelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaphaelGameMode() {}
// Cross Module References
	RAPHAEL_API UClass* Z_Construct_UClass_ARaphaelGameMode_NoRegister();
	RAPHAEL_API UClass* Z_Construct_UClass_ARaphaelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Raphael();
// End Cross Module References
	void ARaphaelGameMode::StaticRegisterNativesARaphaelGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARaphaelGameMode_NoRegister()
	{
		return ARaphaelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARaphaelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaphaelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Raphael,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaphaelGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of RaphaelCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RaphaelGameMode.h" },
		{ "ModuleRelativePath", "RaphaelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of RaphaelCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaphaelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaphaelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARaphaelGameMode_Statics::ClassParams = {
		&ARaphaelGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARaphaelGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaphaelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaphaelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARaphaelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARaphaelGameMode, 2159137934);
	template<> RAPHAEL_API UClass* StaticClass<ARaphaelGameMode>()
	{
		return ARaphaelGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARaphaelGameMode(Z_Construct_UClass_ARaphaelGameMode, &ARaphaelGameMode::StaticClass, TEXT("/Script/Raphael"), TEXT("ARaphaelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaphaelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
