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

// Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetailsAttribute_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.Construct");

	UStoreMain_OfferDetailsAttribute_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.ExecuteUbergraph_StoreMain_OfferDetailsAttribute
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetailsAttribute_C::ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.ExecuteUbergraph_StoreMain_OfferDetailsAttribute");

	UStoreMain_OfferDetailsAttribute_C_ExecuteUbergraph_StoreMain_OfferDetailsAttribute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
