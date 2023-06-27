#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ComicReader.ComicBook.CopyToClipboardForCMS
struct UComicBook_CopyToClipboardForCMS_Params
{
};

// Function ComicReader.FortComicReader.ToggleViewMode
struct UFortComicReader_ToggleViewMode_Params
{
};

// Function ComicReader.FortComicReader.SetCurrentPage
struct UFortComicReader_SetCurrentPage_Params
{
	int                                                InPageIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComicReader.FortComicReader.Previous
struct UFortComicReader_Previous_Params
{
};

// Function ComicReader.FortComicReader.Next
struct UFortComicReader_Next_Params
{
};

// Function ComicReader.FortComicReader.GetViewMode
struct UFortComicReader_GetViewMode_Params
{
	EFortComicViewMode                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicReader.GetTotalPageNumber
struct UFortComicReader_GetTotalPageNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicReader.GetNumPanelsOnPage
struct UFortComicReader_GetNumPanelsOnPage_Params
{
	int                                                InPageNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicReader.GetCurrentPanelIndex
struct UFortComicReader_GetCurrentPanelIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicReader.GetCurrentPageNumber
struct UFortComicReader_GetCurrentPageNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicReader.GetCurrentPageIndex
struct UFortComicReader_GetCurrentPageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComicReader.FortComicScreen.UpdateShowContinueOnLastPage
struct UFortComicScreen_UpdateShowContinueOnLastPage_Params
{
	bool                                               InShowContinue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComicReader.FortComicScreen.UpdateComicTitle
struct UFortComicScreen_UpdateComicTitle_Params
{
	struct FString                                     InComicTitle;                                             // (Parm, ZeroConstructor)
};

// Function ComicReader.FortComicScreen.OnPreProcessedNavInput
struct UFortComicScreen_OnPreProcessedNavInput_Params
{
	EUINavigation                                      NavInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComicReader.FortComicScreen.HandlePreprocessorNavInput
struct UFortComicScreen_HandlePreprocessorNavInput_Params
{
	EUINavigation                                      InNavDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
