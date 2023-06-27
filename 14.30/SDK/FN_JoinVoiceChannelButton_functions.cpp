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

// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UJoinVoiceChannelButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnHovered");

	UJoinVoiceChannelButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UJoinVoiceChannelButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnUnhovered");

	UJoinVoiceChannelButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.ExecuteUbergraph_JoinVoiceChannelButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinVoiceChannelButton_C::ExecuteUbergraph_JoinVoiceChannelButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.ExecuteUbergraph_JoinVoiceChannelButton");

	UJoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
