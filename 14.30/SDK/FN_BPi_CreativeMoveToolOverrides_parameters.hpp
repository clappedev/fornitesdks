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

// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds
struct UBPi_CreativeMoveToolOverrides_C_GetCreativeActorBounds_Params
{
	bool                                               Override_Bounds;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bounds;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin
struct UBPi_CreativeMoveToolOverrides_C_GetCreativeActorOrigin_Params
{
	bool                                               Override;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
