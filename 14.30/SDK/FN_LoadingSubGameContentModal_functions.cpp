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

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadingSubGameContentModal_C::OnUpdatedProgress(float Percent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress");

	ULoadingSubGameContentModal_C_OnUpdatedProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingSubGameContentModal_C::OnInitialized()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized");

	ULoadingSubGameContentModal_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoadingSubGameContentModal_C::SetCancelButtonText(const struct FText& InText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText");

	ULoadingSubGameContentModal_C_SetCancelButtonText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void ULoadingSubGameContentModal_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated");

	ULoadingSubGameContentModal_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadingSubGameContentModal_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished");

	ULoadingSubGameContentModal_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadingSubGameContentModal_C::ExecuteUbergraph_LoadingSubGameContentModal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal");

	ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
