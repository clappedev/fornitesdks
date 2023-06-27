#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.HandleOnlineIndicatorView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnlineStatus           OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineStatus           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInviteListEntry_PartyInvite_XS1_C::HandleOnlineIndicatorView(enum class EOnlineStatus OnlineStatus, enum class EOnlineStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "HandleOnlineIndicatorView");

	Params::UInviteListEntry_PartyInvite_XS1_C_HandleOnlineIndicatorView_Params Parms;
	Parms.OnlineStatus = OnlineStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInviteListEntry_PartyInvite_XS1_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BP_OnHovered");

	Params::UInviteListEntry_PartyInvite_XS1_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInviteListEntry_PartyInvite_XS1_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BP_OnUnhovered");

	Params::UInviteListEntry_PartyInvite_XS1_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInviteListEntry_PartyInvite_XS1_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UInviteListEntry_PartyInvite_XS1_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;
	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InviteListEntry_PartyInvite_XS1.InviteListEntry_PartyInvite_XS1_C.ExecuteUbergraph_InviteListEntry_PartyInvite_XS1
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInviteListEntry_PartyInvite_XS1_C::ExecuteUbergraph_InviteListEntry_PartyInvite_XS1(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen)
{
	static auto Func = Class->GetFunction("InviteListEntry_PartyInvite_XS1_C", "ExecuteUbergraph_InviteListEntry_PartyInvite_XS1");

	Params::UInviteListEntry_PartyInvite_XS1_C_ExecuteUbergraph_InviteListEntry_PartyInvite_XS1_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
