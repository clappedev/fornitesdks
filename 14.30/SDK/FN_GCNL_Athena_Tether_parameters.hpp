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

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove
struct AGCNL_Athena_Tether_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive
struct AGCNL_Athena_Tether_C_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio
struct AGCNL_Athena_Tether_C_UpdateAudio_Params
{
	int                                                Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc
struct AGCNL_Athena_Tether_C_ScaleInSkis__FinishedFunc_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc
struct AGCNL_Athena_Tether_C_ScaleInSkis__UpdateFunc_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick
struct AGCNL_Athena_Tether_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication
struct AGCNL_Athena_Tether_C_OnApplication_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval
struct AGCNL_Athena_Tether_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature
struct AGCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OneshotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF
struct AGCNL_Athena_Tether_C_StartFF_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF
struct AGCNL_Athena_Tether_C_UpdateFF_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF
struct AGCNL_Athena_Tether_C_StopFF_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL
struct AGCNL_Athena_Tether_C_InitializeTetherGCNL_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay
struct AGCNL_Athena_Tether_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer
struct AGCNL_Athena_Tether_C_ScaleInSkisForPlayer_Params
{
};

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether
struct AGCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
