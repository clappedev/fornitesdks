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

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
struct UGAB_AthenaDBNO_C_GetInitialHealAmount_Params
{
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
struct UGAB_AthenaDBNO_C_InitializeDeathHitDirection_Params
{
	struct FGameplayEventData                          EventHitData;                                             // (Parm)
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnCancelled_F0F6785443BD2E74F5591884CB19F35F_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnInterrupted_F0F6785443BD2E74F5591884CB19F35F_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnBlendOut_F0F6785443BD2E74F5591884CB19F35F_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
struct UGAB_AthenaDBNO_C_OnCompleted_F0F6785443BD2E74F5591884CB19F35F_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
struct UGAB_AthenaDBNO_C_OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
struct UGAB_AthenaDBNO_C_OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
struct UGAB_AthenaDBNO_C_K2_OnEndAbility_Params
{
};

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
struct UGAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
