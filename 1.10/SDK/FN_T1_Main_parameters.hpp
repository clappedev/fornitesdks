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

// Function T1_Main.T1_Main_C.PreConstruct
struct UT1_Main_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function T1_Main.T1_Main_C.Construct
struct UT1_Main_C_Construct_Params
{
};

// Function T1_Main.T1_Main_C.ExecuteUbergraph_T1_Main
struct UT1_Main_C_ExecuteUbergraph_T1_Main_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
