#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C.SetButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudLayoutToolVisibilityWidget_C::SetButtonStyle(class UCommonButton* Button, class UClass* Style, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("HudLayoutToolVisibilityWidget_C", "SetButtonStyle");

	Params::UHudLayoutToolVisibilityWidget_C_SetButtonStyle_Params Parms;
	Parms.Button = Button;
	Parms.Style = Style;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C.GetButtonStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBacchusHUDStateType    Vis_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Style                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBacchusHUDStateType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudLayoutToolVisibilityWidget_C::GetButtonStyle(enum class EBacchusHUDStateType Vis_Type, class UClass** Style, enum class EBacchusHUDStateType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HudLayoutToolVisibilityWidget_C", "GetButtonStyle");

	Params::UHudLayoutToolVisibilityWidget_C_GetButtonStyle_Params Parms;
	Parms.Vis_Type = Vis_Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (Style != nullptr)
		*Style = Parms.Style;

}

// Function HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHudLayoutToolVisibilityWidget_C::Construct()
{
	static auto Func = Class->GetFunction("HudLayoutToolVisibilityWidget_C", "Construct");

	Params::UHudLayoutToolVisibilityWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C.Refresh
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHudLayoutToolVisibilityWidget_C::Refresh()
{
	static auto Func = Class->GetFunction("HudLayoutToolVisibilityWidget_C", "Refresh");

	Params::UHudLayoutToolVisibilityWidget_C_Refresh_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C.ExecuteUbergraph_HudLayoutToolVisibilityWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBacchusHUDStateType    CallFunc_GetVisibilities_CombatVisibility                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBacchusHUDStateType    CallFunc_GetVisibilities_BuildVisibility                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBacchusHUDStateType    CallFunc_GetVisibilities_EditVisibility                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetButtonStyle_Style                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetButtonStyle_Style1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetButtonStyle_Style2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanEditVisibility_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudLayoutToolVisibilityWidget_C::ExecuteUbergraph_HudLayoutToolVisibilityWidget(int32 EntryPoint, enum class EBacchusHUDStateType CallFunc_GetVisibilities_CombatVisibility, enum class EBacchusHUDStateType CallFunc_GetVisibilities_BuildVisibility, enum class EBacchusHUDStateType CallFunc_GetVisibilities_EditVisibility, class UClass* CallFunc_GetButtonStyle_Style, class UClass* CallFunc_GetButtonStyle_Style1, class UClass* CallFunc_GetButtonStyle_Style2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEditVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("HudLayoutToolVisibilityWidget_C", "ExecuteUbergraph_HudLayoutToolVisibilityWidget");

	Params::UHudLayoutToolVisibilityWidget_C_ExecuteUbergraph_HudLayoutToolVisibilityWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVisibilities_CombatVisibility = CallFunc_GetVisibilities_CombatVisibility;
	Parms.CallFunc_GetVisibilities_BuildVisibility = CallFunc_GetVisibilities_BuildVisibility;
	Parms.CallFunc_GetVisibilities_EditVisibility = CallFunc_GetVisibilities_EditVisibility;
	Parms.CallFunc_GetButtonStyle_Style = CallFunc_GetButtonStyle_Style;
	Parms.CallFunc_GetButtonStyle_Style1 = CallFunc_GetButtonStyle_Style1;
	Parms.CallFunc_GetButtonStyle_Style2 = CallFunc_GetButtonStyle_Style2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanEditVisibility_ReturnValue = CallFunc_CanEditVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
