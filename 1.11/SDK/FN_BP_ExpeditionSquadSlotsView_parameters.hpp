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

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
	int*                                               SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseSquadSlot                          SquadSlotDefinition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                                     OutSquadSlotButtonHost;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortSquadSlotSelectorButton*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
struct UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
struct UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
