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

// Function W_AvailableSparks.W_AvailableSparks_C.PlayIncreaseVote
struct UW_AvailableSparks_C_PlayIncreaseVote_Params
{
};

// Function W_AvailableSparks.W_AvailableSparks_C.PlayDecreaseVote
struct UW_AvailableSparks_C_PlayDecreaseVote_Params
{
};

// Function W_AvailableSparks.W_AvailableSparks_C.PlayCountdown
struct UW_AvailableSparks_C_PlayCountdown_Params
{
	float                                              StartValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AvailableSparks.W_AvailableSparks_C.PlayEventOver
struct UW_AvailableSparks_C_PlayEventOver_Params
{
	float                                              StartValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AvailableSparks.W_AvailableSparks_C.PlayAvailableVotes
struct UW_AvailableSparks_C_PlayAvailableVotes_Params
{
};

// Function W_AvailableSparks.W_AvailableSparks_C.PlayIdle
struct UW_AvailableSparks_C_PlayIdle_Params
{
};

// Function W_AvailableSparks.W_AvailableSparks_C.ExecuteUbergraph_W_AvailableSparks
struct UW_AvailableSparks_C_ExecuteUbergraph_W_AvailableSparks_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
