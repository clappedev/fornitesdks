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

// Class HydrogenUI.HydrogenWidgetBase
// 0x0008 (0x0320 - 0x0318)
class UHydrogenWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Hydrogen*                 CachedHydrogenMutator;                                    // 0x0318(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HydrogenUI.HydrogenWidgetBase");
		
		return ptr;
	}


	void OnMutatorAvailable(class AFortGameplayMutator* MutatorActor);
	void MutatorReady(class AFortAthenaMutator_Hydrogen* MutatorActor);
	class AFortAthenaMutator_Hydrogen* GetHydrogenMutator();
	float GetCaptureProgressPercent(class AHydrogenObjectiveActor* InObjective);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
