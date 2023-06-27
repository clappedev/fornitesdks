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

// BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
// 0x0050 (0x0AF8 - 0x0AA8)
class UGA_Athena_TillLandFallDamageImmunity_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGameplayEffect*                             GE_FallDamageImmunity;                                    // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GEH_FallDamageImmunity;                                   // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Delay_PostLand;                                           // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Tag_SurfaceSwimming;                                      // 0x0AC4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_IgnoreApplication;                                     // 0x0AD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Tag_InVehicle;                                            // 0x0AF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C");
		
		return ptr;
	}


	void Added_3DBE819D4ED6A0A0909A7690321F9B09();
	void Added_15DBA1504E74C72F22BBCBAD8E3CD31E();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void CallEnd();
	void SetUpWaits();
	void SetUpBinds();
	void PawnLanded(const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
