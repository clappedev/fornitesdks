#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetChangeIconColorWhenSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeColorWhenSelected                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SelectedColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 UnselectedColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            ()

void UIconTabButtonReplay_C::SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor, bool Temp_bool_Variable, bool CallFunc_GetSelected_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "SetChangeIconColorWhenSelected");

	Params::UIconTabButtonReplay_C_SetChangeIconColorWhenSelected_Params Parms;
	Parms.ChangeColorWhenSelected = ChangeColorWhenSelected;
	Parms.SelectedColor = SelectedColor;
	Parms.UnselectedColor = UnselectedColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBangEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::Update_Bang_State(bool bBangEnabled, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "Update Bang State");

	Params::UIconTabButtonReplay_C_Update_Bang_State_Params Parms;
	Parms.bBangEnabled = bBangEnabled;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButtonReplay_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "SetTutorialBorderStyle");

	Params::UIconTabButtonReplay_C_SetTutorialBorderStyle_Params Parms;
	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::ShowText()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "ShowText");

	Params::UIconTabButtonReplay_C_ShowText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButtonReplay_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "Set Icon");

	Params::UIconTabButtonReplay_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButtonReplay_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "Set Text");

	Params::UIconTabButtonReplay_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "PreConstruct");

	Params::UIconTabButtonReplay_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTabButtonReplay_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "SetTabLabelInfo");

	Params::UIconTabButtonReplay_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnSelected()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnSelected");

	Params::UIconTabButtonReplay_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnDeselected()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnDeselected");

	Params::UIconTabButtonReplay_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::Construct()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "Construct");

	Params::UIconTabButtonReplay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnHovered()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnHovered");

	Params::UIconTabButtonReplay_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnUnhovered");

	Params::UIconTabButtonReplay_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnEnabled()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnEnabled");

	Params::UIconTabButtonReplay_C_OnEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnDisabled()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnDisabled");

	Params::UIconTabButtonReplay_C_OnDisabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "OnCurrentTextStyleChanged");

	Params::UIconTabButtonReplay_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function IconTabButtonReplay.IconTabButtonReplay_C.ExecuteUbergraph_IconTabButtonReplay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// bool                               CallFunc_GetSelected_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::ExecuteUbergraph_IconTabButtonReplay(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, bool CallFunc_GetSelected_ReturnValue12)
{
	static auto Func = Class->GetFunction("IconTabButtonReplay_C", "ExecuteUbergraph_IconTabButtonReplay");

	Params::UIconTabButtonReplay_C_ExecuteUbergraph_IconTabButtonReplay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.CallFunc_GetSelected_ReturnValue12 = CallFunc_GetSelected_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
