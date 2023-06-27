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

// Class SrirachaRanch.RadioContentSourceItemDefinition
// 0x0018 (0x03A0 - 0x0388)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{
public:
	struct FString                                     ResourceID;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UFortStreamMediaSource*                      MediaSource;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanch.RadioContentSourceItemDefinition");
		
		return ptr;
	}

};


// Class SrirachaRanch.StreamingRadioAudioShapeComponent
// 0x0038 (0x0168 - 0x0130)
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{
public:
	float                                              Radius;                                                   // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UStreamingRadioPlayerComponent*              RadioPlayer;                                              // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0140(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanch.StreamingRadioAudioShapeComponent");
		
		return ptr;
	}

};


// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
// 0x0008 (0x0038 - 0x0030)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{
public:
	class UMediaSoundComponent*                        MediaSoundPlayerTemplate;                                 // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper");
		
		return ptr;
	}

};


// Class SrirachaRanch.StreamingRadioPlayerComponent
// 0x02D0 (0x0380 - 0x00B0)
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	TMap<struct FName, struct FSrirachaInputMappingData> InputMappingData;                                         // 0x00C0(0x0050) (Edit, EditFixedSize, DisableEditOnInstance, NoClear)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SrirachaRanch.StreamingRadioPlayerComponent.OnSourceLoading
	unsigned char                                      UnknownData02[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SrirachaRanch.StreamingRadioPlayerComponent.OnSourcePlayed
	unsigned char                                      UnknownData03[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SrirachaRanch.StreamingRadioPlayerComponent.OnSourceStopped
	unsigned char                                      UnknownData04[0x10];                                      // 0x0140(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SrirachaRanch.StreamingRadioPlayerComponent.OnSourceFailed
	unsigned char                                      UnknownData05[0x10];                                      // 0x0150(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SrirachaRanch.StreamingRadioPlayerComponent.OnRadioExplicitStop
	float                                              PercentAutostartRadio;                                    // 0x0160(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	TArray<struct FName>                               DisabledVehicleList;                                      // 0x0168(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, float>                          ExteriorVolumeMultiplierMap;                              // 0x0178(0x0050) (Config)
	TMap<struct FName, float>                          InteriorVolumeMultiplierMap;                              // 0x01C8(0x0050) (Config)
	bool                                               bMinimalStateOnPlatform;                                  // 0x0218(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	TArray<struct FString>                             DisabledStationList;                                      // 0x0220(0x0010) (ZeroConstructor, Config)
	bool                                               bAutostartOnEntry;                                        // 0x0230(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FStreamingRadioSourceData                   ReplicatedRadioSourceData;                                // 0x0238(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	class UMediaSoundComponent*                        SoundComponent;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStreamingRadioAudioShapeComponent*          AudioShape;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USrirachaRanchComponentTemplateWrapper*      SoundCompTemplateSource;                                  // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class URadioContentSourceItemDefinition*           LastSource;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<class URadioContentSourceItemDefinition*>   Sources;                                                  // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class URadioContentSourceItemDefinition*           FallbackSource;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FSrirachaPerClassSpecialSeats> SpecialSeatList;                                          // 0x0288(0x0050) (Edit)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMediaPlayerCtrl*                        MediaController;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortStreamMediaSource*                      LastMediaSource;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UFortStreamMediaSource*                      IncomingMediaSource;                                      // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ERadioSource                                       CurrentMode;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	int                                                MaximumRetries;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FadeoutWhenUnpoweredInMS;                                 // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                FadeoutWhenOwnerBeingDestroyedInMS;                       // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxFadeoutTimeMS;                                         // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DefaultPlayingIndex;                                      // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, IsPlainOldData)
	class USoundMix*                                   SoundMixInside;                                           // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundMix*                                   SoundMixOutside;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0320(0x0004) MISSED OFFSET
	float                                              ActivationRadius;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentToAttachTo;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentSocketAttachTo;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     DelegateContextObject;                                    // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MediaStartTimeFromInit;                                   // 0x0340(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3C];                                      // 0x0344(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanch.StreamingRadioPlayerComponent");
		
		return ptr;
	}


	void ToggleRadioActive();
	void StopRadioWithFadeout(int Milliseconds);
	void StopRadio();
	void StopIfNoDriver(const TScriptInterface<class UFortVehicleInterface>& Vehicle);
	void StartRadio(int IdxToPlay, bool bFallbackOverride);
	void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void SoundMixUpdateTargetingState(bool bNewIsTargeting);
	void SetInteriorVolume(const TScriptInterface<class UFortVehicleInterface>& Vehicle);
	void SetExteriorVolume(const TScriptInterface<class UFortVehicleInterface>& Vehicle);
	void PlayPrevIndex();
	void PlayNextIndex();
	void PlayDefaultIndex();
	void OnSuccessfulURL(const struct FString& URL);
	void OnRep_RadioSourceData();
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
	void OnPawnExitVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void OnPawnExitSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void OnPawnEnterVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void OnPawnEnterSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser);
	void OnOwnerUnpowered();
	void OnOwnerReFueled();
	void OnOwnerOutOfFuel();
	void OnOwnerExploded();
	void OnFailedURL(const struct FString& URL);
	void NativeOnPawnExitVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void NativeOnPawnExitSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void NativeOnPawnEnterVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void NativeOnPawnEnterSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex);
	void MediaReady(const struct FString& String);
	void MediaPlayed();
	void MediaLoad();
	void MediaFinishedOrClosed();
	void MediaFailedToOpen(const struct FString& String);
	void MediaExplicitClose(bool bReallyExplicit);
	bool IsPlayingLiveFeed();
	bool IsExternalSeat(int SeatIdx);
	class URadioContentSourceItemDefinition* GetOptionAt(int idx);
	void AuthStopRadio();
	void AuthSaveFadeOutTime(float FadeoutSeconds);
	void AuthSavedSource(class URadioContentSourceItemDefinition* Source);
	void AuthSaveAutoStart(bool bAutoStart);
	void AuthPlayIndex(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
