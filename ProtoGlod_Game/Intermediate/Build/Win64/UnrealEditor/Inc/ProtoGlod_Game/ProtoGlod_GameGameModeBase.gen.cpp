// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtoGlod_Game/ProtoGlod_GameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtoGlod_GameGameModeBase() {}
// Cross Module References
	PROTOGLOD_GAME_API UClass* Z_Construct_UClass_AProtoGlod_GameGameModeBase_NoRegister();
	PROTOGLOD_GAME_API UClass* Z_Construct_UClass_AProtoGlod_GameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProtoGlod_Game();
// End Cross Module References
	void AProtoGlod_GameGameModeBase::StaticRegisterNativesAProtoGlod_GameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProtoGlod_GameGameModeBase);
	UClass* Z_Construct_UClass_AProtoGlod_GameGameModeBase_NoRegister()
	{
		return AProtoGlod_GameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProtoGlod_Game,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProtoGlod_GameGameModeBase.h" },
		{ "ModuleRelativePath", "ProtoGlod_GameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtoGlod_GameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::ClassParams = {
		&AProtoGlod_GameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtoGlod_GameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProtoGlod_GameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProtoGlod_GameGameModeBase.OuterSingleton, Z_Construct_UClass_AProtoGlod_GameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProtoGlod_GameGameModeBase.OuterSingleton;
	}
	template<> PROTOGLOD_GAME_API UClass* StaticClass<AProtoGlod_GameGameModeBase>()
	{
		return AProtoGlod_GameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtoGlod_GameGameModeBase);
	struct Z_CompiledInDeferFile_FID_ProtoGlod_Game_Source_ProtoGlod_Game_ProtoGlod_GameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Game_Source_ProtoGlod_Game_ProtoGlod_GameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProtoGlod_GameGameModeBase, AProtoGlod_GameGameModeBase::StaticClass, TEXT("AProtoGlod_GameGameModeBase"), &Z_Registration_Info_UClass_AProtoGlod_GameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtoGlod_GameGameModeBase), 1575672115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Game_Source_ProtoGlod_Game_ProtoGlod_GameGameModeBase_h_1003482310(TEXT("/Script/ProtoGlod_Game"),
		Z_CompiledInDeferFile_FID_ProtoGlod_Game_Source_ProtoGlod_Game_ProtoGlod_GameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProtoGlod_Game_Source_ProtoGlod_Game_ProtoGlod_GameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
