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

// Class AmbientAudio.AmbientAudioDataAsset
// 0x0028 (0x0058 - 0x0030)
class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>                   LoopingSounds;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAmbientAudioOneShot>                OneShotSounds;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TagCrossfadeTime;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AmbientAudio.AmbientAudioDataAsset");
		
		return ptr;
	}

};


// Class AmbientAudio.AmbientAudioStatics
// 0x0000 (0x0028 - 0x0028)
class UAmbientAudioStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AmbientAudio.AmbientAudioStatics");
		
		return ptr;
	}


	void STATIC_RemoveAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag);
	void STATIC_RemoveAmbientEntry(class UObject* WorldContextObject, const struct FName& AmbientName);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location);
	class UAudioComponent* STATIC_CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound);
	void STATIC_AddAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag);
	void STATIC_AddAmbientEntry(class UObject* WorldContextObject, const struct FName& AmbientName, class UAmbientAudioDataAsset* Asset, int Priority, float CrossfadeTime);
};


// Class AmbientAudio.AmbientAudioSubsystem
// 0x01F0 (0x0220 - 0x0030)
class UAmbientAudioSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AmbientAudio.AmbientAudioSubsystem.OnTagChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AmbientAudio.AmbientAudioSubsystem.OnEntryChanged
	TArray<class AAmbientVolume*>                      GlobalVolumes;                                            // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x1C0];                                     // 0x0060(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AmbientAudio.AmbientAudioSubsystem");
		
		return ptr;
	}


	void RemoveGameplayTag(const struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(const struct FName& AmbientName);
	void AddGameplayTag(const struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(const struct FName& AmbientName, class UAmbientAudioDataAsset* Asset, int Priority, float CrossfadeTime);
};


// Class AmbientAudio.AmbientVolume
// 0x0018 (0x0270 - 0x0258)
class AAmbientVolume : public AVolume
{
public:
	class UAmbientAudioDataAsset*                      AmbientAsset;                                             // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeTime;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      bGlobal : 1;                                              // 0x0268(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AmbientAudio.AmbientVolume");
		
		return ptr;
	}


	void SetPriority(int NewPriority);
	void SetEnabled(bool bNewEnabled);
	void SetCrossfadeTime(float NewCrossfadeTime);
	void SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset);
	void OnRep_bEnabled();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
