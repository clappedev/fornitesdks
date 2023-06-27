#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.GiveWood
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
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_BuildTheStructure_C::GiveWood(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayspaceManager* CallFunc_GetPlayspaceManager_OutPlayspaceManager, enum class EValidityResult CallFunc_GetPlayspaceManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInPlayspace_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameMode_BuildTheStructure_C", "GiveWood");

	Params::AMinigameMode_BuildTheStructure_C_GiveWood_Params Parms;
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
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_BuildTheStructure_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("MinigameMode_BuildTheStructure_C", "UserConstructionScript");

	Params::AMinigameMode_BuildTheStructure_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.K2_PreGameTransitionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_BuildTheStructure_C::K2_PreGameTransitionEvent()
{
	static auto Func = Class->GetFunction("MinigameMode_BuildTheStructure_C", "K2_PreGameTransitionEvent");

	Params::AMinigameMode_BuildTheStructure_C_K2_PreGameTransitionEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.ExecuteUbergraph_MinigameMode_BuildTheStructure
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_BuildTheStructure_C::ExecuteUbergraph_MinigameMode_BuildTheStructure(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MinigameMode_BuildTheStructure_C", "ExecuteUbergraph_MinigameMode_BuildTheStructure");

	Params::AMinigameMode_BuildTheStructure_C_ExecuteUbergraph_MinigameMode_BuildTheStructure_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
