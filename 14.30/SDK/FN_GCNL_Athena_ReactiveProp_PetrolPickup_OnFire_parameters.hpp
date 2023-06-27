#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.OnLoopingStart
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.Loop
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C_Loop_Params
{
};

// Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.StartLoop
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C_StartLoop_Params
{
};

// Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C_ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
