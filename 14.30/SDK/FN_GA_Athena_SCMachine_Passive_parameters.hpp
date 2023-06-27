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

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active
struct UGA_Athena_SCMachine_Passive_C_Check_Resurrection_Active_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer
struct UGA_Athena_SCMachine_Passive_C_SaveOutPlayer_Params
{
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn
struct UGA_Athena_SCMachine_Passive_C_Spawn_Params
{
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied
struct UGA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied_Params
{
	class AFortPlayerPawnAthena*                       FortPlayerPawnAthena;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility
struct UGA_Athena_SCMachine_Passive_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive
struct UGA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
