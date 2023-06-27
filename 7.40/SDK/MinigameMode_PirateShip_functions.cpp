#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GetStartQueryForPlayer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           ReturnValue                                                      (Parm, OutParm, ReturnParm)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorPvPTeamIndex_TeamIndex                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorPvPTeamIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagQuery           Temp_struct_Variable                                             ()
// struct FGameplayTagQuery           Temp_struct_Variable1                                            ()
// struct FGameplayTagQuery           Temp_struct_Variable2                                            ()
// struct FGameplayTagQuery           Temp_struct_Variable3                                            ()
// struct FGameplayTagQuery           K2Node_Select_Default                                            ()

struct FGameplayTagQuery AMinigameMode_PirateShip_C::GetStartQueryForPlayer(class APlayerState* Player, uint8 Temp_byte_Variable, uint8 CallFunc_GetActorPvPTeamIndex_TeamIndex, bool CallFunc_GetActorPvPTeamIndex_ReturnValue, const struct FGameplayTagQuery& Temp_struct_Variable, const struct FGameplayTagQuery& Temp_struct_Variable1, const struct FGameplayTagQuery& Temp_struct_Variable2, const struct FGameplayTagQuery& Temp_struct_Variable3, const struct FGameplayTagQuery& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MinigameMode_PirateShip_C", "GetStartQueryForPlayer");

	Params::AMinigameMode_PirateShip_C_GetStartQueryForPlayer_Params Parms;
	Parms.Player = Player;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetActorPvPTeamIndex_TeamIndex = CallFunc_GetActorPvPTeamIndex_TeamIndex;
	Parms.CallFunc_GetActorPvPTeamIndex_ReturnValue = CallFunc_GetActorPvPTeamIndex_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_PirateShip_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("MinigameMode_PirateShip_C", "UserConstructionScript");

	Params::AMinigameMode_PirateShip_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GiveStartingWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_PirateShip_C::GiveStartingWeapon()
{
	static auto Func = Class->GetFunction("MinigameMode_PirateShip_C", "GiveStartingWeapon");

	Params::AMinigameMode_PirateShip_C_GiveStartingWeapon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.ExecuteUbergraph_MinigameMode_PirateShip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AController*>         CallFunc_GetAllPlayersInVolume_ReturnValue                       (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipBestWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameMode_PirateShip_C::ExecuteUbergraph_MinigameMode_PirateShip(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable2, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortWorldItemDefinition* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue2, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EquipBestWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameMode_PirateShip_C", "ExecuteUbergraph_MinigameMode_PirateShip");

	Params::AMinigameMode_PirateShip_C_ExecuteUbergraph_MinigameMode_PirateShip_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_GetAllPlayersInVolume_ReturnValue = CallFunc_GetAllPlayersInVolume_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_EquipBestWeapon_ReturnValue = CallFunc_EquipBestWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
