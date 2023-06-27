#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.InitializeBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaSpectatorHitPointBarTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorHitPointBarTypeTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorHitPointBarTypeTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorHitPointBarTypeTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorHitPointBarTypeTemp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHitPointBar_C::InitializeBar(enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable1, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable2, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable3, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable4, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "InitializeBar");

	Params::UAthenaSpectatorHitPointBar_C_InitializeBar_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "PreConstruct");

	Params::UAthenaSpectatorHitPointBar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBars_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::UpdateBars_BP()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "UpdateBars_BP");

	Params::UAthenaSpectatorHitPointBar_C_UpdateBars_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::OnDBNOChanged_BP()
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnDBNOChanged_BP");

	Params::UAthenaSpectatorHitPointBar_C_OnDBNOChanged_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsDBNO                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHitPointBar_C::OnDBNOChanged(bool bInIsDBNO)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnDBNOChanged");

	Params::UAthenaSpectatorHitPointBar_C_OnDBNOChanged_Params Parms;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnCurrentValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InCurrentValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHitPointBar_C::OnCurrentValueChanged(float InCurrentValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnCurrentValueChanged");

	Params::UAthenaSpectatorHitPointBar_C_OnCurrentValueChanged_Params Parms;
	Parms.InCurrentValue = InCurrentValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDeltaValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDeltaValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHitPointBar_C::OnDeltaValueChanged(float InDeltaValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnDeltaValueChanged");

	Params::UAthenaSpectatorHitPointBar_C_OnDeltaValueChanged_Params Parms;
	Parms.InDeltaValue = InDeltaValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.ExecuteUbergraph_AthenaSpectatorHitPointBar
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InDeltaValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bInIsDBNO                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InCurrentValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHitPointBar_C::ExecuteUbergraph_AthenaSpectatorHitPointBar(int32 EntryPoint, float K2Node_Event_InDeltaValue, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum1_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool K2Node_Event_bInIsDBNO, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Event_InCurrentValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "ExecuteUbergraph_AthenaSpectatorHitPointBar");

	Params::UAthenaSpectatorHitPointBar_C_ExecuteUbergraph_AthenaSpectatorHitPointBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InDeltaValue = K2Node_Event_InDeltaValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bInIsDBNO = K2Node_Event_bInIsDBNO;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_InCurrentValue = K2Node_Event_InCurrentValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
