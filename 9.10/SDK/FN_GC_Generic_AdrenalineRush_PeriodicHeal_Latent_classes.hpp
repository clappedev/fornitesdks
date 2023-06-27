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

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C
// 0x008C (0x04F4 - 0x0468)
class AGC_Generic_AdrenalineRush_PeriodicHeal_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    HealVFX;                                                  // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HealthSweep_SafetyOpacity_C6B3E46840604FF99D5A059F9F008762;// 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthSweep_Sweep_C6B3E46840604FF99D5A059F9F008762;       // 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HealthSweep__Direction_C6B3E46840604FF99D5A059F9F008762;  // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UTimelineComponent*                          HealthSweep;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Duplicate_MIDs;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Duplicate_Head;                                           // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Body;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Hat;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Backpack;                                       // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Charm;                                          // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Face;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Direct;                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Direct;                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Adrenaline_Rush_WPO_Offset;                               // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Generic_AdrenalineRush_PeriodicHeal_Latent.GC_Generic_AdrenalineRush_PeriodicHeal_Latent_C");
		return ptr;
	}


	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn);
	void Destroy_Meshes();
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn);
	void HealthCheck(class AFortPlayerPawn* Player_Pawn, bool* Check_Return);
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Latent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
