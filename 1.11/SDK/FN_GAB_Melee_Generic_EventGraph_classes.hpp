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

// BlueprintGeneratedClass GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C
// 0x0014 (0x0AC4 - 0x0AB0)
class UGAB_Melee_Generic_EventGraph_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	bool                                               Stamina_Lockout;                                          // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0ABA(0x0002) MISSED OFFSET
	int                                                DebugSpecificHitNumber;                                   // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Counter;                                                  // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C");
		return ptr;
	}


	void Completed_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
