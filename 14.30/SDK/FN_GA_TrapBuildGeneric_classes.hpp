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

// BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
// 0x0010 (0x0AB8 - 0x0AA8)
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                PlacedCue;                                                // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapBuildGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
