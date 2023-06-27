#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTournamentRoundUnlocked_C::Construct()
{
	static auto Func = Class->GetFunction("TournamentRoundUnlocked_C", "Construct");

	Params::UTournamentRoundUnlocked_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentRoundUnlocked_C::BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TournamentRoundUnlocked_C", "BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UTournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.ExecuteUbergraph_TournamentRoundUnlocked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TryGetParamString_OutValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetParamString_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_TryGetParamString_OutValue1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetParamString_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentRoundUnlocked_C::ExecuteUbergraph_TournamentRoundUnlocked(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_TryGetParamString_OutValue, bool CallFunc_TryGetParamString_ReturnValue, const class FString& CallFunc_TryGetParamString_OutValue1, bool CallFunc_TryGetParamString_ReturnValue1)
{
	static auto Func = Class->GetFunction("TournamentRoundUnlocked_C", "ExecuteUbergraph_TournamentRoundUnlocked");

	Params::UTournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_TryGetParamString_OutValue = CallFunc_TryGetParamString_OutValue;
	Parms.CallFunc_TryGetParamString_ReturnValue = CallFunc_TryGetParamString_ReturnValue;
	Parms.CallFunc_TryGetParamString_OutValue1 = CallFunc_TryGetParamString_OutValue1;
	Parms.CallFunc_TryGetParamString_ReturnValue1 = CallFunc_TryGetParamString_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
