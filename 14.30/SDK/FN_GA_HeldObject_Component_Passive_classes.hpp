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

// BlueprintGeneratedClass GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C
// 0x0044 (0x0AEC - 0x0AA8)
class UGA_HeldObject_Component_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       T_StatusHeldObject;                                       // 0x0AB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_HeldObjectPassive;                                     // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_DanceStunned;                                           // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DanceDropDelay;                                           // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_ForceDrop;                                          // 0x0AE4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C");
		
		return ptr;
	}


	void Added_EB79E5C3467383D5FAE134978A7BDE59();
	void EventReceived_DD24550D4856E973AC41D9BDAECD0498(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void DropHeldObject();
	void ExecuteUbergraph_GA_HeldObject_Component_Passive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
