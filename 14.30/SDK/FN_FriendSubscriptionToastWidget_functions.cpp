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

// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendSubscriptionToastWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Construct");

	UFriendSubscriptionToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendSubscriptionToastWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.PreConstruct");

	UFriendSubscriptionToastWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UFriendSubscriptionToastWidget_C::Popup_Animation_Finished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Popup Animation Finished");

	UFriendSubscriptionToastWidget_C_Popup_Animation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UFriendSubscriptionToastWidget_C::OnPlayOpenAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayOpenAnimation");

	UFriendSubscriptionToastWidget_C_OnPlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)

void UFriendSubscriptionToastWidget_C::OnPlayCloseAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayCloseAnimation");

	UFriendSubscriptionToastWidget_C_OnPlayCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.ExecuteUbergraph_FriendSubscriptionToastWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendSubscriptionToastWidget_C::ExecuteUbergraph_FriendSubscriptionToastWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.ExecuteUbergraph_FriendSubscriptionToastWidget");

	UFriendSubscriptionToastWidget_C_ExecuteUbergraph_FriendSubscriptionToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
