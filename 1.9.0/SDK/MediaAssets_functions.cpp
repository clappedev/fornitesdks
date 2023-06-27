
#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaOverlays.GetTexts
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UMediaOverlays::GetTexts()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaOverlays.GetTexts");

	UMediaOverlays_GetTexts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaOverlays.GetSubtitles
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UMediaOverlays::GetSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaOverlays.GetSubtitles");

	UMediaOverlays_GetSubtitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaOverlays.GetCaptions
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UMediaOverlays::GetCaptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaOverlays.GetCaptions");

	UMediaOverlays_GetCaptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)

void UFileMediaSource::SetFilePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	UFileMediaSource_SetFilePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
