#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTopBarTabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "OnCurrentTextStyleChanged");

	Params::UTopBarTabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarTabButton.TopBarTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarTabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "PreConstruct");

	Params::UTopBarTabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarTabButton.TopBarTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarTabButton_C::Construct()
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "Construct");

	Params::UTopBarTabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarTabButton.TopBarTabButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarTabButton_C::OnInitialized()
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "OnInitialized");

	Params::UTopBarTabButton_C_OnInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarTabButton_C::OnSelectedChangedEvent(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "OnSelectedChangedEvent");

	Params::UTopBarTabButton_C_OnSelectedChangedEvent_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNormalBangWrapper_C*        K2Node_DynamicCast_AsNormal_Bang_Wrapper                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   ()

void UTopBarTabButton_C::ExecuteUbergraph_TopBarTabButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobileGame_ReturnValue, class UNormalBangWrapper_C* K2Node_DynamicCast_AsNormal_Bang_Wrapper, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default, class UCommonButton* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static auto Func = Class->GetFunction("TopBarTabButton_C", "ExecuteUbergraph_TopBarTabButton");

	Params::UTopBarTabButton_C_ExecuteUbergraph_TopBarTabButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_DynamicCast_AsNormal_Bang_Wrapper = K2Node_DynamicCast_AsNormal_Bang_Wrapper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
