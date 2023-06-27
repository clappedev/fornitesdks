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

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MatchTimeText                                       (ConstParm)
// class FText                        K2Node_Event_SafeZonePhaseTxt                                    (ConstParm)

void UAthenaSpectatorMatchStatus_C::ExecuteUbergraph_AthenaSpectatorMatchStatus(int32 EntryPoint, class FText K2Node_Event_MatchTimeText, class FText K2Node_Event_SafeZonePhaseTxt)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "ExecuteUbergraph_AthenaSpectatorMatchStatus");

	Params::UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MatchTimeText = K2Node_Event_MatchTimeText;
	Parms.K2Node_Event_SafeZonePhaseTxt = K2Node_Event_SafeZonePhaseTxt;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
