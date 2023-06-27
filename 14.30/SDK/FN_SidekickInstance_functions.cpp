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

// Function SidekickInstance.SidekickInstance_C.OnVideoDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bDisabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USidekickInstance_C::OnVideoDisabled(bool bDisabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SidekickInstance.SidekickInstance_C.OnVideoDisabled");

	USidekickInstance_C_OnVideoDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SidekickInstance.SidekickInstance_C.OnVideoPaused
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USidekickInstance_C::OnVideoPaused(bool bPaused)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SidekickInstance.SidekickInstance_C.OnVideoPaused");

	USidekickInstance_C_OnVideoPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SidekickInstance.SidekickInstance_C.ExecuteUbergraph_SidekickInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USidekickInstance_C::ExecuteUbergraph_SidekickInstance(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SidekickInstance.SidekickInstance_C.ExecuteUbergraph_SidekickInstance");

	USidekickInstance_C_ExecuteUbergraph_SidekickInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
