#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::HandleLobbyConnectingToGame()
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleLobbyConnectingToGame");

	Params::UJoinServer_C_HandleLobbyConnectingToGame_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowAbandoningProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowAbandoningProgress(class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowAbandoningProgress");

	Params::UJoinServer_C_ShowAbandoningProgress_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Failure                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               AllowRetry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowRetryRejoinWindow(class FText Failure, bool AllowRetry, class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowRetryRejoinWindow");

	Params::UJoinServer_C_ShowRetryRejoinWindow_Params Parms;
	Parms.Failure = Failure;
	Parms.AllowRetry = AllowRetry;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsJoinableGameAvailable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowRetryRejoinSession(int32 Temp_int_Variable, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsJoinableGameAvailable_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowRetryRejoinSession");

	Params::UJoinServer_C_ShowRetryRejoinSession_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsJoinableGameAvailable_ReturnValue = CallFunc_IsJoinableGameAvailable_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowRejoiningProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowRejoiningProgress(class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowRejoiningProgress");

	Params::UJoinServer_C_ShowRejoiningProgress_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HideRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbandonSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::HideRejoinWindow(bool AbandonSession)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HideRejoinWindow");

	Params::UJoinServer_C_HideRejoinWindow_Params Parms;
	Parms.AbandonSession = AbandonSession;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowRejoinWindow(class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowRejoinWindow");

	Params::UJoinServer_C_ShowRejoinWindow_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UJoinServer_C::HandleGetMainMenuContent()
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleGetMainMenuContent");

	Params::UJoinServer_C_HandleGetMainMenuContent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function JoinServer.JoinServer_C.ShowTutorialCanceled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ShowTutorialCanceled(class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowTutorialCanceled");

	Params::UJoinServer_C_ShowTutorialCanceled_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.GetMatchmakingError
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMatchmakingCompleteResultMatchMakingError                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ErrorText                                                        (Parm, OutParm)
// enum class EMatchmakingCompleteResultTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        K2Node_Select_Default                                            ()

void UJoinServer_C::GetMatchmakingError(enum class EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText, enum class EMatchmakingCompleteResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("JoinServer_C", "GetMatchmakingError");

	Params::UJoinServer_C_GetMatchmakingError_Params Parms;
	Parms.MatchMakingError = MatchMakingError;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (ErrorText != nullptr)
		*ErrorText = Parms.ErrorText;

}

// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWorldRecordLoaded_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_JoinFromLobby_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::HandleLobbyTimeUpdated(int32 TimeRemaining, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsWorldRecordLoaded_ReturnValue, bool CallFunc_JoinFromLobby_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleLobbyTimeUpdated");

	Params::UJoinServer_C_HandleLobbyTimeUpdated_Params Parms;
	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsWorldRecordLoaded_ReturnValue = CallFunc_IsWorldRecordLoaded_ReturnValue;
	Parms.CallFunc_JoinFromLobby_ReturnValue = CallFunc_JoinFromLobby_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.SkipTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::SkipTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UWidget* CallFunc_PopWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "SkipTutorial");

	Params::UJoinServer_C_SkipTutorial_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartOnboardingMission_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::StartTutorialMatchmakingFlow(class UWidget* CallFunc_PopWidget_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_StartOnboardingMission_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "StartTutorialMatchmakingFlow");

	Params::UJoinServer_C_StartTutorialMatchmakingFlow_Params Parms;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_StartOnboardingMission_ReturnValue = CallFunc_StartOnboardingMission_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleEnterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            LocalPreviousState                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::HandleEnterState(enum class EFortUIState PreviousState, enum class EFortUIState LocalPreviousState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleEnterState");

	Params::UJoinServer_C_HandleEnterState_Params Parms;
	Parms.PreviousState = PreviousState;
	Parms.LocalPreviousState = LocalPreviousState;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::HandleLobbyDisconnected()
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleLobbyDisconnected");

	Params::UJoinServer_C_HandleLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingState       OldState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingState       NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleMatchmakingStateChange");

	Params::UJoinServer_C_HandleMatchmakingStateChange_Params Parms;
	Parms.OldState = OldState;
	Parms.NewState = NewState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingCompleteResultMatchmakingResult                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMatchmakingError_ErrorText                           ()
// class UWidget*                     CallFunc_PopWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result, enum class EMatchmakingCompleteResult MatchmakingResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetMatchmakingError_ErrorText, class UWidget* CallFunc_PopWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleMatchmakingComplete");

	Params::UJoinServer_C_HandleMatchmakingComplete_Params Parms;
	Parms.Result = Result;
	Parms.MatchmakingResult = MatchmakingResult;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetMatchmakingError_ErrorText = CallFunc_GetMatchmakingError_ErrorText;
	Parms.CallFunc_PopWidget_ReturnValue = CallFunc_PopWidget_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URejoinWindow_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressWidget_C*           CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UTutorialWindow_C*           CallFunc_Create_ReturnValue2                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::Initialize(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class URejoinWindow_C* CallFunc_Create_ReturnValue, class UProgressWidget_C* CallFunc_Create_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UTutorialWindow_C* CallFunc_Create_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("JoinServer_C", "Initialize");

	Params::UJoinServer_C_Initialize_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("JoinServer_C", "DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF");

	Params::UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnFailure_B419884742513722D11D8AB4D90DE5E2()
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnFailure_B419884742513722D11D8AB4D90DE5E2");

	Params::UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnSuccess_B419884742513722D11D8AB4D90DE5E2()
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnSuccess_B419884742513722D11D8AB4D90DE5E2");

	Params::UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnFailure_C91A02504569664A4B1E259E5F57A79D()
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnFailure_C91A02504569664A4B1E259E5F57A79D");

	Params::UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnSuccess_C91A02504569664A4B1E259E5F57A79D()
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnSuccess_C91A02504569664A4B1E259E5F57A79D");

	Params::UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.RequestTutorialRetry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::RequestTutorialRetry()
{
	static auto Func = Class->GetFunction("JoinServer_C", "RequestTutorialRetry");

	Params::UJoinServer_C_RequestTutorialRetry_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ShowSkipTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::ShowSkipTutorial()
{
	static auto Func = Class->GetFunction("JoinServer_C", "ShowSkipTutorial");

	Params::UJoinServer_C_ShowSkipTutorial_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UJoinServer_C::HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleClientEvent_RejoinStart");

	Params::UJoinServer_C_HandleClientEvent_RejoinStart_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::HandleRequestRejoinRetry()
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleRequestRejoinRetry");

	Params::UJoinServer_C_HandleRequestRejoinRetry_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleRequestAbandon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UJoinServer_C::HandleRequestAbandon()
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleRequestAbandon");

	Params::UJoinServer_C_HandleRequestAbandon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UJoinServer_C::HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("JoinServer_C", "HandleClientEvent_OnboardingStartMatchmaking");

	Params::UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJoinServer_C::Construct()
{
	static auto Func = Class->GetFunction("JoinServer_C", "Construct");

	Params::UJoinServer_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnEnterState");

	Params::UJoinServer_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPromptToSkipTutorial_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent1                            (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_RejoinSession*CallFunc_RejoinSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_AbandonSession*CallFunc_AbandonSession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortTutorialContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldPromptToSkipTutorial_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_RejoinSession* CallFunc_RejoinSession_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1, class UFortAsyncAction_AbandonSession* CallFunc_AbandonSession_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, enum class EFortUIState K2Node_Event_PreviousUIState)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ExecuteUbergraph_JoinServer");

	Params::UJoinServer_C_ExecuteUbergraph_JoinServer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_ShouldPromptToSkipTutorial_ReturnValue = CallFunc_ShouldPromptToSkipTutorial_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_HandleClientEvent_EventSource1 = K2Node_HandleClientEvent_EventSource1;
	Parms.K2Node_HandleClientEvent_EventFocus1 = K2Node_HandleClientEvent_EventFocus1;
	Parms.K2Node_HandleClientEvent_ClientEvent1 = K2Node_HandleClientEvent_ClientEvent1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RejoinSession_ReturnValue = CallFunc_RejoinSession_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller1 = K2Node_DynamicCast_AsFort_Player_Controller1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AbandonSession_ReturnValue = CallFunc_AbandonSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
