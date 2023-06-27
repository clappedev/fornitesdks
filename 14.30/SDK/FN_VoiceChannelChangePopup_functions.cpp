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

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoiceChannelChangePopup_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct");

	UVoiceChannelChangePopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelChangePopup_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct");

	UVoiceChannelChangePopup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UVoiceChannelChangePopup_C::Popup_Animation_Finished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished");

	UVoiceChannelChangePopup_C_Popup_Animation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UVoiceChannelChangePopup_C::OnPlayOpenAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation");

	UVoiceChannelChangePopup_C_OnPlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)

void UVoiceChannelChangePopup_C::OnPlayCloseAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation");

	UVoiceChannelChangePopup_C_OnPlayCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType               NewInputType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelChangePopup_C::OnInputModeChanged(ECommonInputType NewInputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged");

	UVoiceChannelChangePopup_C_OnInputModeChanged_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoiceChannelChangePopup_C::ExecuteUbergraph_VoiceChannelChangePopup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup");

	UVoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
