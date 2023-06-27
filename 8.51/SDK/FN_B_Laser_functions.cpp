// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Laser.B_Laser_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Laser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Laser.B_Laser_C.UserConstructionScript");

	AB_Laser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Laser.B_Laser_C.BndEvt__P_ParticleUnit_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Laser_C::BndEvt__P_ParticleUnit_K2Node_ComponentBoundEvent(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Laser.B_Laser_C.BndEvt__P_ParticleUnit_K2Node_ComponentBoundEvent");

	AB_Laser_C_BndEvt__P_ParticleUnit_K2Node_ComponentBoundEvent_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Laser.B_Laser_C.CE_Burst
// (BlueprintCallable, BlueprintEvent)

void AB_Laser_C::CE_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Laser.B_Laser_C.CE_Burst");

	AB_Laser_C_CE_Burst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Laser.B_Laser_C.ExecuteUbergraph_B_Laser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Laser_C::ExecuteUbergraph_B_Laser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Laser.B_Laser_C.ExecuteUbergraph_B_Laser");

	AB_Laser_C_ExecuteUbergraph_B_Laser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
