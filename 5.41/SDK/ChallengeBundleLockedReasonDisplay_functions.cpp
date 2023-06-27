#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.GetTimespanValue
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   Result                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetValue_ReturnValue                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleLockedReasonDisplay_C::GetTimespanValue(struct FTimespan* Result, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FTimespan& CallFunc_GetValue_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "GetTimespanValue");

	Params::UChallengeBundleLockedReasonDisplay_C_GetTimespanValue_Params Parms;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.HandleTick
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeBundleLockedReasonDisplay_C::HandleTick(class UObject* Source)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "HandleTick");

	Params::UChallengeBundleLockedReasonDisplay_C_HandleTick_Params Parms;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetTimespanSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UInterfaceProperty_                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeBundleLockedReasonDisplay_C::SetTimespanSource(UInterfaceProperty_ Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "SetTimespanSource");

	Params::UChallengeBundleLockedReasonDisplay_C_SetTimespanSource_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue1 = CallFunc_Conv_InterfaceToObject_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue2 = CallFunc_Conv_InterfaceToObject_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue3 = CallFunc_Conv_InterfaceToObject_ReturnValue3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.UpdateLockReasonDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                   CallFunc_GetTimespanValue_Result                                 (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatLockedReason_ReturnValue                          ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UChallengeBundleLockedReasonDisplay_C::UpdateLockReasonDisplay(const struct FTimespan& CallFunc_GetTimespanValue_Result, class FText CallFunc_FormatLockedReason_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "UpdateLockReasonDisplay");

	Params::UChallengeBundleLockedReasonDisplay_C_UpdateLockReasonDisplay_Params Parms;
	Parms.CallFunc_GetTimespanValue_Result = CallFunc_GetTimespanValue_Result;
	Parms.CallFunc_FormatLockedReason_ReturnValue = CallFunc_FormatLockedReason_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetLockReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortChallengeBundleInfoLockedReasonValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UChallengeBundleLockedReasonDisplay_C::SetLockReason(const struct FFortChallengeBundleInfoLockedReason& Value)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "SetLockReason");

	Params::UChallengeBundleLockedReasonDisplay_C_SetLockReason_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeBundleLockedReasonDisplay_C::Construct()
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "Construct");

	Params::UChallengeBundleLockedReasonDisplay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.ExecuteUbergraph_ChallengeBundleLockedReasonDisplay
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeBundleLockedReasonDisplay_C::ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ChallengeBundleLockedReasonDisplay_C", "ExecuteUbergraph_ChallengeBundleLockedReasonDisplay");

	Params::UChallengeBundleLockedReasonDisplay_C_ExecuteUbergraph_ChallengeBundleLockedReasonDisplay_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
