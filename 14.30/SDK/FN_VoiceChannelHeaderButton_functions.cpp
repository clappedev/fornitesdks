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

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRepresentingPlatformChat      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bChannelAvailable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelHeaderButton_C::OnUpdateVisuals(bool bIsActive, bool bRepresentingPlatformChat, bool bChannelAvailable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals");

	UVoiceChannelHeaderButton_C_OnUpdateVisuals_Params params;
	params.bIsActive = bIsActive;
	params.bRepresentingPlatformChat = bRepresentingPlatformChat;
	params.bChannelAvailable = bChannelAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UVoiceChannelHeaderButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered");

	UVoiceChannelHeaderButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UVoiceChannelHeaderButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered");

	UVoiceChannelHeaderButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UVoiceChannelHeaderButton_C::BP_OnDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled");

	UVoiceChannelHeaderButton_C_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UVoiceChannelHeaderButton_C::BP_OnEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled");

	UVoiceChannelHeaderButton_C_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelHeaderButton_C::ExecuteUbergraph_VoiceChannelHeaderButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton");

	UVoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
