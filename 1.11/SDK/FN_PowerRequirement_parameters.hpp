#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
struct UPowerRequirement_C_GenerateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
struct UPowerRequirement_C_SetUIForRequired_Params
{
	int                                                PartyPower;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
struct UPowerRequirement_C_SetUIForRecommended_Params
{
	int                                                PartyPower;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.Update
struct UPowerRequirement_C_Update_Params
{
};

// Function PowerRequirement.PowerRequirement_C.SetRequirements
struct UPowerRequirement_C_SetRequirements_Params
{
	int                                                RequiredPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecommendedPower;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRequirement.PowerRequirement_C.Construct
struct UPowerRequirement_C_Construct_Params
{
};

// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
struct UPowerRequirement_C_PlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
struct UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
