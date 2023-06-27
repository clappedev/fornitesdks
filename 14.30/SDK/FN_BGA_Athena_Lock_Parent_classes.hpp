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

// BlueprintGeneratedClass BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C
// 0x0140 (0x0900 - 0x07C0)
class ABGA_Athena_Lock_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Lock;                                                     // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLinkToActorComponent*                   FortLinkToActor;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InteractionCollision;                                     // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABuildingActor*                              AttachedLockActor;                                        // 0x07E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               CanFirstInteract;                                         // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSecondInteract;                                        // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInteractWhileUnlocked;                                 // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x07F3(0x0005) MISSED OFFSET
	struct FText                                       FirstInteractText;                                        // 0x07F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SecondInteractText;                                       // 0x0810(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FirstInteractTime;                                        // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondInteractTime;                                       // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetLockOnFirstInteract;                                   // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetLockOnSecondInteract;                                  // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0832(0x0006) MISSED OFFSET
	class AFortPawn*                                   LastInteractingPawn;                                      // 0x0838(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanMultipleInteract;                                      // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Athena_Lock>                      LockState;                                                // 0x0841(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EverInteractSetLock;                                      // 0x0842(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0843(0x0001) MISSED OFFSET
	struct FGameplayTag                                Event_Locked;                                             // 0x0844(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_Unlocked;                                           // 0x084C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DoLockCheckFirstInteract;                                 // 0x0854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoLockCheckSecondInteract;                                // 0x0855(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyEffectOnFailCheck;                                   // 0x0856(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0857(0x0001) MISSED OFFSET
	class UGameplayEffect*                             GE_FailedCheck;                                           // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInteractAngle;                                         // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_RelockDelay;                                          // 0x0868(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AutoRelock;                                               // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	struct FScalableFloat                              Row_SelfInteractEnabled;                                  // 0x0890(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_DoNotLockActor;                                       // 0x08B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x10];                                      // 0x08D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnlockedDispatcher
	unsigned char                                      UnknownData07[0x10];                                      // 0x08E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLockedDispatcher
	bool                                               AutoAttachToParentActors;                                 // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoCloseDoorOnLock;                                      // 0x08F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoDoorOnUnlock;                                         // 0x08F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoOpenContainersOnUnlock;                               // 0x08F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetsAllowInteractOnUnlock;                                // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_MANG_Security_ID>                 Lock_ID;                                                  // 0x08F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x08F6(0x0002) MISSED OFFSET
	class AActor*                                      BlankLinkedActor;                                         // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C");
		
		return ptr;
	}


	void Lock_Set_Interact_Collision(bool On);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void LockCheck(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, bool* CheckPassed);
	void OnRep_EverInteractSetLock();
	void OnRep_LockState();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void OnReady_19560710434050E125B3ADA0163CD609(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void OnFirstInteract(class AFortPawn* InteractingPawn);
	void OnLocked();
	void OnUnLocked();
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void HideAndKill();
	void ApplyFailCheckEffect();
	void SetLock(TEnumAsByte<Enum_Athena_Lock> LockState);
	void TimedRelock();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void ReceiveBeginPlay();
	void OpenContainers();
	void LockCloseDoor();
	void UnlockOpenDoor();
	void NotEnabled();
	void ParentActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_BGA_Athena_Lock_Parent(int EntryPoint);
	void OnLockedDispatcher__DelegateSignature();
	void OnUnlockedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
