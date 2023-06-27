#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonLevelFreeRewardsWidget_C::UpdateStyling(float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, const struct FLinearColor& K2Node_Select_Default, float K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "UpdateStyling");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue1 = CallFunc_MakeColor_ReturnValue1;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue = CallFunc_IsFreeUnlocked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonLevelFreeRewardsWidget_C::OnSetup()
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "OnSetup");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_OnSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               FreeUnlocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PaidUnlocked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonLevelFreeRewardsWidget_C::OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "OnLockedStatusChanged");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged_Params Parms;
	Parms.FreeUnlocked = FreeUnlocked;
	Parms.PaidUnlocked = PaidUnlocked;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.PlayIntro
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonLevelFreeRewardsWidget_C::PlayIntro()
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "PlayIntro");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonReward_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetRewardItems_ReturnValue                              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsFreeClaimed_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeClaimed_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FreeUnlocked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PaidUnlocked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSeasonReward_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonReward_C*       CallFunc_Array_Get_Item12                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CallFunc_GetLevelInfo_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeClaimed_ReturnValue12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeUnlocked_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeClaimed_ReturnValue123                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)

void UAthenaSeasonLevelFreeRewardsWidget_C::ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue1, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_IsFreeUnlocked_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Array_Index_Variable12, class UFortItem* CallFunc_Array_Get_Item1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool K2Node_Event_FreeUnlocked, bool K2Node_Event_PaidUnlocked, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item12, int32 CallFunc_Array_Length_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 Temp_int_Loop_Counter_Variable12, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue12, bool CallFunc_IsFreeClaimed_ReturnValue12, bool CallFunc_IsFreeUnlocked_ReturnValue1, bool CallFunc_IsFreeClaimed_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue12, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("AthenaSeasonLevelFreeRewardsWidget_C", "ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget");

	Params::UAthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLevelInfo_ReturnValue = CallFunc_GetLevelInfo_ReturnValue;
	Parms.CallFunc_GetLevelInfo_ReturnValue1 = CallFunc_GetLevelInfo_ReturnValue1;
	Parms.CallFunc_GetRewardItems_ReturnValue = CallFunc_GetRewardItems_ReturnValue;
	Parms.CallFunc_IsFreeClaimed_ReturnValue = CallFunc_IsFreeClaimed_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue = CallFunc_IsFreeUnlocked_ReturnValue;
	Parms.CallFunc_IsFreeClaimed_ReturnValue1 = CallFunc_IsFreeClaimed_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.Temp_int_Array_Index_Variable12 = Temp_int_Array_Index_Variable12;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_Event_FreeUnlocked = K2Node_Event_FreeUnlocked;
	Parms.K2Node_Event_PaidUnlocked = K2Node_Event_PaidUnlocked;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable12 = Temp_int_Loop_Counter_Variable12;
	Parms.CallFunc_GetLevelInfo_ReturnValue12 = CallFunc_GetLevelInfo_ReturnValue12;
	Parms.CallFunc_IsFreeClaimed_ReturnValue12 = CallFunc_IsFreeClaimed_ReturnValue12;
	Parms.CallFunc_IsFreeUnlocked_ReturnValue1 = CallFunc_IsFreeUnlocked_ReturnValue1;
	Parms.CallFunc_IsFreeClaimed_ReturnValue123 = CallFunc_IsFreeClaimed_ReturnValue123;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
