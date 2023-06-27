#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookUnslotWidget_C", "Close");

	Params::UCollectionBookUnslotWidget_C_Close_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::Init(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("CollectionBookUnslotWidget_C", "Init");

	Params::UCollectionBookUnslotWidget_C_Init_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CollectionBookUnslotWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	Params::UCollectionBookUnslotWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookUnslotWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("CollectionBookUnslotWidget_C", "OnActivated");

	Params::UCollectionBookUnslotWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.ExecuteUbergraph_CollectionBookUnslotWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::ExecuteUbergraph_CollectionBookUnslotWidget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("CollectionBookUnslotWidget_C", "ExecuteUbergraph_CollectionBookUnslotWidget");

	Params::UCollectionBookUnslotWidget_C_ExecuteUbergraph_CollectionBookUnslotWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
