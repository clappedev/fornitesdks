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

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MediaUrl                       (Parm, ZeroConstructor)

void UEpicCMSImage::SetMediaURL(const struct FString& MediaUrl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL");

	UEpicCMSImage_SetMediaURL_Params params;
	params.MediaUrl = MediaUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileBase::Launch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.Launch");

	UEpicCMSTileBase_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            PageIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int PageIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex");

	UEpicCMSTileCarousel_SetCurrentPageByIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::PreviousPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage");

	UEpicCMSTileCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::NextPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage");

	UEpicCMSTileCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShowNavigation                (Parm, ZeroConstructor, IsPlainOldData)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged");

	UEpicCMSTileCarousel_NavigationVisibilityChanged_Params params;
	params.bShowNavigation = bShowNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                 TileWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded");

	UEpicCMSTileCarousel_HandleTilePageAdded_Params params;
	params.TileWidget = TileWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex");

	UEpicCMSTileCarousel_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)

void UEpicCMSTileCarousel::BeginAutoScrolling()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling");

	UEpicCMSTileCarousel_BeginAutoScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 TilePageWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEpicCMSTileCarousel::AddTilePage(class UWidget* TilePageWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage");

	UEpicCMSTileCarousel_AddTilePage_Params params;
	params.TilePageWidget = TilePageWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
