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

// Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription
struct UBasicInteractionWidget_C_UpdateDescription_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction
struct UBasicInteractionWidget_C_InitBasicInteraction_Params
{
};

// Function BasicInteractionWidget.BasicInteractionWidget_C.Construct
struct UBasicInteractionWidget_C_Construct_Params
{
};

// Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget
struct UBasicInteractionWidget_C_ExecuteUbergraph_BasicInteractionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
