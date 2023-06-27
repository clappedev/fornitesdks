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

// Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialConfirmationButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered");

	USocialConfirmationButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialConfirmationButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered");

	USocialConfirmationButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialConfirmationButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct");

	USocialConfirmationButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialConfirmationButton_C::ExecuteUbergraph_SocialConfirmationButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton");

	USocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
