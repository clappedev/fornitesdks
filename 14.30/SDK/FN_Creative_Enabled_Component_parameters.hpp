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

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Can be Enabled
struct UCreative_Enabled_Component_C_Can_be_Enabled_Params
{
	bool                                               bTRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.OnRep_EIsEnabled
struct UCreative_Enabled_Component_C_OnRep_EIsEnabled_Params
{
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsResetting
struct UCreative_Enabled_Component_C_IsResetting_Params
{
	bool                                               bTRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Remaining_Time;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Start
struct UCreative_Enabled_Component_C_Reset_Delay_Start_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Complete
struct UCreative_Enabled_Component_C_Reset_Delay_Complete_Params
{
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Play Mode
struct UCreative_Enabled_Component_C_Set_Enabled_on_Play_Mode_Params
{
	bool                                               Play_Mode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled
struct UCreative_Enabled_Component_C_Set_Enabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsEnabled
struct UCreative_Enabled_Component_C_IsEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Phase
struct UCreative_Enabled_Component_C_Set_Enabled_on_Phase_Params
{
	EFortMinigameState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnabledIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Initialize Component
struct UCreative_Enabled_Component_C_Initialize_Component_Params
{
	class UFortMinigameLogicComponent*                 Logic_Component;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Enabled_Index;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Bind to Minigame
struct UCreative_Enabled_Component_C_Bind_to_Minigame_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame State Changed
struct UCreative_Enabled_Component_C_Minigame_State_Changed_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame Play Mode Changed
struct UCreative_Enabled_Component_C_Minigame_Play_Mode_Changed_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInPlayMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.ExecuteUbergraph_Creative_Enabled_Component
struct UCreative_Enabled_Component_C_ExecuteUbergraph_Creative_Enabled_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Reset Complete__DelegateSignature
struct UCreative_Enabled_Component_C_On_Reset_Complete__DelegateSignature_Params
{
};

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Enabled State Changed__DelegateSignature
struct UCreative_Enabled_Component_C_On_Enabled_State_Changed__DelegateSignature_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
