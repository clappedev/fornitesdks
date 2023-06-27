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

// Function BlueprintContext.BlueprintContextLibrary.GetContext
struct UBlueprintContextLibrary_GetContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USubsystem*                                  Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USubsystem*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
