// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.SetFeaturedContentDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeaturedCreativeContent_C::SetFeaturedContentDetails(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.SetFeaturedContentDetails");

	UFeaturedCreativeContent_C_SetFeaturedContentDetails_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetupAds
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         MediaURLs                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCreativeAdData> AdMetadata                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFeaturedCreativeContent_C::OnSetupAds(TArray<struct FString> MediaURLs, TArray<struct FCreativeAdData> AdMetadata)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetupAds");

	UFeaturedCreativeContent_C_OnSetupAds_Params params;
	params.MediaURLs = MediaURLs;
	params.AdMetadata = AdMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// int                            CurrentPageIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeaturedCreativeContent_C::BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent(int CurrentPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent");

	UFeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_Params params;
	params.CurrentPageIndex = CurrentPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeaturedCreativeContent_C::ExecuteUbergraph_FeaturedCreativeContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent");

	UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
