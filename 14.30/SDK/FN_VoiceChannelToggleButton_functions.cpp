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

// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UVoiceChannelToggleButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnHovered");

	UVoiceChannelToggleButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UVoiceChannelToggleButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnUnhovered");

	UVoiceChannelToggleButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.OnVoiceChannelSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPartyChat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelToggleButton_C::OnVoiceChannelSelected(bool bIsPartyChat)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.OnVoiceChannelSelected");

	UVoiceChannelToggleButton_C_OnVoiceChannelSelected_Params params;
	params.bIsPartyChat = bIsPartyChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.ExecuteUbergraph_VoiceChannelToggleButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelToggleButton_C::ExecuteUbergraph_VoiceChannelToggleButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.ExecuteUbergraph_VoiceChannelToggleButton");

	UVoiceChannelToggleButton_C_ExecuteUbergraph_VoiceChannelToggleButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
