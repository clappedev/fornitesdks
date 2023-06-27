#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Construct()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Construct");

	Params::UHUDLayoutToolButtonLayer_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Opened Tool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Opened_Tool()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Opened Tool");

	Params::UHUDLayoutToolButtonLayer_C_Opened_Tool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UHUDLayoutToolButtonLayer_C_BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Start Peek
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Start_Peek()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Start Peek");

	Params::UHUDLayoutToolButtonLayer_C_Start_Peek_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.End Peek
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::End_Peek()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "End Peek");

	Params::UHUDLayoutToolButtonLayer_C_End_Peek_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSavedLayout_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasSeenPanningTip_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolButtonLayer_C::ExecuteUbergraph_HUDLayoutToolButtonLayer(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_HasSavedLayout_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_GetHasSeenPanningTip_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue1)
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "ExecuteUbergraph_HUDLayoutToolButtonLayer");

	Params::UHUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_HasSavedLayout_ReturnValue = CallFunc_HasSavedLayout_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_GetHasSeenPanningTip_ReturnValue = CallFunc_GetHasSeenPanningTip_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue1 = CallFunc_GetFortGameUserSettings_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
