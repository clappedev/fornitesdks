#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.UpdateVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaSpectatorNameplateStateNameplateState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Name                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateStateTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::UpdateVisibility(enum class EAthenaSpectatorNameplateState NameplateState, const class FString& Name, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class EAthenaSpectatorNameplateState Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable, float K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "UpdateVisibility");

	Params::UAthenaSpectatorNameplate_C_UpdateVisibility_Params Parms;
	Parms.NameplateState = NameplateState;
	Parms.Name = Name;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      InPlayerState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      InPlayerName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::PlayerNameChanged(class AFortPlayerStateAthena* InPlayerState, const class FString& InPlayerName)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "PlayerNameChanged");

	Params::UAthenaSpectatorNameplate_C_PlayerNameChanged_Params Parms;
	Parms.InPlayerState = InPlayerState;
	Parms.InPlayerName = InPlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.SetTeamColor
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor                TeamColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::SetTeamColor(const struct FLinearColor& TeamColor)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "SetTeamColor");

	Params::UAthenaSpectatorNameplate_C_SetTeamColor_Params Parms;
	Parms.TeamColor = TeamColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.SetTeamNumber
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TeamNumber                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::SetTeamNumber(int32 TeamNumber)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "SetTeamNumber");

	Params::UAthenaSpectatorNameplate_C_SetTeamNumber_Params Parms;
	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PlayerStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorNameplate_C::PlayerStateChanged()
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "PlayerStateChanged");

	Params::UAthenaSpectatorNameplate_C_PlayerStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorNameplate_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "Construct");

	Params::UAthenaSpectatorNameplate_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

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

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.UpdateStateFromDistance
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DistanceToCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplate_C::UpdateStateFromDistance(float DistanceToCamera)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "UpdateStateFromDistance");

	Params::UAthenaSpectatorNameplate_C_UpdateStateFromDistance_Params Parms;
	Parms.DistanceToCamera = DistanceToCamera;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.ExecuteUbergraph_AthenaSpectatorNameplate
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaSpectatorNameplateStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateStateTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_InPlayerState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_InPlayerName                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FLinearColor                K2Node_Event_TeamColor                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateStateTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TeamNumber                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DistanceToCamera                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaSpectatorNameplateStateK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaSpectatorNameplateStateK2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorNameplate_C::ExecuteUbergraph_AthenaSpectatorNameplate(int32 EntryPoint, bool Temp_bool_Variable, enum class EAthenaSpectatorNameplateState Temp_byte_Variable, enum class EAthenaSpectatorNameplateState Temp_byte_Variable1, class AFortPlayerStateAthena* K2Node_Event_InPlayerState, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& K2Node_Event_TeamColor, enum class EAthenaSpectatorNameplateState Temp_byte_Variable2, int32 K2Node_Event_TeamNumber, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable1, float K2Node_Event_DistanceToCamera, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, enum class EAthenaSpectatorNameplateState K2Node_Select_Default, enum class EAthenaSpectatorNameplateState K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplate_C", "ExecuteUbergraph_AthenaSpectatorNameplate");

	Params::UAthenaSpectatorNameplate_C_ExecuteUbergraph_AthenaSpectatorNameplate_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_InPlayerState = K2Node_Event_InPlayerState;
	Parms.K2Node_Event_InPlayerName = K2Node_Event_InPlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_TeamColor = K2Node_Event_TeamColor;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Event_TeamNumber = K2Node_Event_TeamNumber;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Event_DistanceToCamera = K2Node_Event_DistanceToCamera;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
