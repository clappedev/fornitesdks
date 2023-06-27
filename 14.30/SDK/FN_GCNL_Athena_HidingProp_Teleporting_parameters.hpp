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

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__FinishedFunc
struct AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__FinishedFunc_Params
{
};

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__UpdateFunc
struct AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__UpdateFunc_Params
{
};

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__DoFlash__EventFunc
struct AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__DoFlash__EventFunc_Params
{
};

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnLoopingStart
struct AGCNL_Athena_HidingProp_Teleporting_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnRemoval
struct AGCNL_Athena_HidingProp_Teleporting_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting
struct AGCNL_Athena_HidingProp_Teleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
