#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Construct
struct UDailyRewardsSchedule_C_Construct_Params
{
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.Destruct
struct UDailyRewardsSchedule_C_Destruct_Params
{
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.PreConstruct
struct UDailyRewardsSchedule_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DailyRewardsSchedule.DailyRewardsSchedule_C.ExecuteUbergraph_DailyRewardsSchedule
struct UDailyRewardsSchedule_C_ExecuteUbergraph_DailyRewardsSchedule_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
