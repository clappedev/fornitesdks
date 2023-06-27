// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCStatusWidget.NPCStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNPCStatusWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.Construct");

	UNPCStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidget_C::EventUpdateStatus(float Health)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus");

	UNPCStatusWidget_C_EventUpdateStatus_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus
// (BlueprintCallable, BlueprintEvent)

void UNPCStatusWidget_C::EventHideStatus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus");

	UNPCStatusWidget_C_EventHideStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StatusWidgetVisibleDuration    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidget_C::ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration");

	UNPCStatusWidget_C_ChangeWidgetVisibleDuration_Params params;
	params.StatusWidgetVisibleDuration = StatusWidgetVisibleDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidget_C::ExecuteUbergraph_NPCStatusWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget");

	UNPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidget_C::VisibilityChanged__DelegateSignature(bool bVisible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature");

	UNPCStatusWidget_C_VisibilityChanged__DelegateSignature_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
