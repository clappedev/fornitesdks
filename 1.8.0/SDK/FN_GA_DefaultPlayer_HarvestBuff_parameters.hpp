#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.K2_ActivateAbilityFromEvent
struct UGA_DefaultPlayer_HarvestBuff_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_DefaultPlayer_HarvestBuff.GA_DefaultPlayer_HarvestBuff_C.ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff
struct UGA_DefaultPlayer_HarvestBuff_C_ExecuteUbergraph_GA_DefaultPlayer_HarvestBuff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
