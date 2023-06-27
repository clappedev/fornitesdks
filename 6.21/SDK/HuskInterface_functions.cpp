#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HuskInterface.HuskInterface_C.ManageBurpEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHuskInterface_C::ManageBurpEffect(bool Enabled)
{
	static auto Func = Class->GetFunction("HuskInterface_C", "ManageBurpEffect");

	Params::UHuskInterface_C_ManageBurpEffect_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HuskInterface.HuskInterface_C.BeeCloudDespawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Cloud                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHuskInterface_C::BeeCloudDespawned(class AFortProjectileBase* Cloud)
{
	static auto Func = Class->GetFunction("HuskInterface_C", "BeeCloudDespawned");

	Params::UHuskInterface_C_BeeCloudDespawned_Params Parms;
	Parms.Cloud = Cloud;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HuskInterface.HuskInterface_C.FSMBeginPropaneTankMelee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHuskInterface_C::FSMBeginPropaneTankMelee()
{
	static auto Func = Class->GetFunction("HuskInterface_C", "FSMBeginPropaneTankMelee");

	Params::UHuskInterface_C_FSMBeginPropaneTankMelee_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HuskInterface.HuskInterface_C.FSMFailedToSpawnTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHuskInterface_C::FSMFailedToSpawnTank()
{
	static auto Func = Class->GetFunction("HuskInterface_C", "FSMFailedToSpawnTank");

	Params::UHuskInterface_C_FSMFailedToSpawnTank_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HuskInterface.HuskInterface_C.FSMRemovePropaneTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHuskInterface_C::FSMRemovePropaneTank()
{
	static auto Func = Class->GetFunction("HuskInterface_C", "FSMRemovePropaneTank");

	Params::UHuskInterface_C_FSMRemovePropaneTank_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HuskInterface.HuskInterface_C.IgnitePropaneTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RemainingFuseTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               JustDrop                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHuskInterface_C::IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop)
{
	static auto Func = Class->GetFunction("HuskInterface_C", "IgnitePropaneTank");

	Params::UHuskInterface_C_IgnitePropaneTank_Params Parms;
	Parms.Pawn = Pawn;
	Parms.RemainingFuseTime = RemainingFuseTime;
	Parms.JustDrop = JustDrop;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
