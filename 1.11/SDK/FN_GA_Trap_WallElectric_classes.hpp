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

// BlueprintGeneratedClass GA_Trap_WallElectric.GA_Trap_WallElectric_C
// 0x001C (0x0AFC - 0x0AE0)
class UGA_Trap_WallElectric_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              HitActors;                                                // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                targetCount;                                              // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_WallElectric.GA_Trap_WallElectric_C");
		return ptr;
	}


	void Cancelled_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Trap_WallElectric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
