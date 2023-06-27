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

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortItemPreviewActor*   Preview                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemPreviewPedestal_C::Remove_Floor(class AFortItemPreviewActor* Preview)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor");

	AItemPreviewPedestal_C_Remove_Floor_Params params;
	params.Preview = Preview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortItemType                  ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemPreviewPedestal_C::OnItemDisplayed(EFortItemType ItemType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed");

	AItemPreviewPedestal_C_OnItemDisplayed_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemPreviewPedestal_C::ExecuteUbergraph_ItemPreviewPedestal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal");

	AItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
