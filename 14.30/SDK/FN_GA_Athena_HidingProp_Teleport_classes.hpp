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

// BlueprintGeneratedClass GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
// 0x00A0 (0x0B48 - 0x0AA8)
class UGA_Athena_HidingProp_Teleport_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AB0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.NewEventDispatcher_1
	class AB_HidingProp_C*                             HidingProp;                                               // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_HidingProp_C*                             TargetTeleporter;                                         // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCameraModifier*                             CameraModifier;                                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_HudElementToHide;                                       // 0x0AD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                TargetPropTeleportingCue;                                 // 0x0AF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                WobbleHandle;                                             // 0x0B00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                WobbleCue;                                                // 0x0B08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ServerWorldTime;                                          // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EnterCue;                                                 // 0x0B14(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                HidingInPropTag;                                          // 0x0B1C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C");
		
		return ptr;
	}


	void Added_FD079A2341CDD832DF47CD975DFC3BB3();
	void OnComplete_EE0FA6804073079396C44591432259C0();
	void Added_67FE14EA4DF2D8C2DB494AA89443681B();
	void Added_CB8220A04B74338E758C11B7371D4630();
	void Added_F96D6DD549939CA425D2D1BE1AD32090();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void QuestUpdate(class AFortPawn* Pawn);
	void Wobble();
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void GrapplerFailSafe(class AFortPawn* FortPawn);
	void ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
