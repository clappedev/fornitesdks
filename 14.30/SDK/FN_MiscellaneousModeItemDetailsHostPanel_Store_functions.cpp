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

// Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMiscellaneousModeItemDetailsHostPanel_Store_C::HandleHasItemMarkedForMulchingChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged");

	UMiscellaneousModeItemDetailsHostPanel_Store_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiscellaneousModeItemDetailsHostPanel_Store_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store");

	UMiscellaneousModeItemDetailsHostPanel_Store_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
