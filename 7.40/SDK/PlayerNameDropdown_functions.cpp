#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PlayerNameDropdown.PlayerNameDropdown_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerNameDropdown_C::Destruct()
{
	static auto Func = Class->GetFunction("PlayerNameDropdown_C", "Destruct");

	Params::UPlayerNameDropdown_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerNameDropdown.PlayerNameDropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerNameDropdown_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerNameDropdown_C", "Construct");

	Params::UPlayerNameDropdown_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerNameDropdown.PlayerNameDropdown_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerNameDropdown_C::OnActivated()
{
	static auto Func = Class->GetFunction("PlayerNameDropdown_C", "OnActivated");

	Params::UPlayerNameDropdown_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerNameDropdown.PlayerNameDropdown_C.ExecuteUbergraph_PlayerNameDropdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUISubsystem*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameFeedbackBase*       K2Node_DynamicCast_AsFort_Game_Feedback_Base                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerNameInfoContainer    CallFunc_GetPlayerNameInfoContainer_ReturnValue                  (ConstParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerNameInfo             CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNameDropdown_C::ExecuteUbergraph_PlayerNameDropdown(int32 EntryPoint, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortGameFeedbackBase* K2Node_DynamicCast_AsFort_Game_Feedback_Base, bool K2Node_DynamicCast_bSuccess, const struct FPlayerNameInfoContainer& CallFunc_GetPlayerNameInfoContainer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPlayerNameInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerNameDropdown_C", "ExecuteUbergraph_PlayerNameDropdown");

	Params::UPlayerNameDropdown_C_ExecuteUbergraph_PlayerNameDropdown_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_Feedback_Base = K2Node_DynamicCast_AsFort_Game_Feedback_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerNameInfoContainer_ReturnValue = CallFunc_GetPlayerNameInfoContainer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
