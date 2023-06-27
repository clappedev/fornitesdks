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

// BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
// 0x007A (0x0C52 - 0x0BD8)
class ACreative_Device_Prop_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*         VisibleInGameComponent;                                   // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCreative_Enabled_Component_C*               EnabledComponent;                                         // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMinigameProgressComponent*              FortMinigameProgress;                                     // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActivateOnGamePhase;                                      // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnabledIndex;                                             // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C08(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated
	class AController*                                 Instigating_Controller;                                   // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C21(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C21(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized
	float                                              Knob_Health;                                              // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0C3C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed
	bool                                               Update_on_Minigame_State_Change;                          // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Update_on_Play_Mode_Changed;                              // 0x0C51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C");
		
		return ptr;
	}


	void GetVisibilityComponentsWithCollisionOverrides(TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>>* VisibilityComponents);
	void GetVisibilityComponents(TArray<class USceneComponent*>* VisibilityComponents);
	void Update_Visibility_In_Game();
	void Is_Visible_In_Game(bool* Visible);
	void IsInPlayMode(bool* bIsInPlayMode);
	float BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void Activate_Device_Failed();
	void Attempt_Activate_Device(class AController* Instigating_Controller, bool Additional_Requirements);
	void Initialize_Device();
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void Activate_Device();
	void Activate_on_Phase(EFortMinigameState State);
	void PlayModeChanged(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void On_Mingame_State_Changed(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnWorldReady();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature();
	void OnMinigameStarted();
	void OnMinigameEnded();
	void ExecuteUbergraph_Creative_Device_Prop_Parent(int EntryPoint);
	void On_Play_Mode_Changed__DelegateSignature(bool New_Play_Mode);
	void On_Device_Initialized__DelegateSignature();
	void On_Device_Activated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
