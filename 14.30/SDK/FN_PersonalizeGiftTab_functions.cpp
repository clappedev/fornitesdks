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

// Function PersonalizeGiftTab.PersonalizeGiftTab_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalizeGiftTab_C::BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PersonalizeGiftTab.PersonalizeGiftTab_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature");

	UPersonalizeGiftTab_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalizeGiftTab.PersonalizeGiftTab_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalizeGiftTab_C::BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PersonalizeGiftTab.PersonalizeGiftTab_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");

	UPersonalizeGiftTab_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PersonalizeGiftTab.PersonalizeGiftTab_C.ExecuteUbergraph_PersonalizeGiftTab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPersonalizeGiftTab_C::ExecuteUbergraph_PersonalizeGiftTab(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PersonalizeGiftTab.PersonalizeGiftTab_C.ExecuteUbergraph_PersonalizeGiftTab");

	UPersonalizeGiftTab_C_ExecuteUbergraph_PersonalizeGiftTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
