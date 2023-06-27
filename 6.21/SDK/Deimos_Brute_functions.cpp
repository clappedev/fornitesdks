#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Deimos_Brute.Deimos_Brute_C.OnRep_isTarget
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UChildActorComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeimos_Brute_C::OnRep_isTarget(const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "OnRep_isTarget");

	Params::ADeimos_Brute_C_OnRep_isTarget_Params Parms;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeimos_Brute_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "UserConstructionScript");

	Params::ADeimos_Brute_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.IgnitePropaneTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RemainingFuseTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               JustDrop                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADeimos_Brute_C::IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop)
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "IgnitePropaneTank");

	Params::ADeimos_Brute_C_IgnitePropaneTank_Params Parms;
	Parms.Pawn = Pawn;
	Parms.RemainingFuseTime = RemainingFuseTime;
	Parms.JustDrop = JustDrop;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.FSMRemovePropaneTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeimos_Brute_C::FSMRemovePropaneTank()
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "FSMRemovePropaneTank");

	Params::ADeimos_Brute_C_FSMRemovePropaneTank_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.FSMFailedToSpawnTank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeimos_Brute_C::FSMFailedToSpawnTank()
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "FSMFailedToSpawnTank");

	Params::ADeimos_Brute_C_FSMFailedToSpawnTank_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.FSMBeginPropaneTankMelee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADeimos_Brute_C::FSMBeginPropaneTankMelee()
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "FSMBeginPropaneTankMelee");

	Params::ADeimos_Brute_C_FSMBeginPropaneTankMelee_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.BeeCloudDespawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Cloud                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeimos_Brute_C::BeeCloudDespawned(class AFortProjectileBase* Cloud)
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "BeeCloudDespawned");

	Params::ADeimos_Brute_C_BeeCloudDespawned_Params Parms;
	Parms.Cloud = Cloud;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.ManageBurpEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADeimos_Brute_C::ManageBurpEffect(bool Enabled)
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "ManageBurpEffect");

	Params::ADeimos_Brute_C_ManageBurpEffect_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADeimos_Brute_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "ReceiveBeginPlay");

	Params::ADeimos_Brute_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Deimos_Brute.Deimos_Brute_C.ExecuteUbergraph_Deimos_Brute
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_Pawn                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RemainingFuseTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_JustDrop                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_Event_Cloud                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADeimos_Brute_C::ExecuteUbergraph_Deimos_Brute(int32 EntryPoint, class AFortPawn* K2Node_Event_Pawn, float K2Node_Event_RemainingFuseTime, bool K2Node_Event_JustDrop, class AFortProjectileBase* K2Node_Event_Cloud, bool K2Node_Event_Enabled)
{
	static auto Func = Class->GetFunction("Deimos_Brute_C", "ExecuteUbergraph_Deimos_Brute");

	Params::ADeimos_Brute_C_ExecuteUbergraph_Deimos_Brute_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.K2Node_Event_RemainingFuseTime = K2Node_Event_RemainingFuseTime;
	Parms.K2Node_Event_JustDrop = K2Node_Event_JustDrop;
	Parms.K2Node_Event_Cloud = K2Node_Event_Cloud;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
