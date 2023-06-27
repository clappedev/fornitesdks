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

// Function LatencyUI.LatencyWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)

void ULatencyWidget::StopTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LatencyUI.LatencyWidget.StopTimer");

	ULatencyWidget_StopTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LatencyUI.LatencyWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)

void ULatencyWidget::StartTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LatencyUI.LatencyWidget.StartTimer");

	ULatencyWidget_StartTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
