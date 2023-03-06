// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtoGlod_Play/ProtoGlod_PlayGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtoGlod_PlayGameMode() {}
// Cross Module References
	PROTOGLOD_PLAY_API UClass* Z_Construct_UClass_AProtoGlod_PlayGameMode_NoRegister();
	PROTOGLOD_PLAY_API UClass* Z_Construct_UClass_AProtoGlod_PlayGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProtoGlod_Play();
// End Cross Module References
	void AProtoGlod_PlayGameMode::StaticRegisterNativesAProtoGlod_PlayGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProtoGlod_PlayGameMode);
	UClass* Z_Construct_UClass_AProtoGlod_PlayGameMode_NoRegister()
	{
		return AProtoGlod_PlayGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProtoGlod_Play,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProtoGlod_PlayGameMode.h" },
		{ "ModuleRelativePath", "ProtoGlod_PlayGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtoGlod_PlayGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::ClassParams = {
		&AProtoGlod_PlayGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtoGlod_PlayGameMode()
	{
		if (!Z_Registration_Info_UClass_AProtoGlod_PlayGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProtoGlod_PlayGameMode.OuterSingleton, Z_Construct_UClass_AProtoGlod_PlayGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProtoGlod_PlayGameMode.OuterSingleton;
	}
	template<> PROTOGLOD_PLAY_API UClass* StaticClass<AProtoGlod_PlayGameMode>()
	{
		return AProtoGlod_PlayGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtoGlod_PlayGameMode);
	struct Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProtoGlod_PlayGameMode, AProtoGlod_PlayGameMode::StaticClass, TEXT("AProtoGlod_PlayGameMode"), &Z_Registration_Info_UClass_AProtoGlod_PlayGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtoGlod_PlayGameMode), 1947844333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayGameMode_h_24284587(TEXT("/Script/ProtoGlod_Play"),
		Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
