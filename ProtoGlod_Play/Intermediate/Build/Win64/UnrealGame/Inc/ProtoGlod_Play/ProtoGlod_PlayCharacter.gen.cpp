// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtoGlod_Play/ProtoGlod_PlayCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtoGlod_PlayCharacter() {}
// Cross Module References
	PROTOGLOD_PLAY_API UClass* Z_Construct_UClass_AProtoGlod_PlayCharacter_NoRegister();
	PROTOGLOD_PLAY_API UClass* Z_Construct_UClass_AProtoGlod_PlayCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProtoGlod_Play();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AProtoGlod_PlayCharacter::StaticRegisterNativesAProtoGlod_PlayCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProtoGlod_PlayCharacter);
	UClass* Z_Construct_UClass_AProtoGlod_PlayCharacter_NoRegister()
	{
		return AProtoGlod_PlayCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProtoGlod_Play,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProtoGlod_PlayCharacter.h" },
		{ "ModuleRelativePath", "ProtoGlod_PlayCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProtoGlod_PlayCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtoGlod_PlayCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProtoGlod_PlayCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtoGlod_PlayCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ProtoGlod_PlayCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtoGlod_PlayCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtoGlod_PlayCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::ClassParams = {
		&AProtoGlod_PlayCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtoGlod_PlayCharacter()
	{
		if (!Z_Registration_Info_UClass_AProtoGlod_PlayCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProtoGlod_PlayCharacter.OuterSingleton, Z_Construct_UClass_AProtoGlod_PlayCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProtoGlod_PlayCharacter.OuterSingleton;
	}
	template<> PROTOGLOD_PLAY_API UClass* StaticClass<AProtoGlod_PlayCharacter>()
	{
		return AProtoGlod_PlayCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtoGlod_PlayCharacter);
	struct Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProtoGlod_PlayCharacter, AProtoGlod_PlayCharacter::StaticClass, TEXT("AProtoGlod_PlayCharacter"), &Z_Registration_Info_UClass_AProtoGlod_PlayCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtoGlod_PlayCharacter), 2032338155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayCharacter_h_2561061495(TEXT("/Script/ProtoGlod_Play"),
		Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProtoGlod_Play_Source_ProtoGlod_Play_ProtoGlod_PlayCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
