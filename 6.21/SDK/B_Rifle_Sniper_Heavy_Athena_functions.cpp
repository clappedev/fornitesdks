#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.CalculateTraceDistance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPoint                                                       (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPoint                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue4                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue5                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Rifle_Sniper_Heavy_Athena_C::CalculateTraceDistance(struct FVector* StartPoint, struct FVector* EndPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5)
{
	static auto Func = Class->GetFunction("B_Rifle_Sniper_Heavy_Athena_C", "CalculateTraceDistance");

	Params::AB_Rifle_Sniper_Heavy_Athena_C_CalculateTraceDistance_Params Parms;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_Add_VectorVector_ReturnValue4 = CallFunc_Add_VectorVector_ReturnValue4;
	Parms.CallFunc_Add_VectorVector_ReturnValue5 = CallFunc_Add_VectorVector_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);
	if (StartPoint != nullptr)
		*StartPoint = Parms.StartPoint;

	if (EndPoint != nullptr)
		*EndPoint = Parms.EndPoint;

}

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Heavy_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Rifle_Sniper_Heavy_Athena_C", "UserConstructionScript");

	Params::AB_Rifle_Sniper_Heavy_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Rifle_Sniper_Heavy_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_Rifle_Sniper_Heavy_Athena_C", "ReceiveTick");

	Params::AB_Rifle_Sniper_Heavy_Athena_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Rifle_Sniper_Heavy_Athena_C::ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_Rifle_Sniper_Heavy_Athena_C", "ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena");

	Params::AB_Rifle_Sniper_Heavy_Athena_C_ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
