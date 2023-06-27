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

// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.GetPlayer
struct UGA_Athena_PurpleMouse_Throw_C_GetPlayer_Params
{
	class AActor*                                      PlayerOrVehicle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_ActivateAbility
struct UGA_Athena_PurpleMouse_Throw_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_OnEndAbility
struct UGA_Athena_PurpleMouse_Throw_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.ExecuteUbergraph_GA_Athena_PurpleMouse_Throw
struct UGA_Athena_PurpleMouse_Throw_C_ExecuteUbergraph_GA_Athena_PurpleMouse_Throw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
