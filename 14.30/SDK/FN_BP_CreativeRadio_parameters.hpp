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

// Function BP_CreativeRadio.BP_CreativeRadio_C.CheckMinigameStateOnPropertyChanged
struct ABP_CreativeRadio_C_CheckMinigameStateOnPropertyChanged_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.PlaybackTypeUpgradePath
struct ABP_CreativeRadio_C_PlaybackTypeUpgradePath_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.UpdateCachedAttenuationSettings
struct ABP_CreativeRadio_C_UpdateCachedAttenuationSettings_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.SetAttenuationDistance
struct ABP_CreativeRadio_C_SetAttenuationDistance_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintCanInteract
struct ABP_CreativeRadio_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintGetInteractionString
struct ABP_CreativeRadio_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedShouldDriveVisualization
struct ABP_CreativeRadio_C_OnRep_CachedShouldDriveVisualization_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedAttenuationSetting
struct ABP_CreativeRadio_C_OnRep_CachedAttenuationSetting_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedVolumeMultiplier
struct ABP_CreativeRadio_C_OnRep_CachedVolumeMultiplier_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.OnPropertyChanged
struct ABP_CreativeRadio_C_OnPropertyChanged_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.ReceiveBeginPlay
struct ABP_CreativeRadio_C_ReceiveBeginPlay_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
struct ABP_CreativeRadio_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct ABP_CreativeRadio_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.OnWorldReady
struct ABP_CreativeRadio_C_OnWorldReady_Params
{
};

// Function BP_CreativeRadio.BP_CreativeRadio_C.ExecuteUbergraph_BP_CreativeRadio
struct ABP_CreativeRadio_C_ExecuteUbergraph_BP_CreativeRadio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
