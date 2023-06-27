#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base_AnimGraphNode_TransitionResult_4B5CF9A149F5B1AB1159D28707D45708
// (BlueprintEvent)
// Parameters:

void UGolfCartVehicleSK_AnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base_AnimGraphNode_TransitionResult_4B5CF9A149F5B1AB1159D28707D45708()
{
	static auto Func = Class->GetFunction("GolfCartVehicleSK_AnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base_AnimGraphNode_TransitionResult_4B5CF9A149F5B1AB1159D28707D45708");

	Params::UGolfCartVehicleSK_AnimBP_Base_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base_AnimGraphNode_TransitionResult_4B5CF9A149F5B1AB1159D28707D45708_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGolfCartVehicleSK_AnimBP_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("GolfCartVehicleSK_AnimBP_Base_C", "BlueprintUpdateAnimation");

	Params::UGolfCartVehicleSK_AnimBP_Base_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GolfCartVehicleSK_AnimBP_Base.GolfCartVehicleSK_AnimBP_Base_C.ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGolfCartVehicleSK_C*        K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEBraking_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBrakingDelta_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBoosting_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetForwardSpeedKmh_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGolfCartVehicleSK_AnimBP_Base_C::ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AGolfCartVehicleSK_C* K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEBraking_ReturnValue, float CallFunc_GetBrakingDelta_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsBoosting_ReturnValue, float CallFunc_GetForwardSpeedKmh_ReturnValue)
{
	static auto Func = Class->GetFunction("GolfCartVehicleSK_AnimBP_Base_C", "ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base");

	Params::UGolfCartVehicleSK_AnimBP_Base_C_ExecuteUbergraph_GolfCartVehicleSK_AnimBP_Base_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK = K2Node_DynamicCast_AsGolf_Cart_Vehicle_SK;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEBraking_ReturnValue = CallFunc_IsEBraking_ReturnValue;
	Parms.CallFunc_GetBrakingDelta_ReturnValue = CallFunc_GetBrakingDelta_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsBoosting_ReturnValue = CallFunc_IsBoosting_ReturnValue;
	Parms.CallFunc_GetForwardSpeedKmh_ReturnValue = CallFunc_GetForwardSpeedKmh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
