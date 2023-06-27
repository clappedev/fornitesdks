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

// Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup
struct USquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex
struct USquadSlotGroup_C_DarkenAllSlotsExceptIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot
struct USquadSlotGroup_C_SelectSquadSlot_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget
struct USquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility
struct USquadSlotGroup_C_Update_Squad_Slot_Visibility_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots
struct USquadSlotGroup_C_AddSquadSlots_Params
{
	TArray<class UWidget*>                             SquadSlots;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct
struct USquadSlotGroup_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter
struct USquadSlotGroup_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave
struct USquadSlotGroup_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup
struct USquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseLeave__DelegateSignature
struct USquadSlotGroup_C_HandleMouseLeave__DelegateSignature_Params
{
};

// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseEnter__DelegateSignature
struct USquadSlotGroup_C_HandleMouseEnter__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
