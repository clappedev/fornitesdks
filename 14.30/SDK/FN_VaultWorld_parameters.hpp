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

// Function VaultWorld.VaultWorld_C.GetVaultRotator
struct AVaultWorld_C_GetVaultRotator_Params
{
	class AVaultRotator_C*                             VaultRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VaultWorld.VaultWorld_C.OnSetupBackground
struct AVaultWorld_C_OnSetupBackground_Params
{
	class UTexture2D*                                  LoadedBackgroundTexture;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTrackDynamicBackground                     BackgroundInfo;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VaultWorld.VaultWorld_C.OnTransitionBackground
struct AVaultWorld_C_OnTransitionBackground_Params
{
	bool                                               bPlayForward;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultWorld.VaultWorld_C.ReceiveBeginPlay
struct AVaultWorld_C_ReceiveBeginPlay_Params
{
};

// Function VaultWorld.VaultWorld_C.OnUpdateDisplay
struct AVaultWorld_C_OnUpdateDisplay_Params
{
	bool                                               bShowFloor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowEffects;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
struct AVaultWorld_C_ExecuteUbergraph_VaultWorld_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
