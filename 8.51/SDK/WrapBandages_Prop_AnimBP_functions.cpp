#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWrapBandages_Prop_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("WrapBandages_Prop_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UWrapBandages_Prop_AnimBP_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

// Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.ExecuteUbergraph_WrapBandages_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_ConsumableSmall_Bandages_Athena_C*K2Node_DynamicCast_AsB_Consumable_Small_Bandages_Athena          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCustomGender       CallFunc_GetCharacterGender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWrapBandages_Prop_AnimBP_C::ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_ConsumableSmall_Bandages_Athena_C* K2Node_DynamicCast_AsB_Consumable_Small_Bandages_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue)
{
	static auto Func = Class->GetFunction("WrapBandages_Prop_AnimBP_C", "ExecuteUbergraph_WrapBandages_Prop_AnimBP");

	Params::UWrapBandages_Prop_AnimBP_C_ExecuteUbergraph_WrapBandages_Prop_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Consumable_Small_Bandages_Athena = K2Node_DynamicCast_AsB_Consumable_Small_Bandages_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
