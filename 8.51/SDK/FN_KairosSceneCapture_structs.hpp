#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum KairosSceneCapture.EKairosAvatarCaptureState
enum class EKairosAvatarCaptureState : uint8_t
{
	Unloaded                       = 0,
	LoadingAssets                  = 1,
	ReadyToSpawn                   = 2,
	FinalizingSpawn                = 3,
	Displaying                     = 4,
	EKairosAvatarCaptureState_MAX  = 5
};


// Enum KairosSceneCapture.EKairosHeroAnimationType
enum class EKairosHeroAnimationType : uint8_t
{
	Unknown                        = 0,
	Idle                           = 1,
	Emote                          = 2,
	EKairosHeroAnimationType_MAX   = 3
};


// Enum KairosSceneCapture.EKairosHeroAnimationState
enum class EKairosHeroAnimationState : uint8_t
{
	Unknown                        = 0,
	Idling                         = 1,
	Emoting                        = 2,
	Face_Live                      = 3,
	Face_Playback                  = 4,
	EKairosHeroAnimationState_MAX  = 5
};


// Enum KairosSceneCapture.EKairosHeroSkeletonType
enum class EKairosHeroSkeletonType : uint8_t
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	EKairosHeroSkeletonType_MAX    = 3
};


// Enum KairosSceneCapture.EKairosAppMode
enum class EKairosAppMode : uint8_t
{
	Unknown                        = 0,
	AvatarCapture                  = 1,
	AvatarRender                   = 2,
	EKairosAppMode_MAX             = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KairosSceneCapture.KairosSnippetParams
// 0x0018
struct FKairosSnippetParams
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bPause;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosAnimationFramingInfo
// 0x0050
struct FKairosAnimationFramingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                IdleMontage;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKairosHeroAnimationType                           AnimationType;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKairosHeroSkeletonType                            SkeletonType;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0012(0x000E) MISSED OFFSET
	struct FTransform                                  CameraTransform;                                          // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct KairosSceneCapture.KairosCaptureParams
// 0x0100
struct FKairosCaptureParams
{
	int                                                FrameRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OverrideNumFrames;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     FullPathAndName;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosAvatarAttributesMcpData
// 0x0010
struct FKairosAvatarAttributesMcpData
{
	TArray<struct FMcpVariantReader>                   Variants;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct KairosSceneCapture.KairosAvatarItemMcpData
// 0x0020
struct FKairosAvatarItemMcpData
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FKairosAvatarAttributesMcpData              Attributes;                                               // 0x0010(0x0010)
};

// ScriptStruct KairosSceneCapture.KairosAvatarMcpData
// 0x0098
struct FKairosAvatarMcpData
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	bool                                               CurrentUser;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPlayFacialAnimation;                                // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FKairosAvatarItemMcpData                    Character;                                                // 0x0028(0x0020)
	struct FKairosAvatarItemMcpData                    Backpack;                                                 // 0x0048(0x0020)
	struct FKairosAvatarItemMcpData                    Dance;                                                    // 0x0068(0x0020)
	TArray<struct FString>                             BackgroundColors;                                         // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct KairosSceneCapture.KairosAvatarDisplayInfo
// 0x03A0
struct FKairosAvatarDisplayInfo
{
	EKairosAvatarCaptureState                          CurrentState;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKairosAvatarCaptureState                          TargetState;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FKairosAvatarMcpData                        AvatarData;                                               // 0x0040(0x0098)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET
	struct FFortAthenaLoadout                          Loadout;                                                  // 0x0108(0x00D8) (BlueprintVisible, BlueprintReadOnly)
	class UAnimSequenceBase*                           AnimToPlay;                                               // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     SnippetPathToPlay;                                        // 0x01E8(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01F8(0x0010) MISSED OFFSET
	class UFortHero*                                   HeroItem;                                                 // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FKairosCaptureParams                        CaptureParams;                                            // 0x0210(0x0100) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FLinearColor>                        BackgroundColors;                                         // 0x0310(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AKairosHeroBase*                             KairosHero;                                               // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             Pawn;                                                     // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentUser;                                           // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	struct FTransform                                  HeadBoneTransform;                                        // 0x0350(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bSpawnTransformIsAbsolute;                                // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNewCharacter;                                          // 0x0381(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	class UClass*                                      HeroPawnClass;                                            // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultFrontendAnimClass;                             // 0x0390(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0391(0x000F) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosSceneInfo
// 0x0020
struct FKairosSceneInfo
{
	EKairosAppMode                                     SceneAppMode;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FKairosAvatarDisplayInfo>            SpawnedAvatars;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FColor                                      BackgroundColor;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosSnippetPlayRecord
// 0x0018
struct FKairosSnippetPlayRecord
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bPause;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosCaptureAvatarParams
// 0x0040
struct FKairosCaptureAvatarParams
{
	struct FString                                     Background;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Format;                                                   // 0x0010(0x0010) (ZeroConstructor)
	int                                                Width;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FrameRate;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FKairosAvatarMcpData>                Characters;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct KairosSceneCapture.KairosBobbleTimeParams
// 0x0060
struct FKairosBobbleTimeParams
{
	struct FString                                     Background;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FKairosAvatarMcpData>                Characters;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SnippetPath;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     ContainerType;                                            // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     ContainerID;                                              // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     MessageID;                                                // 0x0050(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
