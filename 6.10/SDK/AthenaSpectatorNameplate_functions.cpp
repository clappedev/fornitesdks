#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorNameplate_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "PreConstruct");

	Params::UAthenaSpectatorNameplate_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::OnPlayerDataSet(class UAthenaRemotePlayerViewData* InPlayerData)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "OnPlayerDataSet");

	Params::UAthenaSpectatorNameplate_C_OnPlayerDataSet_Params Parms;
	Parms.InPlayerData = InPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnDistanceStateChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaSpectatorNameplateDistanceStateNewDistanceState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::OnDistanceStateChanged(enum class EAthenaSpectatorNameplateDistanceState NewDistanceState)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "OnDistanceStateChanged");

	Params::UAthenaSpectatorNameplate_C_OnDistanceStateChanged_Params Parms;
	Parms.NewDistanceState = NewDistanceState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                InTeamColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::OnTeamColorChanged(class UAthenaRemotePlayerViewData* InPlayerData, const struct FLinearColor& InTeamColor)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "OnTeamColorChanged");

	Params::UAthenaSpectatorNameplate_C_OnTeamColorChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InTeamColor = InTeamColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamNumberChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InTeamNumber                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::OnTeamNumberChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InTeamNumber)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "OnTeamNumberChanged");

	Params::UAthenaSpectatorNameplate_C_OnTeamNumberChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InTeamNumber = InTeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      InPlayerName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::OnPlayerNameChanged(class UAthenaRemotePlayerViewData* InPlayerData, const class FString& InPlayerName)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "OnPlayerNameChanged");

	Params::UAthenaSpectatorNameplate_C_OnPlayerNameChanged_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.InPlayerName = InPlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.ExecuteUbergraph_AthenaSpectatorNameplate
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateDistanceStateTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateDistanceStateK2Node_Event_NewDistanceState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_InTeamColor                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InTeamNumber                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_InPlayerName                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaSpectatorNameplate_C::ExecuteUbergraph_AthenaSpectatorNameplate(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool K2Node_Event_IsDesignTime, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3, enum class EAthenaSpectatorNameplateDistanceState Temp_byte_Variable3, enum class EAthenaSpectatorNameplateDistanceState K2Node_Event_NewDistanceState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2, const struct FLinearColor& K2Node_Event_InTeamColor, float K2Node_Select1_Default, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1, int32 K2Node_Event_InTeamNumber, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "ExecuteUbergraph_AthenaSpectatorNameplate");

	Params::UAthenaSpectatorNameplate_C_ExecuteUbergraph_AthenaSpectatorNameplate_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_InPlayerData3 = K2Node_Event_InPlayerData3;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Event_NewDistanceState = K2Node_Event_NewDistanceState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_InPlayerData2 = K2Node_Event_InPlayerData2;
	Parms.K2Node_Event_InTeamColor = K2Node_Event_InTeamColor;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Event_InPlayerData1 = K2Node_Event_InPlayerData1;
	Parms.K2Node_Event_InTeamNumber = K2Node_Event_InTeamNumber;
	Parms.K2Node_Event_InPlayerData = K2Node_Event_InPlayerData;
	Parms.K2Node_Event_InPlayerName = K2Node_Event_InPlayerName;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
