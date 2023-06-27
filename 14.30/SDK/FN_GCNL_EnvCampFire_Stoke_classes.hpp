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

// BlueprintGeneratedClass GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C
// 0x0048 (0x0808 - 0x07C0)
class AGCNL_EnvCampFire_Stoke_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                              Row_TickInterval;                                         // 0x07C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_MaxHeals;                                             // 0x07E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C");
		
		return ptr;
	}


	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void ExecuteUbergraph_GCNL_EnvCampFire_Stoke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
