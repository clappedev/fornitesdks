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

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeOnFireAudioComponent
struct AGCNL_CurieState_ElementAttached_Fire_C_FadeOnFireAudioComponent_Params
{
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ClearAllHandles
struct AGCNL_CurieState_ElementAttached_Fire_C_ClearAllHandles_Params
{
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.UpdatePlayerVisualsByState
struct AGCNL_CurieState_ElementAttached_Fire_C_UpdatePlayerVisualsByState_Params
{
	TEnumAsByte<EB_Enum_PlayerFireStates>              PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.DeactivateBodyFX
struct AGCNL_CurieState_ElementAttached_Fire_C_DeactivateBodyFX_Params
{
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ActivateBodyFX
struct AGCNL_CurieState_ElementAttached_Fire_C_ActivateBodyFX_Params
{
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged
struct AGCNL_CurieState_ElementAttached_Fire_C_OnCurieStateChanged_Params
{
	class UObject*                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCurieContainerHandle                       ContainerHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                StateIdentifier;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireState
struct AGCNL_CurieState_ElementAttached_Fire_C_GetPlayerFireState_Params
{
	TEnumAsByte<EB_Enum_PlayerFireStates>              Player_State;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.SetBodyFXParameters
struct AGCNL_CurieState_ElementAttached_Fire_C_SetBodyFXParameters_Params
{
	TEnumAsByte<EB_Enum_PlayerFireStates>              PreviousPlayerFireState;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval
struct AGCNL_CurieState_ElementAttached_Fire_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication
struct AGCNL_CurieState_ElementAttached_Fire_C_OnApplication_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut
struct AGCNL_CurieState_ElementAttached_Fire_C_FadeBodyFXOut_Params
{
};

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire
struct AGCNL_CurieState_ElementAttached_Fire_C_ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
