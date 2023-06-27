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

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP
struct UBP_AmbientAudioController_C_UpdateSnowSetupBP_Params
{
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetTargetLPFFreq
struct UBP_AmbientAudioController_C_SetTargetLPFFreq_Params
{
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Trace
struct UBP_AmbientAudioController_C_Trace_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay
struct UBP_AmbientAudioController_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveEndPlay
struct UBP_AmbientAudioController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnCheckIfSurrounded
struct UBP_AmbientAudioController_C_OnCheckIfSurrounded_Params
{
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Evaluate Inside State
struct UBP_AmbientAudioController_C_Evaluate_Inside_State_Params
{
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick
struct UBP_AmbientAudioController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController
struct UBP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
