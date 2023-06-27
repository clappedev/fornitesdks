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

// BlueprintGeneratedClass Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C
// 0x008B (0x0143 - 0x00B8)
class UCreative_VisibleInGame_Component_C : public UCreative_DeviceComponent_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.On Visibility Changed
	TArray<class USceneComponent*>                     VisibleSceneComponents;                                   // 0x00D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bEnableCollisionUpdates;                                  // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Default_Collision_Enabled_State;                          // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision_Disabled_State;                                 // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVisibleInGameState>                   VisibleDuringPhase;                                       // 0x00E3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetOnComponentActivation;                              // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FTimerHandle                                RetryBindMiniGameEventsTimer;                             // 0x00E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> Collision_Enabled_Overrides;                              // 0x00F0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<Enum_ForcedValueDuringGame>            ForcedVisibilityDuringGame;                               // 0x0140(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSetHiddenInGame;                                      // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update_Foliage_on_Visibility_Change;                      // 0x0142(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C");
		
		return ptr;
	}


	void Update_Foliage();
	void OnRep_ForcedVisibilityDuringGame();
	void SetForcedVisibilityDuringGame(TEnumAsByte<Enum_ForcedValueDuringGame> NewForcedVisibilityDuringGame);
	void Update_Array_Visibility(TArray<class USceneComponent*>* Array);
	void Set_Visibility_Components_with_Collision(TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> Collision_Overrides);
	void Should_Be_Visible(bool* Visible);
	void OnRep_VisibleDuringPhase();
	void Set_Visibility_Components(TArray<class USceneComponent*>* Scene_Components);
	bool Is_In_Play_Mode();
	void Update_Particle_Component(class UParticleSystemComponent* Particle_Component, bool Visible);
	void Update_Audio_Component(class UAudioComponent* Audio_Component, bool Visible);
	void Update_Primitive_Component_Collision(class UPrimitiveComponent* Primitive_Component, bool Visible);
	void Update_Component_Visibility(class USceneComponent* Component, bool Visible);
	void Set_Visiblity_During_Phase(TEnumAsByte<EVisibleInGameState> New_Visible_During_Phase);
	void Update_Visibility();
	void Get_Visibility_Components(TArray<class USceneComponent*>* Components);
	void ReceiveBeginPlay();
	void OnPlayModeChangedDelegate(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Bind_Minigame_Events();
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void ExecuteUbergraph_Creative_VisibleInGame_Component(int EntryPoint);
	void On_Visibility_Changed__DelegateSignature(bool Visible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
