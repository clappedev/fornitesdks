#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModeButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "PreConstruct");

	Params::UHUDLayoutToolFireModeButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolFireModeButton_C::BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");

	Params::UHUDLayoutToolFireModeButton_C_BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.ExecuteUbergraph_HUDLayoutToolFireModeButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModeButton_C::ExecuteUbergraph_HUDLayoutToolFireModeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "ExecuteUbergraph_HUDLayoutToolFireModeButton");

	Params::UHUDLayoutToolFireModeButton_C_ExecuteUbergraph_HUDLayoutToolFireModeButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
