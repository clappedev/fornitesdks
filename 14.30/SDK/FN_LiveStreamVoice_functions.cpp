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

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVoiceSettings          InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void ULiveStreamVoiceSubsystem::SetVoiceSettings(const struct FVoiceSettings& InSettings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings");

	ULiveStreamVoiceSubsystem_SetVoiceSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ULiveStreamVoiceSubsystem::EnableLocalVoiceProcessing(unsigned char LocalUserNum, bool bEnable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing");

	ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings
// (Final, Native, Public, BlueprintCallable)

void ULiveStreamVoiceSubsystem::ClearVoiceSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings");

	ULiveStreamVoiceSubsystem_ClearVoiceSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
