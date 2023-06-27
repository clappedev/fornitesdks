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

// Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ScreenText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventFail(const struct FText& ScreenText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail");

	UUI_ScannerScreen_C_EventFail_Params params;
	params.ScreenText = ScreenText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ScreenText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventSuccess(const struct FText& ScreenText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess");

	UUI_ScannerScreen_C_EventSuccess_Params params;
	params.ScreenText = ScreenText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning
// (BlueprintCallable, BlueprintEvent)

void UUI_ScannerScreen_C::EventScanning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning");

	UUI_ScannerScreen_C_EventScanning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ScreenText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ScannerScreen_C::EventTargetLost(const struct FText& ScreenText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost");

	UUI_ScannerScreen_C_EventTargetLost_Params params;
	params.ScreenText = ScreenText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScannerScreen_C::ExecuteUbergraph_UI_ScannerScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen");

	UUI_ScannerScreen_C_ExecuteUbergraph_UI_ScannerScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
