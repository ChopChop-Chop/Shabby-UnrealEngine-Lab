// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MunchkinExampleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMunchkinExampleGameMode() {}
// Cross Module References
	MUNCHKINEXAMPLE_API UClass* Z_Construct_UClass_AMunchkinExampleGameMode_NoRegister();
	MUNCHKINEXAMPLE_API UClass* Z_Construct_UClass_AMunchkinExampleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MunchkinExample();
// End Cross Module References
	void AMunchkinExampleGameMode::StaticRegisterNativesAMunchkinExampleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMunchkinExampleGameMode_NoRegister()
	{
		return AMunchkinExampleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMunchkinExampleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_MunchkinExample,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MunchkinExampleGameMode.h" },
				{ "ModuleRelativePath", "MunchkinExampleGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMunchkinExampleGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMunchkinExampleGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMunchkinExampleGameMode, 1933544112);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMunchkinExampleGameMode(Z_Construct_UClass_AMunchkinExampleGameMode, &AMunchkinExampleGameMode::StaticClass, TEXT("/Script/MunchkinExample"), TEXT("AMunchkinExampleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMunchkinExampleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
