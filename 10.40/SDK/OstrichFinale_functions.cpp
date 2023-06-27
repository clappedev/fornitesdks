#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function OstrichFinale.OstrichFinale_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOstrichFinale_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "PreConstruct");

	Params::UOstrichFinale_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOstrichFinale_C::Construct()
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "Construct");

	Params::UOstrichFinale_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnSelfDestructStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              WarningDuration                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrichFinale_C::OnSelfDestructStart(float WarningDuration)
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnSelfDestructStart");

	Params::UOstrichFinale_C_OnSelfDestructStart_Params Parms;
	Parms.WarningDuration = WarningDuration;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnUpdateSelfDestruct
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrichFinale_C::OnUpdateSelfDestruct(float RemainingTime)
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnUpdateSelfDestruct");

	Params::UOstrichFinale_C_OnUpdateSelfDestruct_Params Parms;
	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnSelfDestructFinish
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOstrichFinale_C::OnSelfDestructFinish()
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnSelfDestructFinish");

	Params::UOstrichFinale_C_OnSelfDestructFinish_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnSetupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOstrichFinale_C::OnSetupComplete()
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnSetupComplete");

	Params::UOstrichFinale_C_OnSetupComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnStartSelfDestructPrime
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrichFinale_C::OnStartSelfDestructPrime(float Duration)
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnStartSelfDestructPrime");

	Params::UOstrichFinale_C_OnStartSelfDestructPrime_Params Parms;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.OnCancelSelfDestructPrime
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOstrichFinale_C::OnCancelSelfDestructPrime()
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "OnCancelSelfDestructPrime");

	Params::UOstrichFinale_C_OnCancelSelfDestructPrime_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OstrichFinale.OstrichFinale_C.ExecuteUbergraph_OstrichFinale
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RemainingTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_WarningDuration                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrichFinale_C::ExecuteUbergraph_OstrichFinale(int32 EntryPoint, float K2Node_Event_RemainingTime, float K2Node_Event_WarningDuration, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Event_Duration, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("OstrichFinale_C", "ExecuteUbergraph_OstrichFinale");

	Params::UOstrichFinale_C_ExecuteUbergraph_OstrichFinale_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RemainingTime = K2Node_Event_RemainingTime;
	Parms.K2Node_Event_WarningDuration = K2Node_Event_WarningDuration;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
