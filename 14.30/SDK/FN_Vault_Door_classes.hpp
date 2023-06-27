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

// BlueprintGeneratedClass Vault_Door.Vault_Door_C
// 0x00CC (0x088C - 0x07C0)
class AVault_Door_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_Prim_Prism;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           UpperBolt;                                                // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           LowerBolt;                                                // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           UpperBolt2_Door;                                          // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           UpperBolt1_Door;                                          // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           VaultDoorFX;                                              // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         VaultLightInside;                                         // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         VaultLightOutside;                                        // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VaultDoor;                                                // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Frame;                                                    // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Open_ShaderAnim_Normalized_B888903B464902A65CC3929C6A64E5F6;// 0x0818(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Open_Lerp_B888903B464902A65CC3929C6A64E5F6;               // 0x081C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Open__Direction_B888903B464902A65CC3929C6A64E5F6;         // 0x0820(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Open;                                                     // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    DoorSpawnRotation;                                        // 0x0830(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorRotationAmount;                                       // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_VaultDoor;                                            // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_OpenDoor;                                              // 0x0848(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GreenLight;                                               // 0x0850(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0851(0x0003) MISSED OFFSET
	float                                              WaitLockTime;                                             // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BigCShapeLockTime;                                        // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x085C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0868(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // 0x0874(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EndRotation;                                              // 0x0880(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vault_Door.Vault_Door_C");
		
		return ptr;
	}


	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void OnRep_HasBeenOpening();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void Open__FinishedFunc();
	void Open__UpdateFunc();
	void Open__Trigger_Light__EventFunc();
	void ReceiveBeginPlay();
	void VaultOpen();
	void OpeningTimeline();
	void ExecuteUbergraph_Vault_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
