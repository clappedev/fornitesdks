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

// Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged
// (Event, Protected, BlueprintEvent)

void UItemRatingIndicator_C::HandleViewModelChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged");

	UItemRatingIndicator_C_HandleViewModelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemRatingIndicator.ItemRatingIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemRatingIndicator_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemRatingIndicator.ItemRatingIndicator_C.Construct");

	UItemRatingIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemRatingIndicator_C::ExecuteUbergraph_ItemRatingIndicator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator");

	UItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
