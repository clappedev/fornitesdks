#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function UserActionMenu.UserActionMenu_C.HandleOnlineIndicatorView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnlineStatus           OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineStatus           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnlineStatus           Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            ()
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserActionMenu_C::HandleOnlineIndicatorView(enum class EOnlineStatus OnlineStatus, enum class EOnlineStatus Temp_byte_Variable, enum class EOnlineStatus Temp_byte_Variable1, const struct FSlateColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "HandleOnlineIndicatorView");

	Params::UUserActionMenu_C_HandleOnlineIndicatorView_Params Parms;
	Parms.OnlineStatus = OnlineStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function UserActionMenu.UserActionMenu_C.OnSocialContextSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUserActionMenu_C::OnSocialContextSet()
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "OnSocialContextSet");

	Params::UUserActionMenu_C_OnSocialContextSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "OnToggleConfirmation");

	Params::UUserActionMenu_C_OnToggleConfirmation_Params Parms;
	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function UserActionMenu.UserActionMenu_C.OnUserPresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EOnlineStatus           OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserActionMenu_C::OnUserPresenceChanged(enum class EOnlineStatus OnlineStatus)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "OnUserPresenceChanged");

	Params::UUserActionMenu_C_OnUserPresenceChanged_Params Parms;
	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFirstEntryToCenter_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetNavigationManager_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisible                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOnlineStatus           K2Node_Event_OnlineStatus                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFirstEntryToCenter_ReturnValue1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUserActionMenu_C::ExecuteUbergraph_UserActionMenu(int32 EntryPoint, class UWidget* CallFunc_GetFirstEntryToCenter_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetNavigationManager_ReturnValue, bool K2Node_Event_bIsVisible, enum class EOnlineStatus K2Node_Event_OnlineStatus, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetFirstEntryToCenter_ReturnValue1, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("UserActionMenu_C", "ExecuteUbergraph_UserActionMenu");

	Params::UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstEntryToCenter_ReturnValue = CallFunc_GetFirstEntryToCenter_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetNavigationManager_ReturnValue = CallFunc_GetNavigationManager_ReturnValue;
	Parms.K2Node_Event_bIsVisible = K2Node_Event_bIsVisible;
	Parms.K2Node_Event_OnlineStatus = K2Node_Event_OnlineStatus;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetFirstEntryToCenter_ReturnValue1 = CallFunc_GetFirstEntryToCenter_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
