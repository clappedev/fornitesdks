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

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod
struct UGA_Athena_FloppingRabbit_Passive_C_SaveOutRod_Params
{
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden
struct UGA_Athena_FloppingRabbit_Passive_C_SetBobberHidden_Params
{
	bool                                               HideBobber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 CurrentWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AB_FloppingRabbit_Weap_Athena_C*             CastedToRabbitWeapon;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Removed_DCA556AE47E7D8C25D9A27899D5C963C
struct UGA_Athena_FloppingRabbit_Passive_C_Removed_DCA556AE47E7D8C25D9A27899D5C963C_Params
{
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility
struct UGA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed
struct UGA_Athena_FloppingRabbit_Passive_C_Seat_Changed_Params
{
	int                                                SeatIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing
struct UGA_Athena_FloppingRabbit_Passive_C_EndFishing_Params
{
};

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive
struct UGA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
