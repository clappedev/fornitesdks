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

// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility
struct UGAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent
struct UGAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn
struct UGAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
