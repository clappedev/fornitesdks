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

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
struct ALoginCamera_Blueprint_C_OnActivated_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
struct ALoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
