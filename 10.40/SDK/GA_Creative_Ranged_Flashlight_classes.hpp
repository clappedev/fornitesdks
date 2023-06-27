#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x14 (0x9AC - 0x998)
// BlueprintGeneratedClass GA_Creative_Ranged_Flashlight.GA_Creative_Ranged_Flashlight_C
class UGA_Creative_Ranged_Flashlight_C : public UGAT_Creative_CreativeRangedWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x998(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bToggleOn;                                         // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5527[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CUETAG_FlashLightToggled;                          // 0x9A4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Creative_Ranged_Flashlight_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Creative_Ranged_Flashlight(int32 EntryPoint, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
