// Fortnite (8.51) SDK
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

// Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIsAutoRotateAllowed           (Parm, ZeroConstructor, IsPlainOldData)

void UKairosCaptureStatics::STATIC_ToggleAutoRotate(bool bIsAutoRotateAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate");

	UKairosCaptureStatics_ToggleAutoRotate_Params params;
	params.bIsAutoRotateAllowed = bIsAutoRotateAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet
// (Net, NetReliable, Native, Event, NetResponse, Public)
// Parameters:
// struct FKairosSnippetParams    Params                         (Parm)
// struct FWebJSResponse          Response                       (Parm)

void UKairosCaptureStatics::PauseOrResumeSnippet(struct FKairosSnippetParams Params, struct FWebJSResponse Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet");

	UKairosCaptureStatics_PauseOrResumeSnippet_Params params;
	params.Params = Params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AKairosSceneManagerActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKairosSceneManagerActor* UKairosCaptureStatics::STATIC_GetSceneManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager");

	UKairosCaptureStatics_GetSceneManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKairosConfig*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKairosConfig* AKairosGameModeBase::GetDefaultConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig");

	AKairosGameModeBase_GetDefaultConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KairosSceneCapture.KairosHeroBase.EndCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKairosHeroBase::EndCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosHeroBase.EndCapture");

	AKairosHeroBase_EndCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KairosSceneCapture.KairosHeroBase.BeginCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosAnimationFramingInfo FramingInfo                    (Parm)
// struct FKairosCaptureParams    CaptureParams                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKairosHeroBase::BeginCapture(struct FKairosAnimationFramingInfo FramingInfo, struct FKairosCaptureParams CaptureParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosHeroBase.BeginCapture");

	AKairosHeroBase_BeginCapture_Params params;
	params.FramingInfo = FramingInfo;
	params.CaptureParams = CaptureParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KairosSceneCapture.KairosSceneManagerActor.StopAR
// (Final, Native, Public, BlueprintCallable)

void AKairosSceneManagerActor::StopAR()
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.StopAR");

	AKairosSceneManagerActor_StopAR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerID                       (Parm, ZeroConstructor)
// bool                           bShouldPase                    (Parm, ZeroConstructor, IsPlainOldData)

void AKairosSceneManagerActor::PauseOrResumeSnippet(struct FString PlayerID, bool bShouldPase)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet");

	AKairosSceneManagerActor_PauseOrResumeSnippet_Params params;
	params.PlayerID = PlayerID;
	params.bShouldPase = bShouldPase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKairosSceneInfo        CompleteSceneInfoCopy          (Parm)

void AKairosSceneManagerActor::OLD_OnSceneSetupComplete(struct FKairosSceneInfo CompleteSceneInfoCopy)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete");

	AKairosSceneManagerActor_OLD_OnSceneSetupComplete_Params params;
	params.CompleteSceneInfoCopy = CompleteSceneInfoCopy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode
// (Event, Public, BlueprintEvent)

void AKairosSceneManagerActor::LoadWorldARMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode");

	AKairosSceneManagerActor_LoadWorldARMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKairosSceneInfo        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo");

	AKairosSceneManagerActor_GetSceneInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerID                       (Parm, ZeroConstructor)
// struct FString                 EmoteID                        (Parm, ZeroConstructor)

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(struct FString PlayerID, struct FString EmoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer");

	AKairosSceneManagerActor_BeginEmotePlaybackForPlayer_Params params;
	params.PlayerID = PlayerID;
	params.EmoteID = EmoteID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
