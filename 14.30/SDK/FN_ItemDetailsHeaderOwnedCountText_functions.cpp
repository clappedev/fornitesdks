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

// Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.SetOwnedText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDetailsHeaderOwnedCountText_C::SetOwnedText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.SetOwnedText");

	UItemDetailsHeaderOwnedCountText_C_SetOwnedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderOwnedCountText_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderOwnedCountText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.ExecuteUbergraph_ItemDetailsHeaderOwnedCountText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeaderOwnedCountText_C::ExecuteUbergraph_ItemDetailsHeaderOwnedCountText(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C.ExecuteUbergraph_ItemDetailsHeaderOwnedCountText");

	UItemDetailsHeaderOwnedCountText_C_ExecuteUbergraph_ItemDetailsHeaderOwnedCountText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
