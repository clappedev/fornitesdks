#pragma once

// Fortnite (9.1) SDK
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
// 0x0090 (0x3070 - 0x2FE0)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x2FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x2FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic;                                       // 0x2FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  VictoryRoyaleMenuMusicAsset;                              // 0x3000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       BladeWielderTag;                                          // 0x3008(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortItemType                                      InteractingItemType;                                      // 0x3028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x3029(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       InteractionTags;                                          // 0x3030(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x3050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher
	float                                              PermissionRecheckTime;                                    // 0x3060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x3064(0x0004) MISSED OFFSET
	struct FTimerHandle                                PermissionsRecheckTimerHandle;                            // 0x3068(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

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
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Start_Victory_Royale_Music();
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
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly);
	void ReceiveBeginPlay();
	void ReplicateRotationScaleReset();
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
