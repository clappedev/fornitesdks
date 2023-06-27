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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x00B9 (0x2DF9 - 0x2D40)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x2D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x2D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic;                                       // 0x2D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  VictoryRoyaleMenuMusicAsset;                              // 0x2D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x2D68(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Athena_PlayerController.Athena_PlayerController_C.CreativeTool
	struct FGameplayTagContainer                       BladeWielderTag;                                          // 0x2D90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortItemType                                      InteractingItemType;                                      // 0x2DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2DB1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       InteractionTags;                                          // 0x2DB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x10];                                      // 0x2DD8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher
	float                                              PermissionRecheckTime;                                    // 0x2DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2DEC(0x0004) MISSED OFFSET
	struct FTimerHandle                                PermissionsRecheckTimerHandle;                            // 0x2DF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LocalGhostEnabled;                                        // 0x2DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	bool Is_Creative_Mode();
	void SetupPermissionRecheckTimer();
	void LeftAllVolumes(bool* bLeftVolumes);
	void UserConstructionScript();
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags);
	void OnLoaded(class UObject* Loaded);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Start_Victory_Royale_Music();
	void ReceiveBeginPlay();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void OnLeaveVolume(class AFortVolume* Volume);
	void OnEnterVolume(class AFortVolume* Volume);
	void HandlePermissions(class AFortVolume* Volume);
	void GrantItem();
	void RevokeItem();
	void PermissionsChanged();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void RevokeCreativeTool();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void Creative_Ghost_Enabled_Changed(bool GhostEnabled);
	void PlayMoveToolSoundBySoftObjectReference();
	void ReplicateRotationScaleReset();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly);
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
