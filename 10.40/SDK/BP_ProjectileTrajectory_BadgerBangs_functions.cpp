#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_ProjectileTrajectory_BadgerBangs.BP_ProjectileTrajectory_BadgerBangs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileTrajectory_BadgerBangs_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_BadgerBangs_C", "ReceiveBeginPlay");

	Params::ABP_ProjectileTrajectory_BadgerBangs_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_ProjectileTrajectory_BadgerBangs.BP_ProjectileTrajectory_BadgerBangs_C.ExecuteUbergraph_BP_ProjectileTrajectory_BadgerBangs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_BadgerBangs_C::ExecuteUbergraph_BP_ProjectileTrajectory_BadgerBangs(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_BadgerBangs_C", "ExecuteUbergraph_BP_ProjectileTrajectory_BadgerBangs");

	Params::ABP_ProjectileTrajectory_BadgerBangs_C_ExecuteUbergraph_BP_ProjectileTrajectory_BadgerBangs_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
