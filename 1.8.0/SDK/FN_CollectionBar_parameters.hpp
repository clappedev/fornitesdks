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

// Function CollectionBar.CollectionBar_C.SetIcon
struct UCollectionBar_C_SetIcon_Params
{
	struct FSlateBrush                                 InIcon;                                                   // (Parm)
};

// Function CollectionBar.CollectionBar_C.IsAchievedCountInRange
struct UCollectionBar_C_IsAchievedCountInRange_Params
{
	bool                                               bIsInRange;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.SetAchievedCount
struct UCollectionBar_C_SetAchievedCount_Params
{
	int                                                InAchievedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.Update
struct UCollectionBar_C_Update_Params
{
};

// Function CollectionBar.CollectionBar_C.GetProgressBarPercentage
struct UCollectionBar_C_GetProgressBarPercentage_Params
{
	int                                                AchievedCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CollectionBar.CollectionBar_C.Construct
struct UCollectionBar_C_Construct_Params
{
};

// Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar
struct UCollectionBar_C_ExecuteUbergraph_CollectionBar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
