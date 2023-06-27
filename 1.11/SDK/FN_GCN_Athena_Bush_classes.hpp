#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// 0x0041 (0x04D1 - 0x0490)
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow2;                                                   // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BushMesh;                                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Trail_Leaves;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlayerPawn;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Bush;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C");
		return ptr;
	}


	void Activated(class AActor* PlayerPawn);
	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void On_Player_Step();
	void ExecuteUbergraph_GCN_Athena_Bush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
