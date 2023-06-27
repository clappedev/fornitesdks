#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KairosSceneCapture.KairosCaptureStatics
// 0x0000 (0x0028 - 0x0028)
class UKairosCaptureStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosCaptureStatics");
		return ptr;
	}


	void STATIC_ToggleAutoRotate(bool bIsAutoRotateAllowed);
	void PauseOrResumeSnippet(struct FKairosSnippetParams Params, struct FWebJSResponse Response);
	class AKairosSceneManagerActor* STATIC_GetSceneManager(class UObject* WorldContextObject);
};


// Class KairosSceneCapture.KairosConfig
// 0x0140 (0x0170 - 0x0030)
class UKairosConfig : public UDataAsset
{
public:
	float                                              DefaultHeroScale;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ARSpawnStartingScale;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AvatarCaptureBlueprint;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultKairosPawn;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UARSessionConfig*                            FaceARConfig;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KairosSceneCapture.KairosConfig.ARMap
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KairosSceneCapture.KairosConfig.CaptureMap
	class UAnimMontage*                                KairosMenuIdle_Male;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                KairosMenuIdle_Female;                                    // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AvatarRenderCameraLocation_CloseUp;                       // 0x00B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  AvatarRenderCameraLocation_Bust;                          // 0x00E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  AvatarRenderCameraLocation_Torso;                         // 0x0110(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  AvatarRenderCameraLocation_FullBody;                      // 0x0140(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosConfig");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosGameModeBase
// 0x0008 (0x02E8 - 0x02E0)
class AKairosGameModeBase : public AGameModeBase
{
public:
	class UKairosConfig*                               DefaultConfig;                                            // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosGameModeBase");
		return ptr;
	}


	class UKairosConfig* GetDefaultConfig();
};


// Class KairosSceneCapture.KairosHeroBase
// 0x0030 (0x0270 - 0x0240)
class AKairosHeroBase : public AActor
{
public:
	struct FString                                     PlayerID;                                                 // 0x0240(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsBeingCaptured;                                         // 0x0250(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EKairosHeroAnimationState                          CurrentAnimationState;                                    // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKairosHeroSkeletonType                            SkeletonType;                                             // 0x0261(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             CapturePawn;                                              // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosHeroBase");
		return ptr;
	}


	bool EndCapture();
	bool BeginCapture(struct FKairosAnimationFramingInfo FramingInfo, struct FKairosCaptureParams CaptureParams);
};


// Class KairosSceneCapture.KairosPawn
// 0x0000 (0x02A0 - 0x02A0)
class AKairosPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosPawn");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosPlayerController
// 0x0000 (0x0590 - 0x0590)
class AKairosPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosPlayerController");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosSceneManagerActor
// 0x0180 (0x03C0 - 0x0240)
class AKairosSceneManagerActor : public AActor
{
public:
	TMap<struct FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                           // 0x0240(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTransform                                  SpawnedPawnHeadCaptureTransform;                          // 0x0290(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UAudioComponent*                             SnippetAudioComponent;                                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ActiveGroupWidget;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSnippetPaused;                                         // 0x02D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x02D1(0x001F) MISSED OFFSET
	struct FKairosSceneInfo                            ActiveSceneInfo;                                          // 0x02F0(0x0020)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0310(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosSceneManagerActor");
		return ptr;
	}


	void StopAR();
	void PauseOrResumeSnippet(struct FString PlayerID, bool bShouldPase);
	void OLD_OnSceneSetupComplete(struct FKairosSceneInfo CompleteSceneInfoCopy);
	void LoadWorldARMode();
	struct FKairosSceneInfo GetSceneInfo();
	void BeginEmotePlaybackForPlayer(struct FString PlayerID, struct FString EmoteID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
