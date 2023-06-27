#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function OnlineStatusPanel.OnlineStatusPanel_C.OnFocused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOnlineStatusPanel_C::OnFocused()
{
	static auto Func = Class->GetFunction("OnlineStatusPanel_C", "OnFocused");

	Params::UOnlineStatusPanel_C_OnFocused_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OnlineStatusPanel.OnlineStatusPanel_C.ExecuteUbergraph_OnlineStatusPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnlineStatusPanel_C::ExecuteUbergraph_OnlineStatusPanel(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("OnlineStatusPanel_C", "ExecuteUbergraph_OnlineStatusPanel");

	Params::UOnlineStatusPanel_C_ExecuteUbergraph_OnlineStatusPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
