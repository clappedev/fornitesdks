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

// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// 0x0018 (0x0C58 - 0x0C40)
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                FadeCapsuleStWCue;                                        // 0x0C48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                FadeCapsuleAthenaCue;                                     // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
		
		return ptr;
	}


	void PickDeathMontageSection();
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
