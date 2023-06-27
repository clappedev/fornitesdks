#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.UpdateStatusText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDisconnected_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDead_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select1_Default                                           ()

void UAthenaEventMatchScoreboardPlayerWidget_C::UpdateStatusText(class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsDisconnected_ReturnValue, bool CallFunc_GetIsDead_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "UpdateStatusText");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_UpdateStatusText_Params Parms;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsDisconnected_ReturnValue = CallFunc_GetIsDisconnected_ReturnValue;
	Parms.CallFunc_GetIsDead_ReturnValue = CallFunc_GetIsDead_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetRowBordersVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetRowBordersVisibility(bool bVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "SetRowBordersVisibility");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_SetRowBordersVisibility_Params Parms;
	Parms.bVisible = bVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "PreConstruct");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ClearTextWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchScoreboardPlayerWidget_C::ClearTextWidgets()
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "ClearTextWidgets");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_ClearTextWidgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamNumberChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InTeamNumber                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnTeamNumberChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InTeamNumber)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnTeamNumberChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamNumberChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InTeamNumber = InTeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                InTeamColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnTeamColorChanged(class UAthenaRemotePlayerViewData* InPlayerData, const struct FLinearColor& InTeamColor)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnTeamColorChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamColorChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InTeamColor = InTeamColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      InPlayerName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlayerNameChanged(class UAthenaRemotePlayerViewData* InPlayerData, const class FString& InPlayerName)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnPlayerNameChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerNameChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InPlayerName = InPlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDead                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDeadStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnDeadStateChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnDeadStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDead = bIsDead;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDBNO                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDBNOStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnDBNOStateChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnDBNOStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDBNO = bIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnBeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsBeingRevived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnBeingRevivedStateChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnBeingRevivedStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsBeingRevived = bIsBeingRevived;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnKillScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InKillScore                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnKillScoreChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnKillScoreChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnKillScoreChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InKillScore = InKillScore;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDisconnectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDisconnected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDisconnectedChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnDisconnectedChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnDisconnectedChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDisconnected = bIsDisconnected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDistanceToStormChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InDistanceToStorm                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDistanceToStormChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InDistanceToStorm)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnDistanceToStormChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnDistanceToStormChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InDistanceToStorm = InDistanceToStorm;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlaceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InPlace                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlaceChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InPlace)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnPlaceChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnPlaceChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InPlace = InPlace;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlayerDataChanged(class UAthenaRemotePlayerViewData* InPlayerData)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnPlayerDataChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerDataChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnEventScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InScore                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnEventScoreChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InScore)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "OnEventScoreChanged");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_OnEventScoreChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InScore = InScore;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetEventScoreVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetEventScoreVisible(bool InVisible)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "SetEventScoreVisible");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_SetEventScoreVisible_Params Parms;
	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetTeamNumberVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               InVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetTeamNumberVisible(bool InVisible)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "SetTeamNumberVisible");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_SetTeamNumberVisible_Params Parms;
	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetUsingAlternateRowStyle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseAlternateStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetUsingAlternateRowStyle(bool bUseAlternateStyle)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "SetUsingAlternateRowStyle");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_SetUsingAlternateRowStyle_Params Parms;
	Parms.bUseAlternateStyle = bUseAlternateStyle;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData11                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InTeamNumber                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InTeamColor                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_InPlayerName                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDead                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDBNO                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsBeingRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InKillScore                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDisconnected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InDistanceToStorm                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class FText                        Temp_text_Variable1                                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InPlace                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue3                             ()
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select1_Default                                           ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select2_Default                                           ()
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InScore                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue4                             ()
// bool                               K2Node_Event_InVisible1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUseAlternateStyle                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select5_Default                                           ()

void UAthenaEventMatchScoreboardPlayerWidget_C::ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData11, int32 K2Node_Event_InTeamNumber, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData10, const struct FLinearColor& K2Node_Event_InTeamColor, class FText CallFunc_Conv_IntToText_ReturnValue, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData9, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData8, bool K2Node_Event_bIsDead, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData7, bool K2Node_Event_bIsDBNO, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData6, bool K2Node_Event_bIsBeingRevived, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData5, int32 K2Node_Event_InKillScore, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData4, bool K2Node_Event_bIsDisconnected, class FText CallFunc_Conv_IntToText_ReturnValue1, bool Temp_bool_Variable3, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3, int32 K2Node_Event_InDistanceToStorm, int32 CallFunc_Abs_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, class FText Temp_text_Variable1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2, int32 K2Node_Event_InPlace, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1, class FText K2Node_Select_Default, bool Temp_bool_Variable4, class FText K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, bool Temp_bool_Variable5, const struct FSlateColor& K2Node_Select2_Default, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, int32 K2Node_Event_InScore, class FText CallFunc_Conv_IntToText_ReturnValue4, bool K2Node_Event_InVisible1, bool K2Node_Event_InVisible, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, bool K2Node_Event_bUseAlternateStyle, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchScoreboardPlayerWidget_C", "ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget");

	Params::UAthenaEventMatchScoreboardPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_InPlayerData11 = K2Node_Event_InPlayerData11;
	Parms.K2Node_Event_InTeamNumber = K2Node_Event_InTeamNumber;
	Parms.K2Node_Event_InPlayerData10 = K2Node_Event_InPlayerData10;
	Parms.K2Node_Event_InTeamColor = K2Node_Event_InTeamColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Event_InPlayerData9 = K2Node_Event_InPlayerData9;
	Parms.K2Node_Event_InPlayerName = K2Node_Event_InPlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_InPlayerData8 = K2Node_Event_InPlayerData8;
	Parms.K2Node_Event_bIsDead = K2Node_Event_bIsDead;
	Parms.K2Node_Event_InPlayerData7 = K2Node_Event_InPlayerData7;
	Parms.K2Node_Event_bIsDBNO = K2Node_Event_bIsDBNO;
	Parms.K2Node_Event_InPlayerData6 = K2Node_Event_InPlayerData6;
	Parms.K2Node_Event_bIsBeingRevived = K2Node_Event_bIsBeingRevived;
	Parms.K2Node_Event_InPlayerData5 = K2Node_Event_InPlayerData5;
	Parms.K2Node_Event_InKillScore = K2Node_Event_InKillScore;
	Parms.K2Node_Event_InPlayerData4 = K2Node_Event_InPlayerData4;
	Parms.K2Node_Event_bIsDisconnected = K2Node_Event_bIsDisconnected;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Event_InPlayerData3 = K2Node_Event_InPlayerData3;
	Parms.K2Node_Event_InDistanceToStorm = K2Node_Event_InDistanceToStorm;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_InPlayerData2 = K2Node_Event_InPlayerData2;
	Parms.K2Node_Event_InPlace = K2Node_Event_InPlace;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue3 = CallFunc_Conv_IntToText_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_InPlayerData1 = K2Node_Event_InPlayerData1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Event_InPlayerData = K2Node_Event_InPlayerData;
	Parms.K2Node_Event_InScore = K2Node_Event_InScore;
	Parms.CallFunc_Conv_IntToText_ReturnValue4 = CallFunc_Conv_IntToText_ReturnValue4;
	Parms.K2Node_Event_InVisible1 = K2Node_Event_InVisible1;
	Parms.K2Node_Event_InVisible = K2Node_Event_InVisible;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Event_bUseAlternateStyle = K2Node_Event_bUseAlternateStyle;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
