// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Use_Bluescreen                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Probablility_modulator         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Use_Flat_Blue                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxColorPerChannelValue        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Control_replacement_alpha      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATVPostProcessBP_C::RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor");

	ATVPostProcessBP_C_RandomizeTheColor_Params params;
	params.Use_Bluescreen = Use_Bluescreen;
	params.Probablility_modulator = Probablility_modulator;
	params.Use_Flat_Blue = Use_Flat_Blue;
	params.MaxColorPerChannelValue = MaxColorPerChannelValue;
	params.Control_replacement_alpha = Control_replacement_alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript");

	ATVPostProcessBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Show_the_troll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc");

	ATVPostProcessBP_C_Show_the_troll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Show_the_troll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc");

	ATVPostProcessBP_C_Show_the_troll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc");

	ATVPostProcessBP_C_Switch_between_cameras__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc");

	ATVPostProcessBP_C_Switch_between_cameras__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__Switch_Camera_Position__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc");

	ATVPostProcessBP_C_Switch_between_cameras__Switch_Camera_Position__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_live__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc");

	ATVPostProcessBP_C_Switch_to_live__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_live__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc");

	ATVPostProcessBP_C_Switch_to_live__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc");

	ATVPostProcessBP_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc");

	ATVPostProcessBP_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_static__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc");

	ATVPostProcessBP_C_Switch_to_static__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_static__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc");

	ATVPostProcessBP_C_Switch_to_static__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc");

	ATVPostProcessBP_C_Jitter_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc");

	ATVPostProcessBP_C_Jitter_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__Switch_Camera_Position__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc");

	ATVPostProcessBP_C_Jitter_Timeline__Switch_Camera_Position__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc");

	ATVPostProcessBP_C_FrontEndCameraSwitchFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc");

	ATVPostProcessBP_C_FrontEndCameraSwitchFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::StartScreen__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc");

	ATVPostProcessBP_C_StartScreen__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
// (FUNC_BlueprintEvent)

void ATVPostProcessBP_C::StartScreen__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc");

	ATVPostProcessBP_C_StartScreen__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_TriggerTheTroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll");

	ATVPostProcessBP_C_Camera_TriggerTheTroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_SwitchBetweenLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations");

	ATVPostProcessBP_C_Camera_SwitchBetweenLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_TransitionToLiveStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic");

	ATVPostProcessBP_C_Camera_TransitionToLiveStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_TurnOffThePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess");

	ATVPostProcessBP_C_Camera_TurnOffThePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_TransitionToLiveVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo");

	ATVPostProcessBP_C_Camera_TransitionToLiveVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_DebugEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents");

	ATVPostProcessBP_C_Camera_DebugEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_DosTextFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished");

	ATVPostProcessBP_C_Camera_DosTextFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_ReturningPlayerInitializeWithLiveVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo");

	ATVPostProcessBP_C_Camera_ReturningPlayerInitializeWithLiveVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch");

	ATVPostProcessBP_C_FrontEndCameraSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_LoadAndWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait");

	ATVPostProcessBP_C_Camera_LoadAndWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_Sequence_Start_StaticWhoomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp");

	ATVPostProcessBP_C_Camera_Sequence_Start_StaticWhoomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::WriteOutLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading");

	ATVPostProcessBP_C_WriteOutLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SequenceName                   (CPF_Parm, CPF_ZeroConstructor)

void ATVPostProcessBP_C::SequenceFinished(const struct FString& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished");

	ATVPostProcessBP_C_SequenceFinished_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_InitializePost()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost");

	ATVPostProcessBP_C_Camera_InitializePost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects");

	ATVPostProcessBP_C_Camera_DisableEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATVPostProcessBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick");

	ATVPostProcessBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::FastForwardPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess");

	ATVPostProcessBP_C_FastForwardPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::JitterTheScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen");

	ATVPostProcessBP_C_JitterTheScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATVPostProcessBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay");

	ATVPostProcessBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP");

	ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
