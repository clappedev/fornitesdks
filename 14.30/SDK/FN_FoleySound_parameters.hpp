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

// Function FoleySound.FoleySoundSubsystem.RemoveLibrary
struct UFoleySoundSubsystem_RemoveLibrary_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFoleySoundLibrary*                          Library;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FoleySound.FoleySoundSubsystem.AddLibrary
struct UFoleySoundSubsystem_AddLibrary_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UFoleySoundLibrary*                          Library;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
