#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UTabBrightnessOptions_C::Set_Default_Call_Out(class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Set Default Call Out");

	Params::UTabBrightnessOptions_C_Set_Default_Call_Out_Params Parms;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::Initialize_Data(class UFortSettingsContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Initialize Data");

	Params::UTabBrightnessOptions_C_Initialize_Data_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Construct");

	Params::UTabBrightnessOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "UpdateOptionsTab");

	Params::UTabBrightnessOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "CenterOnTab");

	Params::UTabBrightnessOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabBrightnessOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Setting_Value_Changed()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Setting Value Changed");

	Params::UTabBrightnessOptions_C_Setting_Value_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::UTabBrightnessOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuSetting*     K2Node_DynamicCast_AsFort_Options_Menu_Setting                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuSetting*     K2Node_DynamicCast_AsFort_Options_Menu_Setting1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "ExecuteUbergraph_TabBrightnessOptions");

	Params::UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Setting = K2Node_DynamicCast_AsFort_Options_Menu_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget1 = K2Node_ComponentBoundEvent_Widget1;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Setting1 = K2Node_DynamicCast_AsFort_Options_Menu_Setting1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
