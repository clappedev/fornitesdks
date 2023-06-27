#pragma once

// Fortnite (14.30) SDK

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
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosCaptureStatics");
		
		return ptr;
	}


	void STATIC_ToggleAutoRotate(bool bIsAutoRotateAllowed);
	void PauseOrResumeSnippet(const struct FKairosSnippetParams& Params, const struct FWebJSResponse& Response);
	class AKairosSceneManagerActor* STATIC_GetSceneManager(class UObject* WorldContextObject);
};


// Class KairosSceneCapture.KairosConfig
// 0x0010 (0x0040 - 0x0030)
class UKairosConfig : public UDataAsset
{
public:
	float                                              DefaultHeroScale;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class AKairosHeroBase*                             AvatarCaptureBlueprint;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosConfig");
		
		return ptr;
	}

};


// Class KairosSceneCapture.KairosGameModeBase
// 0x0008 (0x02C8 - 0x02C0)
class AKairosGameModeBase : public AGameModeBase
{
public:
	class UKairosConfig*                               DefaultConfig;                                            // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosGameModeBase");
		
		return ptr;
	}


	class UKairosConfig* GetDefaultConfig();
};


// Class KairosSceneCapture.KairosHeroBase
// 0x0030 (0x0250 - 0x0220)
class AKairosHeroBase : public AActor
{
public:
	struct FString                                     PlayerId;                                                 // 0x0220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsBeingCaptured;                                         // 0x0230(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EKairosHeroAnimationState                          CurrentAnimationState;                                    // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKairosHeroSkeletonType                            SkeletonType;                                             // 0x0241(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             CapturePawn;                                              // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosHeroBase");
		
		return ptr;
	}


	bool EndCapture();
	bool BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams);
};


// Class KairosSceneCapture.KairosPawn
// 0x0000 (0x0280 - 0x0280)
class AKairosPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosPawn");
		
		return ptr;
	}

};


// Class KairosSceneCapture.KairosPlayerController
// 0x0000 (0x0570 - 0x0570)
class AKairosPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosPlayerController");
		
		return ptr;
	}

};


// Class KairosSceneCapture.KairosSceneManagerActor
// 0x0180 (0x03A0 - 0x0220)
class AKairosSceneManagerActor : public AActor
{
public:
	TMap<struct FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                           // 0x0220(0x0050) (BlueprintVisible, BlueprintReadOnly)
	struct FTransform                                  SpawnedPawnHeadCaptureTransform;                          // 0x0270(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UAudioComponent*                             SnippetAudioComponent;                                    // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 ActiveGroupWidget;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSnippetPaused;                                         // 0x02B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x02B1(0x001F) MISSED OFFSET
	struct FKairosSceneInfo                            ActiveSceneInfo;                                          // 0x02D0(0x0020)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x02F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class KairosSceneCapture.KairosSceneManagerActor");
		
		return ptr;
	}


	void StopAR();
	void PauseOrResumeSnippet(const struct FString& PlayerId, bool bShouldPase);
	void OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy);
	struct FKairosSceneInfo GetSceneInfo();
	void BeginEmotePlaybackForPlayer(const struct FString& PlayerId, const struct FString& EmoteId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
