#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x920 - 0x910)
// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_Equip_C");
		return Clss;
	}

	class UFortItem* GetGadgetItem(class AFortPlayerPawn* Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerControllerZone* CallFunc_GetPlayerController_AsFort_Player_Controller_Zone, class UFortItem* CallFunc_K2_GetInventoryItemWithGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void IsAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* LocalPlayerPawn, const struct FGameplayTagContainer& ErrorReasonGamepad, const struct FGameplayTagContainer& ErrorReason);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
