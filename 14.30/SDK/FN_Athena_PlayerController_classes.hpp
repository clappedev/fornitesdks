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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x00C8 (0x3AD8 - 0x3A10)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUnderwaterAudioComponent_C*                 UnderwaterAudioComponent;                                 // 0x3A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListenerOverride;                                         // 0x3A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x3A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic1;                                      // 0x3A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  CurrentMusic;                                             // 0x3A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       BladeWielderTag;                                          // 0x3A40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortItemType                                      InteractingItemType;                                      // 0x3A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x3A61(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       InteractionTags;                                          // 0x3A68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x3A88(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher
	struct FTimerHandle                                PermissionsRecheckTimerHandle;                            // 0x3A98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LobbyMusicOnVictoryDelayTime;                             // 0x3AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x3AA4(0x0004) MISSED OFFSET
	class USoundMix*                                   CamUnderwaterSoundMix;                                    // 0x3AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterLoopSound;                                   // 0x3AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CamUnderwaterAudio;                                       // 0x3AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterStartSound;                                  // 0x3AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterStopSound;                                   // 0x3AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic2;                                      // 0x3AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		
		return ptr;
	}


	void FadeAudioComponents(class UAudioComponent* NewMusicComponent, class UAudioComponent* PreviousMusicComponent, class USoundBase* Music, float StartTime);
	bool Is_Creative_Mode();
	void SetupPermissionRecheckTimer();
	void LeftAllVolumes(bool* bLeftVolumes);
	void UserConstructionScript();
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void GrantItem();
	void RevokeItem();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly);
	void ReceiveBeginPlay();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ReplicateRotationScaleReset();
	void K2_OnLeaveVolume(class AFortVolume* Volume);
	void K2_OnEnterVolume(class AFortVolume* Volume);
	void Handle_Victory_Royale_Audio(bool Audio_Only);
	void Change_Music(class USoundBase* New_Music, float StartTime);
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
