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

// Function ItemPreviewViewport.ItemPreviewViewport_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemPreviewViewport_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemPreviewViewport.ItemPreviewViewport_C.Construct");

	UItemPreviewViewport_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPreviewViewport.ItemPreviewViewport_C.ExecuteUbergraph_ItemPreviewViewport
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPreviewViewport_C::ExecuteUbergraph_ItemPreviewViewport(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemPreviewViewport.ItemPreviewViewport_C.ExecuteUbergraph_ItemPreviewViewport");

	UItemPreviewViewport_C_ExecuteUbergraph_ItemPreviewViewport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
