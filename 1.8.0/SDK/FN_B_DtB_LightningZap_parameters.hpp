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

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.UserConstructionScript
struct AB_DtB_LightningZap_C_UserConstructionScript_Params
{
};

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ReceiveTick
struct AB_DtB_LightningZap_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.FireLightning
struct AB_DtB_LightningZap_C_FireLightning_Params
{
};

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ExecuteUbergraph_B_DtB_LightningZap
struct AB_DtB_LightningZap_C_ExecuteUbergraph_B_DtB_LightningZap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
