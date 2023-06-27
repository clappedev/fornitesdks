#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsReadyForMatchmaking                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberPedestal_Nameplate_C::OnReadyStatusChanged(bool bIsReadyForMatchmaking)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnReadyStatusChanged");

	Params::UTeamMemberPedestal_Nameplate_C_OnReadyStatusChanged_Params Parms;
	Parms.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnTeamMemberEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::OnTeamMemberEstablished(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnTeamMemberEstablished");

	Params::UTeamMemberPedestal_Nameplate_C_OnTeamMemberEstablished_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_Nameplate_C::Construct()
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "Construct");

	Params::UTeamMemberPedestal_Nameplate_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndCamera         NewCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         OldCamera                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "OnFrontEndCameraChanged");

	Params::UTeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged_Params Parms;
	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsReadyForMatchmaking                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_Event_UniqueId                                            (ConstParm, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_NewCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_CustomEvent_OldCamera                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_C::ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_Event_bIsReadyForMatchmaking, enum class ESlateVisibility K2Node_Select_Default, const struct FUniqueNetIdRepl& K2Node_Event_UniqueId, enum class ESlateVisibility K2Node_Select1_Default, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool Temp_bool_Variable3, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UWidgetAnimation* K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_Nameplate_C", "ExecuteUbergraph_TeamMemberPedestal_Nameplate");

	Params::UTeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Event_bIsReadyForMatchmaking = K2Node_Event_bIsReadyForMatchmaking;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_UniqueId = K2Node_Event_UniqueId;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CustomEvent_NewCamera = K2Node_CustomEvent_NewCamera;
	Parms.K2Node_CustomEvent_OldCamera = K2Node_CustomEvent_OldCamera;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
