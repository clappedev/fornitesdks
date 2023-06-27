#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2C (0x6E8 - 0x6BC)
// BlueprintGeneratedClass MinigameMode_PirateShip.MinigameMode_PirateShip_C
class AMinigameMode_PirateShip_C : public AMinigameMode_Skirmish_C
{
public:
	uint8                                        Pad_34F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UFortWorldItemDefinition*>      Pirate_Ship_Weapons;                               // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>      Pirate_Ship_Ammo;                                  // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_PirateShip_C");
		return Clss;
	}

	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
	void GiveStartingWeapon();
	void ExecuteUbergraph_MinigameMode_PirateShip(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable2, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortWorldItemDefinition* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue2, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EquipBestWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
