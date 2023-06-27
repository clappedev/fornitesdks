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

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.SetSkydivingAudioEnabled
struct ABP_SpectatorPawn_C_SetSkydivingAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.GetSkydivingSound
struct ABP_SpectatorPawn_C_GetSkydivingSound_Params
{
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay
struct ABP_SpectatorPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.Handle Parachute Audio State
struct ABP_SpectatorPawn_C_Handle_Parachute_Audio_State_Params
{
};

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn
struct ABP_SpectatorPawn_C_ExecuteUbergraph_BP_SpectatorPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
