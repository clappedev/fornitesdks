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

// Function CloseButton.CloseButton_C.SetText
struct UCloseButton_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CloseButton.CloseButton_C.HandleSize
struct UCloseButton_C_HandleSize_Params
{
};

// Function CloseButton.CloseButton_C.BP_OnHovered
struct UCloseButton_C_BP_OnHovered_Params
{
};

// Function CloseButton.CloseButton_C.Construct
struct UCloseButton_C_Construct_Params
{
};

// Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton
struct UCloseButton_C_ExecuteUbergraph_CloseButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
