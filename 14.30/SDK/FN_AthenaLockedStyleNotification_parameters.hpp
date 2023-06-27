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

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet
struct UAthenaLockedStyleNotification_C_OnUnlockingInfoSet_Params
{
	bool                                               bShowProgression;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim
struct UAthenaLockedStyleNotification_C_RequestUpdateAnim_Params
{
};

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim
struct UAthenaLockedStyleNotification_C_RequestIntroAnim_Params
{
};

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim
struct UAthenaLockedStyleNotification_C_RequestOutroAnim_Params
{
};

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished
struct UAthenaLockedStyleNotification_C_OutroFinished_Params
{
};

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
struct UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
