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

// Function PerksList.PerksList_C.ResetVariables
struct UPerksList_C_ResetVariables_Params
{
};

// Function PerksList.PerksList_C.OnGeneratePerkTier
struct UPerksList_C_OnGeneratePerkTier_Params
{
	struct FFortUIPerkTier*                            FortPerkTier;                                             // (Parm)
	class UFortPerkTierWidget_NUI**                    PerkTierWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerksList.PerksList_C.OnGeneratePerk
struct UPerksList_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                FortPerk;                                                 // (Parm)
	class UFortPerkWidget_NUI**                        PerkWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerksList.PerksList_C.Construct
struct UPerksList_C_Construct_Params
{
};

// Function PerksList.PerksList_C.OnHeroChanged
struct UPerksList_C_OnHeroChanged_Params
{
};

// Function PerksList.PerksList_C.OnStateChanged
struct UPerksList_C_OnStateChanged_Params
{
};

// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
struct UPerksList_C_ExecuteUbergraph_PerksList_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
