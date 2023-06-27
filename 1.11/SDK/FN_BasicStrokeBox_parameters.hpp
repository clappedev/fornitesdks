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

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
struct UBasicStrokeBox_C_Customize_Params
{
	int                                                Shape_Style;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Fill_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Stroke_Color;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
struct UBasicStrokeBox_C_Redraw_Params
{
};

// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
struct UBasicStrokeBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
struct UBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
