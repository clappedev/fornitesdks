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

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortStoreFrontOfferInfo* OfferInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BonusText                      (Parm, OutParm)

void UStoreMain_MTXOffer_C::GetBonusText(class UFortStoreFrontOfferInfo* OfferInfo, struct FText* BonusText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText");

	UStoreMain_MTXOffer_C_GetBonusText_Params params;
	params.OfferInfo = OfferInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusText != nullptr)
		*BonusText = params.BonusText;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortMtxGradient        Gradient                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreMain_MTXOffer_C::SetTextOutlineColor(class UTextBlock* Text, const struct FFortMtxGradient& Gradient)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor");

	UStoreMain_MTXOffer_C_SetTextOutlineColor_Params params;
	params.Text = Text;
	params.Gradient = Gradient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMtxOfferDisplaySize       DisplaySize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_MTXOffer_C::SetTileSize(EFortMtxOfferDisplaySize DisplaySize)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize");

	UStoreMain_MTXOffer_C_SetTileSize_Params params;
	params.DisplaySize = DisplaySize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::TriggerReset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset");

	UStoreMain_MTXOffer_C_TriggerReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::InitialReset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset");

	UStoreMain_MTXOffer_C_InitialReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::TriggerIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro");

	UStoreMain_MTXOffer_C_TriggerIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::ShowDetails()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails");

	UStoreMain_MTXOffer_C_ShowDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::InitOffer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer");

	UStoreMain_MTXOffer_C_InitOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_MTXOffer_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct");

	UStoreMain_MTXOffer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered");

	UStoreMain_MTXOffer_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered");

	UStoreMain_MTXOffer_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_MTXOffer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct");

	UStoreMain_MTXOffer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_C::OnOfferSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet");

	UStoreMain_MTXOffer_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InStorePrice                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_MTXOffer_C::OnUpdateStorePrice(const struct FText& InStorePrice)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice");

	UStoreMain_MTXOffer_C_OnUpdateStorePrice_Params params;
	params.InStorePrice = InStorePrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_C::OnStoreSelectionOfferSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet");

	UStoreMain_MTXOffer_C_OnStoreSelectionOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSlateBrush             OfferBrush                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_MTXOffer_C::OnOfferTileBrushLoaded(const struct FSlateBrush& OfferBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded");

	UStoreMain_MTXOffer_C_OnOfferTileBrushLoaded_Params params;
	params.OfferBrush = OfferBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_MTXOffer_C::ExecuteUbergraph_StoreMain_MTXOffer(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer");

	UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_C::AboutToShowDetails__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature");

	UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
