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

// Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
struct ATVPostProcessBP_C_IsEnabledForCurrentSubgame_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
struct ATVPostProcessBP_C_UserConstructionScript_Params
{
};

// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
struct ATVPostProcessBP_C_Camera_DisableEffects_Params
{
};

// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
struct ATVPostProcessBP_C_FrontEndCameraSwitch_Params
{
};

// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
struct ATVPostProcessBP_C_ExecuteCameraSwitch_Params
{
};

// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
struct ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
