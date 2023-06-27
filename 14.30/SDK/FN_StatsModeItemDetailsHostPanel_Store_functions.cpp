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

// Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UStatsModeItemDetailsHostPanel_Store_C::HandleHasItemMarkedForMulchingChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged");

	UStatsModeItemDetailsHostPanel_Store_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsModeItemDetailsHostPanel_Store_C::ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store");

	UStatsModeItemDetailsHostPanel_Store_C_ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
