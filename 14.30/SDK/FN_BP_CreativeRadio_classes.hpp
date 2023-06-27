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

// BlueprintGeneratedClass BP_CreativeRadio.BP_CreativeRadio_C
// 0x003B (0x0CB3 - 0x0C78)
class ABP_CreativeRadio_C : public ABuildingPropPlaygroundMusicPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*         VisibleInGameComponent;                                   // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCreative_Radio_AudioToMPC_C*                Creative_Radio_AudioToMPC;                                // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMinigameProgressComponent*              FortMinigameProgress;                                     // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RadioAttenuationDistance;                                 // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              VolumeOverride;                                           // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              CachedVolumeMultiplier;                                   // 0x0CA8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedAttenuationSetting;                                 // 0x0CAC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDriveVisualization;                                 // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CachedShouldDriveVisualization;                           // 0x0CB1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsMeshVisibleDuringMinigame;                              // 0x0CB2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CreativeRadio.BP_CreativeRadio_C");
		
		return ptr;
	}


	void CheckMinigameStateOnPropertyChanged();
	void PlaybackTypeUpgradePath();
	void UpdateCachedAttenuationSettings();
	void SetAttenuationDistance();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void OnRep_CachedShouldDriveVisualization();
	void OnRep_CachedAttenuationSetting();
	void OnRep_CachedVolumeMultiplier();
	void OnPropertyChanged();
	void ReceiveBeginPlay();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void OnWorldReady();
	void ExecuteUbergraph_BP_CreativeRadio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
