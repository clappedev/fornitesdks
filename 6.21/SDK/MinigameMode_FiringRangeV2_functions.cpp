#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayspaceManager*       CallFunc_GetPlayspaceManager_OutPlayspaceManager                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValidityResult         CallFunc_GetPlayspaceManager_OutIsValid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AController*>         CallFunc_GetAllPlayersInPlayspace_ReturnValue                    (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameMode_FiringRangeV2_C::GiftWeapons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayspaceManager* CallFunc_GetPlayspaceManager_OutPlayspaceManager, enum class EValidityResult CallFunc_GetPlayspaceManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInPlayspace_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput)
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "GiftWeapons");

	Params::AMinigameMode_FiringRangeV2_C_GiftWeapons_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayspaceManager_OutPlayspaceManager = CallFunc_GetPlayspaceManager_OutPlayspaceManager;
	Parms.CallFunc_GetPlayspaceManager_OutIsValid = CallFunc_GetPlayspaceManager_OutIsValid;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllPlayersInPlayspace_ReturnValue = CallFunc_GetAllPlayersInPlayspace_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "UserConstructionScript");

	Params::AMinigameMode_FiringRangeV2_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.Timer Expired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::Timer_Expired()
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "Timer Expired");

	Params::AMinigameMode_FiringRangeV2_C_Timer_Expired_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::HandleMinigameStarted()
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "HandleMinigameStarted");

	Params::AMinigameMode_FiringRangeV2_C_HandleMinigameStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::HandleMinigameEnded()
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "HandleMinigameEnded");

	Params::AMinigameMode_FiringRangeV2_C_HandleMinigameEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.K2_PreGameTransitionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_FiringRangeV2_C::K2_PreGameTransitionEvent()
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "K2_PreGameTransitionEvent");

	Params::AMinigameMode_FiringRangeV2_C_K2_PreGameTransitionEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AMinigameState_Generic_C*    K2Node_DynamicCast_AsMinigame_State_Generic                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameMode_FiringRangeV2_C::ExecuteUbergraph_MinigameMode_FiringRangeV2(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AMinigameState_Generic_C* K2Node_DynamicCast_AsMinigame_State_Generic, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "ExecuteUbergraph_MinigameMode_FiringRangeV2");

	Params::AMinigameMode_FiringRangeV2_C_ExecuteUbergraph_MinigameMode_FiringRangeV2_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsMinigame_State_Generic = K2Node_DynamicCast_AsMinigame_State_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
