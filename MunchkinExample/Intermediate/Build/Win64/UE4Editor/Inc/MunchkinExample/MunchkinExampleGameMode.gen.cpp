// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MunchkinExampleGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MunchkinExample();
			OuterClass = AMunchkinExampleGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMunchkinExampleGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MunchkinExampleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MunchkinExampleGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMunchkinExampleGameMode, 2833701937);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMunchkinExampleGameMode(Z_Construct_UClass_AMunchkinExampleGameMode, &AMunchkinExampleGameMode::StaticClass, TEXT("/Script/MunchkinExample"), TEXT("AMunchkinExampleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMunchkinExampleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
