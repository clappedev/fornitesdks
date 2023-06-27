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

// Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         MediaURLs                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCMSImageSlideShow_C::SetMediaURLs(TArray<struct FString> MediaURLs)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs");

	UCMSImageSlideShow_C_SetMediaURLs_Params params;
	params.MediaURLs = MediaURLs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonWidgetCarousel*   CarouselWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CurrentPageIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMSImageSlideShow_C::BndEvt__Images_K2Node_ComponentBoundEvent(class UCommonWidgetCarousel* CarouselWidget, int CurrentPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent");

	UCMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_Params params;
	params.CarouselWidget = CarouselWidget;
	params.CurrentPageIndex = CurrentPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMSImageSlideShow_C::ExecuteUbergraph_CMSImageSlideShow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow");

	UCMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPageIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMSImageSlideShow_C::CarouselIndexChanged__DelegateSignature(int CurrentPageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature");

	UCMSImageSlideShow_C_CarouselIndexChanged__DelegateSignature_Params params;
	params.CurrentPageIndex = CurrentPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
