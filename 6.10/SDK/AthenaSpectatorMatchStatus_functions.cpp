#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorMatchStatus_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "Construct");

	Params::UAthenaSpectatorMatchStatus_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateMatchTimeText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MatchTimeText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdateMatchTimeText(class FText& MatchTimeText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "UpdateMatchTimeText");

	Params::UAthenaSpectatorMatchStatus_C_UpdateMatchTimeText_Params Parms;
	Parms.MatchTimeText = MatchTimeText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateStormPhaseText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SafeZonePhaseTxt                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdateStormPhaseText(class FText& SafeZonePhaseTxt)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "UpdateStormPhaseText");

	Params::UAthenaSpectatorMatchStatus_C_UpdateStormPhaseText_Params Parms;
	Parms.SafeZonePhaseTxt = SafeZonePhaseTxt;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdatePlayerLocationText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewLocation                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdatePlayerLocationText(class FText& NewLocation)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "UpdatePlayerLocationText");

	Params::UAthenaSpectatorMatchStatus_C_UpdatePlayerLocationText_Params Parms;
	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MatchTimeText                                       (ConstParm)
// class FText                        K2Node_Event_SafeZonePhaseTxt                                    (ConstParm)
// class FText                        K2Node_Event_NewLocation                                         (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorMatchStatus_C::ExecuteUbergraph_AthenaSpectatorMatchStatus(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText K2Node_Event_MatchTimeText, class FText K2Node_Event_SafeZonePhaseTxt, class FText K2Node_Event_NewLocation, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "ExecuteUbergraph_AthenaSpectatorMatchStatus");

	Params::UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_MatchTimeText = K2Node_Event_MatchTimeText;
	Parms.K2Node_Event_SafeZonePhaseTxt = K2Node_Event_SafeZonePhaseTxt;
	Parms.K2Node_Event_NewLocation = K2Node_Event_NewLocation;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
