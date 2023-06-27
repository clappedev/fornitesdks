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

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointInPlayerDir
struct ASafeZoneIndicator_C_GetRandomPointInPlayerDir_Params
{
	struct FVector                                     position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointOnBoundary
struct ASafeZoneIndicator_C_GetRandomPointOnBoundary_Params
{
	struct FVector                                     position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState
struct ASafeZoneIndicator_C_GetAthenaGameState_Params
{
	class AAthena_GameState_C*                         AthenaGS;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
struct ASafeZoneIndicator_C_HandleInsideOutsideMix_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
struct ASafeZoneIndicator_C_InitClosestPointAudio_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
struct ASafeZoneIndicator_C_UserConstructionScript_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc
struct ASafeZoneIndicator_C_Pre_Damage_Audio_Ramp__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc
struct ASafeZoneIndicator_C_Pre_Damage_Audio_Ramp__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc
struct ASafeZoneIndicator_C_StormFadeTimeline__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc
struct ASafeZoneIndicator_C_StormFadeTimeline__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__FinishedFunc
struct ASafeZoneIndicator_C_VolumetricStormFadeTimeline__FinishedFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__UpdateFunc
struct ASafeZoneIndicator_C_VolumetricStormFadeTimeline__UpdateFunc_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale
struct ASafeZoneIndicator_C_ResetSafeZoneScale_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.stormy
struct ASafeZoneIndicator_C_stormy_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed
struct ASafeZoneIndicator_C_ReceiveDestroyed_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent
struct ASafeZoneIndicator_C_OnBeginStartingStateEffectsEvent_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell
struct ASafeZoneIndicator_C_Megastorm_Pre_Damage_Tell_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio
struct ASafeZoneIndicator_C_Start_Megastorm_Audio_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Play Storm Grow Audio
struct ASafeZoneIndicator_C_Play_Storm_Grow_Audio_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Trigger Distant Storm Oneshot
struct ASafeZoneIndicator_C_Trigger_Distant_Storm_Oneshot_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.Stop Distant Storm Oneshots
struct ASafeZoneIndicator_C_Stop_Distant_Storm_Oneshots_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
struct ASafeZoneIndicator_C_OnSafeZoneStateChange_Params
{
	EFortSafeZoneState                                 NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
struct ASafeZoneIndicator_C_ReceiveBeginPlay_Params
{
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
struct ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature
struct ASafeZoneIndicator_C_OnSafeZoneStateChangeDispatcher__DelegateSignature_Params
{
	EFortSafeZoneState                                 SafeZoneState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
