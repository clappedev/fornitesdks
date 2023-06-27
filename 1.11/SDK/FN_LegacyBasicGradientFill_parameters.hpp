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

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size
struct ULegacyBasicGradientFill_C_Set_Brush_Size_Params
{
	struct FVector2D                                   Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill
struct ULegacyBasicGradientFill_C_Set_Fill_Params
{
	struct FLinearColor                                Color_1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Rotation__0___1_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct
struct ULegacyBasicGradientFill_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill
struct ULegacyBasicGradientFill_C_ExecuteUbergraph_LegacyBasicGradientFill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
