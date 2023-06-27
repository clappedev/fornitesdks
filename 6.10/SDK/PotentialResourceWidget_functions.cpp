#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PotentialResourceWidget.PotentialResourceWidget_C.ShowPotentialResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   PotentialResource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWeakpointDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPotentialResourceWidget_C::ShowPotentialResource(class UFortItem* PotentialResource, bool bWeakpointDamage, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "ShowPotentialResource");

	Params::UPotentialResourceWidget_C_ShowPotentialResource_Params Parms;
	Parms.PotentialResource = PotentialResource;
	Parms.bWeakpointDamage = bWeakpointDamage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.SetupFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              TempFont                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPotentialResourceWidget_C::SetupFont(const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, bool Temp_bool_Variable1, class UObject* K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool Temp_bool_Variable2, int32 K2Node_Select1_Default, class UWidgetAnimation* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "SetupFont");

	Params::UPotentialResourceWidget_C_SetupFont_Params Parms;
	Parms.TempFont = TempFont;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.GetResourceCountAsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Resource                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UPotentialResourceWidget_C::GetResourceCountAsText(class UFortItem* Resource, class FText* Result, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "GetResourceCountAsText");

	Params::UPotentialResourceWidget_C_GetResourceCountAsText_Params Parms;
	Parms.Resource = Resource;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function PotentialResourceWidget.PotentialResourceWidget_C.UpdateResourceCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetResourceCountAsText_Result                           ()

void UPotentialResourceWidget_C::UpdateResourceCountText(class FText CallFunc_GetResourceCountAsText_Result)
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "UpdateResourceCountText");

	Params::UPotentialResourceWidget_C_UpdateResourceCountText_Params Parms;
	Parms.CallFunc_GetResourceCountAsText_Result = CallFunc_GetResourceCountAsText_Result;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPotentialResourceWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "Construct");

	Params::UPotentialResourceWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.HandleTranslateAndFadeUpFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialResourceWidget_C::HandleTranslateAndFadeUpFinished()
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "HandleTranslateAndFadeUpFinished");

	Params::UPotentialResourceWidget_C_HandleTranslateAndFadeUpFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.ExecuteUbergraph_PotentialResourceWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UPotentialResourceWidget_C::ExecuteUbergraph_PotentialResourceWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "ExecuteUbergraph_PotentialResourceWidget");

	Params::UPotentialResourceWidget_C_ExecuteUbergraph_PotentialResourceWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PotentialResourceWidget.PotentialResourceWidget_C.FinishedShowing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPotentialResourceWidget_C::FinishedShowing__DelegateSignature()
{
	static auto Func = Class->GetFunction("PotentialResourceWidget_C", "FinishedShowing__DelegateSignature");

	Params::UPotentialResourceWidget_C_FinishedShowing__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
