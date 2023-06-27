
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

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// (Final, Native, Static, Public, BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopWebCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam");

	UGameLiveStreamingFunctionLibrary_StopWebCam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// (Final, Native, Static, Public, BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StartWebCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam");

	UGameLiveStreamingFunctionLibrary_StartWebCam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)

void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UGameLiveStreamingFunctionLibrary::STATIC_IsWebCamEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled");

	UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
