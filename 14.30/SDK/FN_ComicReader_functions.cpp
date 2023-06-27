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

// Function ComicReader.ComicBook.CopyToClipboardForCMS
// (Final, Native, Private)

void UComicBook::CopyToClipboardForCMS()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.ComicBook.CopyToClipboardForCMS");

	UComicBook_CopyToClipboardForCMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicReader.ToggleViewMode
// (Final, Native, Public, BlueprintCallable)

void UFortComicReader::ToggleViewMode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.ToggleViewMode");

	UFortComicReader_ToggleViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicReader.SetCurrentPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPageIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UFortComicReader::SetCurrentPage(int InPageIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.SetCurrentPage");

	UFortComicReader_SetCurrentPage_Params params;
	params.InPageIndex = InPageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicReader.Previous
// (Final, Native, Public, BlueprintCallable)

void UFortComicReader::Previous()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.Previous");

	UFortComicReader_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicReader.Next
// (Final, Native, Public, BlueprintCallable)

void UFortComicReader::Next()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.Next");

	UFortComicReader_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicReader.GetViewMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFortComicViewMode             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFortComicViewMode UFortComicReader::GetViewMode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetViewMode");

	UFortComicReader_GetViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicReader.GetTotalPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFortComicReader::GetTotalPageNumber()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetTotalPageNumber");

	UFortComicReader_GetTotalPageNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicReader.GetNumPanelsOnPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InPageNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFortComicReader::GetNumPanelsOnPage(int InPageNum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetNumPanelsOnPage");

	UFortComicReader_GetNumPanelsOnPage_Params params;
	params.InPageNum = InPageNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicReader.GetCurrentPanelIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFortComicReader::GetCurrentPanelIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetCurrentPanelIndex");

	UFortComicReader_GetCurrentPanelIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicReader.GetCurrentPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFortComicReader::GetCurrentPageNumber()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetCurrentPageNumber");

	UFortComicReader_GetCurrentPageNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicReader.GetCurrentPageIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFortComicReader::GetCurrentPageIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicReader.GetCurrentPageIndex");

	UFortComicReader_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComicReader.FortComicScreen.UpdateShowContinueOnLastPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InShowContinue                 (Parm, ZeroConstructor, IsPlainOldData)

void UFortComicScreen::UpdateShowContinueOnLastPage(bool InShowContinue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicScreen.UpdateShowContinueOnLastPage");

	UFortComicScreen_UpdateShowContinueOnLastPage_Params params;
	params.InShowContinue = InShowContinue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicScreen.UpdateComicTitle
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 InComicTitle                   (Parm, ZeroConstructor)

void UFortComicScreen::UpdateComicTitle(const struct FString& InComicTitle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicScreen.UpdateComicTitle");

	UFortComicScreen_UpdateComicTitle_Params params;
	params.InComicTitle = InComicTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicScreen.OnPreProcessedNavInput
// (Event, Protected, BlueprintEvent)
// Parameters:
// EUINavigation                  NavInput                       (Parm, ZeroConstructor, IsPlainOldData)

void UFortComicScreen::OnPreProcessedNavInput(EUINavigation NavInput)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicScreen.OnPreProcessedNavInput");

	UFortComicScreen_OnPreProcessedNavInput_Params params;
	params.NavInput = NavInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComicReader.FortComicScreen.HandlePreprocessorNavInput
// (Final, Native, Private)
// Parameters:
// EUINavigation                  InNavDirection                 (Parm, ZeroConstructor, IsPlainOldData)

void UFortComicScreen::HandlePreprocessorNavInput(EUINavigation InNavDirection)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ComicReader.FortComicScreen.HandlePreprocessorNavInput");

	UFortComicScreen_HandlePreprocessorNavInput_Params params;
	params.InNavDirection = InNavDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
