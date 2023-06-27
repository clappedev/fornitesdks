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

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// 0x008C (0x084C - 0x07C0)
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7;// 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7;       // 0x07CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HealthSweep__Direction_AEAC519D4817261537105281CD9192C7;  // 0x07D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          HealthSweep;                                              // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             My_Target;                                                // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Duplicate_MIDs;                                           // 0x07E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Duplicate_Head;                                           // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Body;                                           // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Hat;                                            // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Backpack;                                       // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Charm;                                          // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Face;                                           // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Direct;                       // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Direct;                       // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Adrenaline_Rush_WPO_Offset;                               // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C");
		
		return ptr;
	}


	void Toggle_Mesh_Visibility(bool Visibility);
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn);
	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn);
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
