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

// BlueprintGeneratedClass GA_Athena_LowGravity_FallDamageImmunity_UsingJump.GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C
// 0x001F (0x0AD8 - 0x0AB9)
class UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DelayToWaitForGrantedTags;                                // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayToPreventFallDamage;                                 // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_LowGravity_FallDamageImmunity_UsingJump.GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C");
		
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity_UsingJump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
