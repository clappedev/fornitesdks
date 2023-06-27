#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Outlander_PhaseCannon_Active_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_Outlander_PhaseCannon_Active_C", "OnWhileActiveParticleSystemActivate");

	Params::AGCNL_Outlander_PhaseCannon_Active_C_OnWhileActiveParticleSystemActivate_Params Parms;
	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Outlander_PhaseCannon_Active_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_Outlander_PhaseCannon_Active_C", "WhileActive");

	Params::AGCNL_Outlander_PhaseCannon_Active_C_WhileActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Outlander_PhaseCannon_Active_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCNL_Outlander_PhaseCannon_Active_C", "UserConstructionScript");

	Params::AGCNL_Outlander_PhaseCannon_Active_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_Outlander_PhaseCannon_Active_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCNL_Outlander_PhaseCannon_Active_C", "ReceiveBeginPlay");

	Params::AGCNL_Outlander_PhaseCannon_Active_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GCNL_Outlander_PhaseCannon_Active.GCNL_Outlander_PhaseCannon_Active_C.ExecuteUbergraph_GCNL_Outlander_PhaseCannon_Active
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Outlander_PhaseCannon_Active_C::ExecuteUbergraph_GCNL_Outlander_PhaseCannon_Active(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GCNL_Outlander_PhaseCannon_Active_C", "ExecuteUbergraph_GCNL_Outlander_PhaseCannon_Active");

	Params::AGCNL_Outlander_PhaseCannon_Active_C_ExecuteUbergraph_GCNL_Outlander_PhaseCannon_Active_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
