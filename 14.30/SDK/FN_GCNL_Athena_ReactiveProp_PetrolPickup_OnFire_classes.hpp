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

// BlueprintGeneratedClass GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C
// 0x0018 (0x07D8 - 0x07C0)
class AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                                 SpawnRampCurve;                                           // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Timer_Handle;                                             // 0x07D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C");
		
		return ptr;
	}


	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void Loop();
	void StartLoop();
	void ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
