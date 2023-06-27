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

// BlueprintGeneratedClass GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
// 0x0028 (0x0AD0 - 0x0AA8)
class UGA_Athena_HidingProp_HidingInProp_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0AB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void GrapplerFailSafe();
	void ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
