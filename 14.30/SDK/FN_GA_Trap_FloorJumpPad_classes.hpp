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

// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// 0x0050 (0x0B28 - 0x0AD8)
class UGA_Trap_FloorJumpPad_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerJumping;                                            // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_LaunchTag;                                             // 0x0AE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingTargets;                                       // 0x0AF0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0B00(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C");
		
		return ptr;
	}


	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void PlayPlayerFX(class AFortPlayerPawn* Player);
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
