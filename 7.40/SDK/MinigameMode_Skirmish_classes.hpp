#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C (0x6F4 - 0x6D8)
// BlueprintGeneratedClass MinigameMode_Skirmish.MinigameMode_Skirmish_C
class AMinigameMode_Skirmish_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*              StartingWeapon;                                    // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              StartingAmmo;                                      // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartingAmmoAmmount;                               // 0x6F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_Skirmish_C");
		return Clss;
	}

	void GiveStartingWeapon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, class AController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EquipBestWeapon_ReturnValue, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput);
	void SetSinglePlayerToStart(class AFortPlayerController* Player, class AActor* CallFunc_ChoosePlayerStart_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_K2_TeleportTo_ReturnValue);
	void SetPlayerPositionToStart(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void ExecuteUbergraph_MinigameMode_Skirmish(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
