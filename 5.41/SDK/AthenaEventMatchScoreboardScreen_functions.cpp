#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.GetScoreboardListView
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonListView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonListView* UAthenaEventMatchScoreboardScreen_C::GetScoreboardListView()
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "GetScoreboardListView");

	Params::UAthenaEventMatchScoreboardScreen_C_GetScoreboardListView_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.UpdateListUI
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UAthenaRemotePlayerViewData*>InPlayerDataArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaEventMatchScoreboardScreen_C::UpdateListUI(TArray<class UAthenaRemotePlayerViewData*>& InPlayerDataArray)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "UpdateListUI");

	Params::UAthenaEventMatchScoreboardScreen_C_UpdateListUI_Params Parms;
	Parms.InPlayerDataArray = InPlayerDataArray;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardScreen_C::SetTeamNumbersVisible(bool InVisible)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "SetTeamNumbersVisible");

	Params::UAthenaEventMatchScoreboardScreen_C_SetTeamNumbersVisible_Params Parms;
	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardScreen_C::SetEventScoreVisible(bool InVisible)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "SetEventScoreVisible");

	Params::UAthenaEventMatchScoreboardScreen_C_SetEventScoreVisible_Params Parms;
	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaRemotePlayerViewData*>K2Node_Event_InPlayerDataArray                                   (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_Event_InVisible1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardScreen_C::ExecuteUbergraph_AthenaEventMatchScoreboardScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, TArray<class UAthenaRemotePlayerViewData*>& K2Node_Event_InPlayerDataArray, bool K2Node_Event_InVisible1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_InVisible, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardScreen_C", "ExecuteUbergraph_AthenaEventMatchScoreboardScreen");

	Params::UAthenaEventMatchScoreboardScreen_C_ExecuteUbergraph_AthenaEventMatchScoreboardScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Event_InPlayerDataArray = K2Node_Event_InPlayerDataArray;
	Parms.K2Node_Event_InVisible1 = K2Node_Event_InVisible1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_InVisible = K2Node_Event_InVisible;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
