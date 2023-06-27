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

// Function GCNL_Athena_Flopper_Thermal_PostProcess.GCNL_Athena_Flopper_Thermal_PostProcess_C.Timeline_0__FinishedFunc
struct AGCNL_Athena_Flopper_Thermal_PostProcess_C_Timeline_0__FinishedFunc_Params
{
};

// Function GCNL_Athena_Flopper_Thermal_PostProcess.GCNL_Athena_Flopper_Thermal_PostProcess_C.Timeline_0__UpdateFunc
struct AGCNL_Athena_Flopper_Thermal_PostProcess_C_Timeline_0__UpdateFunc_Params
{
};

// Function GCNL_Athena_Flopper_Thermal_PostProcess.GCNL_Athena_Flopper_Thermal_PostProcess_C.OnRemoval
struct AGCNL_Athena_Flopper_Thermal_PostProcess_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Flopper_Thermal_PostProcess.GCNL_Athena_Flopper_Thermal_PostProcess_C.OnLoopingStart
struct AGCNL_Athena_Flopper_Thermal_PostProcess_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_Athena_Flopper_Thermal_PostProcess.GCNL_Athena_Flopper_Thermal_PostProcess_C.ExecuteUbergraph_GCNL_Athena_Flopper_Thermal_PostProcess
struct AGCNL_Athena_Flopper_Thermal_PostProcess_C_ExecuteUbergraph_GCNL_Athena_Flopper_Thermal_PostProcess_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
