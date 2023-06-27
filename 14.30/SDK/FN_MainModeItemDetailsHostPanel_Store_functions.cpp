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

// Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.UpdateDescriptionVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainModeItemDetailsHostPanel_Store_C::UpdateDescriptionVisibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.UpdateDescriptionVisibility");

	UMainModeItemDetailsHostPanel_Store_C_UpdateDescriptionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMainModeItemDetailsHostPanel_Store_C::HandleHasItemMarkedForMulchingChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged");

	UMainModeItemDetailsHostPanel_Store_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainModeItemDetailsHostPanel_Store_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.Construct");

	UMainModeItemDetailsHostPanel_Store_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MainModeItemDetailsHostPanel_Store
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainModeItemDetailsHostPanel_Store_C::ExecuteUbergraph_MainModeItemDetailsHostPanel_Store(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MainModeItemDetailsHostPanel_Store");

	UMainModeItemDetailsHostPanel_Store_C_ExecuteUbergraph_MainModeItemDetailsHostPanel_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
