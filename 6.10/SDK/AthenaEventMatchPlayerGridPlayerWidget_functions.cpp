#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.StopDamageAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridPlayerWidget_C::StopDamageAnimations()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "StopDamageAnimations");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_StopDamageAnimations_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.IsGamePreAircraft
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsGamePreAircraft                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::IsGamePreAircraft(bool* bIsGamePreAircraft, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "IsGamePreAircraft");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_IsGamePreAircraft_Params Parms;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (bIsGamePreAircraft != nullptr)
		*bIsGamePreAircraft = Parms.bIsGamePreAircraft;

}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.IsAliveAndNotInAircraft
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bAliveAndNotInAircraft                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInAircraft_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEliminated_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::IsAliveAndNotInAircraft(bool* bAliveAndNotInAircraft, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetInAircraft_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsEliminated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "IsAliveAndNotInAircraft");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_IsAliveAndNotInAircraft_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInAircraft_ReturnValue = CallFunc_GetInAircraft_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIsEliminated_ReturnValue = CallFunc_GetIsEliminated_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (bAliveAndNotInAircraft != nullptr)
		*bAliveAndNotInAircraft = Parms.bAliveAndNotInAircraft;

}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateKillsWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::UpdateKillsWidget(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "UpdateKillsWidget");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateKillsWidget_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateHitPointBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::UpdateHitPointBars(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "UpdateHitPointBars");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateHitPointBars_Params Parms;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.SetupBackgrounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCommonBorder*>       K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UAthenaEventMatchPlayerGridPlayerWidget_C::SetupBackgrounds(TArray<class UCommonBorder*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "SetupBackgrounds");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_SetupBackgrounds_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnGridSizeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InGridSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnGridSizeChanged(int32 InGridSize, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnGridSizeChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnGridSizeChanged_Params Parms;
	Parms.InGridSize = InGridSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            ()

void UAthenaEventMatchPlayerGridPlayerWidget_C::UpdateNameText(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "UpdateNameText");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateNameText_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaEventMatchPlayerGridStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaEventMatchPlayerGridStatusTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaEventMatchPlayerGridStatusTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaEventMatchPlayerGridStatusTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDisconnected_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDead_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBeingRevived_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsDBNO_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInAircraft_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealthPercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePreAircraft_bIsGamePreAircraft                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaEventMatchPlayerGridStatusTemp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaEventMatchPlayerGridStatusK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaEventMatchPlayerGridStatusK2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaEventMatchPlayerGridStatusK2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaEventMatchPlayerGridStatusK2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::UpdateStatus(enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable, bool Temp_bool_Variable, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsDisconnected_ReturnValue, bool CallFunc_GetIsDead_ReturnValue, bool CallFunc_GetIsBeingRevived_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsDBNO_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_GetInAircraft_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsGamePreAircraft_bIsGamePreAircraft, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable4, bool Temp_bool_Variable3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select1_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select2_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "UpdateStatus");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateStatus_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsDisconnected_ReturnValue = CallFunc_GetIsDisconnected_ReturnValue;
	Parms.CallFunc_GetIsDead_ReturnValue = CallFunc_GetIsDead_ReturnValue;
	Parms.CallFunc_GetIsBeingRevived_ReturnValue = CallFunc_GetIsBeingRevived_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIsDBNO_ReturnValue = CallFunc_GetIsDBNO_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetInAircraft_ReturnValue = CallFunc_GetInAircraft_ReturnValue;
	Parms.CallFunc_GetHealthPercent_ReturnValue = CallFunc_GetHealthPercent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsGamePreAircraft_bIsGamePreAircraft = CallFunc_IsGamePreAircraft_bIsGamePreAircraft;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorder*               Local_BackgroundToShow                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonBorder*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::UpdateBackground(class UCommonBorder* Local_BackgroundToShow, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UCommonBorder* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "UpdateBackground");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateBackground_Params Parms;
	Parms.Local_BackgroundToShow = Local_BackgroundToShow;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      InPlayerName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnPlayerNameChanged(class UAthenaRemotePlayerViewData* InPlayerData, const class FString& InPlayerName)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnPlayerNameChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerNameChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InPlayerName = InPlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnHealthDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InHealthPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnHealthDamaged(class UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnHealthDamaged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnHealthDamaged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InHealthPercent = InHealthPercent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnShieldDamaged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InShieldPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnShieldDamaged(class UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnShieldDamaged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnShieldDamaged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InShieldPercent = InShieldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDBNO                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnDBNOStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnDBNOStateChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnDBNOStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDBNO = bIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDead                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnDeadStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnDeadStateChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnDeadStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDead = bIsDead;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnBeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsBeingRevived                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnBeingRevivedStateChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnBeingRevivedStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsBeingRevived = bIsBeingRevived;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      InPlayerState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnPlayerStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, class AFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnPlayerStateChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerStateChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnHealthHealed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InHealthPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnHealthHealed(class UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnHealthHealed");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnHealthHealed_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InHealthPercent = InHealthPercent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnShieldHealed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InShieldPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnShieldHealed(class UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnShieldHealed");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnShieldHealed_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InShieldPercent = InShieldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDisconnectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDisconnected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnDisconnectedChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnDisconnectedChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnDisconnectedChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bIsDisconnected = bIsDisconnected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridPlayerWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "PreConstruct");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridPlayerWidget_C::OnPlayerDataChanged(class UAthenaRemotePlayerViewData* InPlayerData)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "OnPlayerDataChanged");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerDataChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InHealthPercent1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InShieldPercent1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDBNO                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDead                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsBeingRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_InPlayerState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InHealthPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InShieldPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDisconnected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_InPlayerName                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaEventMatchPlayerGridPlayerWidget_C::ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget(int32 EntryPoint, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData9, float K2Node_Event_InHealthPercent1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData8, float K2Node_Event_InShieldPercent1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData7, bool K2Node_Event_bIsDBNO, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData6, bool K2Node_Event_bIsDead, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData5, bool K2Node_Event_bIsBeingRevived, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData4, class AFortPlayerStateAthena* K2Node_Event_InPlayerState, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3, float K2Node_Event_InHealthPercent, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2, float K2Node_Event_InShieldPercent, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1, bool K2Node_Event_bIsDisconnected, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft, bool CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData10, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridPlayerWidget_C", "ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget");

	Params::UAthenaEventMatchPlayerGridPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InPlayerData9 = K2Node_Event_InPlayerData9;
	Parms.K2Node_Event_InHealthPercent1 = K2Node_Event_InHealthPercent1;
	Parms.K2Node_Event_InPlayerData8 = K2Node_Event_InPlayerData8;
	Parms.K2Node_Event_InShieldPercent1 = K2Node_Event_InShieldPercent1;
	Parms.K2Node_Event_InPlayerData7 = K2Node_Event_InPlayerData7;
	Parms.K2Node_Event_bIsDBNO = K2Node_Event_bIsDBNO;
	Parms.K2Node_Event_InPlayerData6 = K2Node_Event_InPlayerData6;
	Parms.K2Node_Event_bIsDead = K2Node_Event_bIsDead;
	Parms.K2Node_Event_InPlayerData5 = K2Node_Event_InPlayerData5;
	Parms.K2Node_Event_bIsBeingRevived = K2Node_Event_bIsBeingRevived;
	Parms.K2Node_Event_InPlayerData4 = K2Node_Event_InPlayerData4;
	Parms.K2Node_Event_InPlayerState = K2Node_Event_InPlayerState;
	Parms.K2Node_Event_InPlayerData3 = K2Node_Event_InPlayerData3;
	Parms.K2Node_Event_InHealthPercent = K2Node_Event_InHealthPercent;
	Parms.K2Node_Event_InPlayerData2 = K2Node_Event_InPlayerData2;
	Parms.K2Node_Event_InShieldPercent = K2Node_Event_InShieldPercent;
	Parms.K2Node_Event_InPlayerData1 = K2Node_Event_InPlayerData1;
	Parms.K2Node_Event_bIsDisconnected = K2Node_Event_bIsDisconnected;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft = CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft;
	Parms.CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft1 = CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft1;
	Parms.K2Node_Event_InPlayerData = K2Node_Event_InPlayerData;
	Parms.K2Node_Event_InPlayerData10 = K2Node_Event_InPlayerData10;
	Parms.K2Node_Event_InPlayerName = K2Node_Event_InPlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
