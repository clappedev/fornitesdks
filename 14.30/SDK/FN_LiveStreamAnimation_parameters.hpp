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

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole
struct ULiveStreamAnimationSubsystem_SetRole_Params
{
	ELiveStreamAnimationRole                           NewRole;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private
struct ULiveStreamAnimationSubsystem_SetAcceptClientPackets_Private_Params
{
	bool                                               bInShouldAcceptClientPackets;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole
struct ULiveStreamAnimationSubsystem_GetRole_Params
{
	ELiveStreamAnimationRole                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler
struct ULiveStreamAnimationSubsystem_GetDataHandler_Params
{
	class ULiveStreamAnimationDataHandler*             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiveStreamAnimationDataHandler*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
