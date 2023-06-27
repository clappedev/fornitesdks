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

// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   OfferDisplayName               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPurchaseUnavailable_C::OnUpdateTextStyle(const struct FText& OfferDisplayName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle");

	UPurchaseUnavailable_C_OnUpdateTextStyle_Params params;
	params.OfferDisplayName = OfferDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseUnavailable_C::ExecuteUbergraph_PurchaseUnavailable(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable");

	UPurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
