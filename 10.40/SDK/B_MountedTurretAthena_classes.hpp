#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xEF8 - 0xEE8)
// BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C
class AB_MountedTurretAthena_C : public AB_Ranged_Dual_Generic_MountedTurret_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          SnowmanCue;                                        // 0xEF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_MountedTurretAthena_C");
		return Clss;
	}

	void OnHostVehicleSetup();
	void ServerMountedTurretSnowmanCheck();
	void K2_OnUnEquip();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_MountedTurretAthena(int32 EntryPoint, class USkeletalMeshComponentBudgeted* CallFunc_GetLeftHandWeaponMesh_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class ABuildingGameplayActorBalloon* K2Node_DynamicCast_AsBuilding_Gameplay_Actor_Balloon, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABuildingGameplayActorBalloon* K2Node_DynamicCast_AsBuilding_Gameplay_Actor_Balloon_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess_3, class AB_SneakySnowman_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
