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

// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
// 0x01B4 (0x0A0C - 0x0858)
class AB_Athena_VendingMachine_C : public ABuildingItemCollectorActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0858(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Destroyed_Effect_Vending;                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackFail;                                        // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackSuccess;                                     // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VendingMachine_Ambient;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Loot_Effect_Vending;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_VendingMachineQuest;                                   // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VendWobble_Flash;                                         // 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VendWobble_WobbleTime;                                    // 0x08A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VendWobble__Direction;                                    // 0x08A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          VendWobble;                                               // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x08BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5;      // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5;  // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SwitchHitch;                                              // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MonitorMat;                                               // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MetalMat;                                                 // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentCaptureCount;                                      // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	struct FText                                       Vend_String;                                              // 0x08E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SearchSound;                                              // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VendFailedSound;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CycleSound;                                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CostAmount;                                               // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class UTexture*                                    MaterialType;                                             // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Vend_Succeeded_Sound;                                     // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VendSuccess;                                              // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasHit;                                                   // 0x0931(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0932(0x0002) MISSED OFFSET
	float                                              CycleSoundVolume;                                         // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        TossOnGroundSetting;                                      // 0x0938(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Wood_String;                                              // 0x0948(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Stone_String;                                             // 0x0960(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Metal_String;                                             // 0x0978(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortRarity                                        OverrideVendingMachineRarity;                             // 0x0990(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class USoundBase*                                  Ambient_SoundCue;                                         // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Free_String;                                              // 0x09A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  DestroyedSound;                                           // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxItemsToSpawn;                                          // 0x09C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ItemsAreFree;                                             // 0x09E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ItemsAreFreeCached;                                       // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A01(0x0003) MISSED OFFSET
	int                                                SpawnedItemCount;                                         // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToSpawnCached;                                    // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C");
		return ptr;
	}


	bool GetOverrideRarity(EFortRarity* Rarity);
	void SetRarityColors(struct FLinearColor Color);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void SwitchHitch__FinishedFunc();
	void SwitchHitch__UpdateFunc();
	void VendWobble__FinishedFunc();
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void OnReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags);
	void UpdateCollectorsActiveItem(int StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int CurrentGoal, int CurrentCollectedAmount, int CurrentCaptureCount, class UTexture* OutputTexture);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void BlueprintOnBeginInteract();
	void PlayVendFX();
	void ReceiveBeginPlay();
	void PlayVendFailFX();
	void OnForcedCycle();
	void DoVendDeath();
	void PickupSpawned_Bind();
	void ExecuteUbergraph_B_Athena_VendingMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
