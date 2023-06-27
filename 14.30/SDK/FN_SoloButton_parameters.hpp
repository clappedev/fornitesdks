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

// Function SoloButton.SoloButton_C.SetText
struct USoloButton_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SoloButton.SoloButton_C.HandleSize
struct USoloButton_C_HandleSize_Params
{
};

// Function SoloButton.SoloButton_C.Construct
struct USoloButton_C_Construct_Params
{
};

// Function SoloButton.SoloButton_C.PreConstruct
struct USoloButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SoloButton.SoloButton_C.BP_OnHovered
struct USoloButton_C_BP_OnHovered_Params
{
};

// Function SoloButton.SoloButton_C.BP_OnUnhovered
struct USoloButton_C_BP_OnUnhovered_Params
{
};

// Function SoloButton.SoloButton_C.BP_OnClicked
struct USoloButton_C_BP_OnClicked_Params
{
};

// Function SoloButton.SoloButton_C.BP_OnDisabled
struct USoloButton_C_BP_OnDisabled_Params
{
};

// Function SoloButton.SoloButton_C.BP_OnEnabled
struct USoloButton_C_BP_OnEnabled_Params
{
};

// Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton
struct USoloButton_C_ExecuteUbergraph_SoloButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
