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

// Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            AvailableBalance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleMTXDisplay_C::OnUpdateAvailableMTX(int AvailableBalance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX");

	USimpleMTXDisplay_C_OnUpdateAvailableMTX_Params params;
	params.AvailableBalance = AvailableBalance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleMTXDisplay_C::ExecuteUbergraph_SimpleMTXDisplay(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay");

	USimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
