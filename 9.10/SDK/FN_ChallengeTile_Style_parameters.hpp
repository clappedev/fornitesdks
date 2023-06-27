#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChallengeTile_Style.ChallengeTile_Style_C.SetDynamicColors
struct UChallengeTile_Style_C_SetDynamicColors_Params
{
	class UImage*                                      StyleDynamicMaterialTarget;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortChallengeSetStyle                      FortChallengeSetStyle;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeTile_Style.ChallengeTile_Style_C.BP_OnHovered
struct UChallengeTile_Style_C_BP_OnHovered_Params
{
};

// Function ChallengeTile_Style.ChallengeTile_Style_C.BP_OnUnhovered
struct UChallengeTile_Style_C_BP_OnUnhovered_Params
{
};

// Function ChallengeTile_Style.ChallengeTile_Style_C.OnChallengeSetEstablished
struct UChallengeTile_Style_C_OnChallengeSetEstablished_Params
{
	struct FFortChallengeSetStyle                      DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsComplete;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeTile_Style.ChallengeTile_Style_C.ExecuteUbergraph_ChallengeTile_Style
struct UChallengeTile_Style_C_ExecuteUbergraph_ChallengeTile_Style_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
