// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Credits.Credits_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UCredits_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.Reset");

	UCredits_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.CaptureEndPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UCredits_C::CaptureEndPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.CaptureEndPoint");

	UCredits_C_CaptureEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ScrollCredits
// (Public, BlueprintCallable, BlueprintEvent)

void UCredits_C::ScrollCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ScrollCredits");

	UCredits_C_ScrollCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ToggleScrollTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableTimer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCredits_C::ToggleScrollTimer(bool EnableTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ToggleScrollTimer");

	UCredits_C_ToggleScrollTimer_Params params;
	params.EnableTimer = EnableTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCredits_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.HandleBack");

	UCredits_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function Credits.Credits_C.HandleFadeInFinished
// (BlueprintCallable, BlueprintEvent)

void UCredits_C::HandleFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.HandleFadeInFinished");

	UCredits_C_HandleFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCredits_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.OnDeactivated");

	UCredits_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCredits_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.OnActivated");

	UCredits_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.Construct");

	UCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Credits.Credits_C.ExecuteUbergraph_Credits
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCredits_C::ExecuteUbergraph_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Credits.Credits_C.ExecuteUbergraph_Credits");

	UCredits_C_ExecuteUbergraph_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
