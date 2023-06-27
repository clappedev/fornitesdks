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

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
struct UCollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio_Params
{
	int                                                NumSlotted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSlots;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
struct UCollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged_Params
{
	ECollectionBookRewardStatus*                       NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
struct UCollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
