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

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_UI_ScannerScreen_C::ErrorTimeline__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc");

	ABP_UI_ScannerScreen_C_ErrorTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_UI_ScannerScreen_C::ErrorTimeline__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc");

	ABP_UI_ScannerScreen_C_ErrorTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ScannerScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay");

	ABP_UI_ScannerScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ScannerScreen_C::ScreenEventError(bool Reverse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError");

	ABP_UI_ScannerScreen_C_ScreenEventError_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SuccessText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventSuccess(const struct FText& SuccessText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess");

	ABP_UI_ScannerScreen_C_ScreenEventSuccess_Params params;
	params.SuccessText = SuccessText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventFailure(const struct FText& FailureText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure");

	ABP_UI_ScannerScreen_C_ScreenEventFailure_Params params;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ScannerScreen_C::ScreenEventScan()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan");

	ABP_UI_ScannerScreen_C_ScreenEventScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ScannerScreen_C::ScreenEventDismiss()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss");

	ABP_UI_ScannerScreen_C_ScreenEventDismiss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LostText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ScannerScreen_C::ScreenEventTargetLost(const struct FText& LostText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost");

	ABP_UI_ScannerScreen_C_ScreenEventTargetLost_Params params;
	params.LostText = LostText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ScannerScreen_C::ExecuteUbergraph_BP_UI_ScannerScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen");

	ABP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
