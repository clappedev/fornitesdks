#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x910 - 0x8F0)
// BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C
class UGA_Athena_ShockGrenade_RemoveFX_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Looping_GC;                                        // 0x900(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Player_Landing_GC;                                 // 0x908(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ShockGrenade_RemoveFX_C");
		return Clss;
	}

	void OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(enum class EMovementMode NewMovementMode);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int32 EntryPoint, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMovementMode Temp_byte_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
