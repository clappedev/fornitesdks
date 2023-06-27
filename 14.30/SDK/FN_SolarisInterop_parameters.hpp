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

// Function SolarisInterop.VerseCoroutineLib.GetState
struct UVerseCoroutineLib_GetState_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SolarisInterop.VerseCoroutineLib.Deallocate
struct UVerseCoroutineLib_Deallocate_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SolarisInterop.VerseCoroutineLib.Allocate
struct UVerseCoroutineLib_Allocate_Params
{
	class UObject*                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CallerResumeState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SolarisInterop.VerseCoroutineLib.Abort
struct UVerseCoroutineLib_Abort_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbortCallers;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
