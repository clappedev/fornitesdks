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

// Function Combined_Horde.Combined_Horde_C.PreConstruct
struct UCombined_Horde_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Combined_Horde.Combined_Horde_C.Construct
struct UCombined_Horde_C_Construct_Params
{
};

// Function Combined_Horde.Combined_Horde_C.ExecuteUbergraph_Combined_Horde
struct UCombined_Horde_C_ExecuteUbergraph_Combined_Horde_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
