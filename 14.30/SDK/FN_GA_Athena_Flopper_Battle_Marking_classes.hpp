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

// BlueprintGeneratedClass GA_Athena_Flopper_Battle_Marking.GA_Athena_Flopper_Battle_Marking_C
// 0x0090 (0x0B38 - 0x0AA8)
class UGA_Athena_Flopper_Battle_Marking_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                              MarkingRadius;                                            // 0x0AB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentMarkingRadius;                                     // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	TArray<class AFortPawn*>                           WorkingList;                                              // 0x0AD8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                                CueOnMark;                                                // 0x0AE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkingDuration;                                          // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentMarkingDuration;                                   // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	struct FScalableFloat                              DisableMarkingPlayers;                                    // 0x0B18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Flopper_Battle_Marking.GA_Athena_Flopper_Battle_Marking_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void MarkEnemies_();
	void ExecuteUbergraph_GA_Athena_Flopper_Battle_Marking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
