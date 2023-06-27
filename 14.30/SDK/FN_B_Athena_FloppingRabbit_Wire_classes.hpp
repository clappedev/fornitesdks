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

// BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C
// 0x011C (0x03AC - 0x0290)
class AB_Athena_FloppingRabbit_Wire_C : public AFortHookGunRope
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             HookOffset;                                               // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        hook;                                                     // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ItemSocket;                                               // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB;        // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB;        // 0x02BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Tight;                                                    // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8;         // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8;// 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8;      // 0x02D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Reel_In;                                                  // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APrj_Athena_FloppingRabbit_C*                Projectile_Actor;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x02E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class USoundBase*                                  ReelSound;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReattachSound;                                            // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x0300(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BlockIncomingPickups;                                     // 0x0308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Change_Equipment_Tag;                                     // 0x0310(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ReelinPlayRate;                                           // 0x0330(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_Stop;                                                   // 0x0334(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ReelMontage;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Toss;                                                     // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FVector                                     HookRelativeStartingLoc;                                  // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HookRelativeStartingRot;                                  // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CatchParticleOn;                                          // 0x0364(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UAnimMontage*                                ReelWeaponMontage;                                        // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_FlopperSpawn;                                           // 0x0370(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Sound_Pickup;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPickup*>                         PickedUpPickups;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RopeWidth;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C");
		
		return ptr;
	}


	void OnRep_CatchParticleOn();
	void Reel_In__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Tight__FinishedFunc();
	void Tight__UpdateFunc();
	void OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4(const struct FName& NotifyName);
	void OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4(const struct FName& NotifyName);
	void OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4(const struct FName& NotifyName);
	void OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4(const struct FName& NotifyName);
	void OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4(const struct FName& NotifyName);
	void TightenRope();
	void PlayMontage();
	void DropAndDestroy();
	void AttachNonFishingPickups(class AFortPickup* InputPin);
	void StartReeling();
	void ReceiveBeginPlay();
	void ActivateProjectileMovmentComponent(class UActorComponent* Target);
	void ExecuteUbergraph_B_Athena_FloppingRabbit_Wire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
