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

// BlueprintGeneratedClass GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C
// 0x0040 (0x0AE8 - 0x0AA8)
class UGA_Athena_Track_DangerGrape_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TrackGroupTag;                                            // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              SpawnedDecoys;                                            // 0x0AB8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                              MaxActorsInWorld;                                         // 0x0AC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C");
		
		return ptr;
	}


	void OnRep_SnowmenActors();
	void EventReceived_CECFA813476EFF4163BB1EAFBFD4E985(const struct FGameplayEventData& Payload);
	void EventReceived_13B4A7014CFACBC3914C3BA737F355B3(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void On_Possesed_Pawn_Died();
	void ExecuteUbergraph_GA_Athena_Track_DangerGrape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
