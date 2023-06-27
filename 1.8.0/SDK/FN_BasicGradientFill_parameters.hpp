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

// Function BasicGradientFill.BasicGradientFill_C.Set Brush Size
struct UBasicGradientFill_C_Set_Brush_Size_Params
{
	struct FVector2D                                   Brush_Size;                                               // (Parm, IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.Set Fill
struct UBasicGradientFill_C_Set_Fill_Params
{
	struct FLinearColor                                Color_1;                                                  // (Parm, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // (Parm, IsPlainOldData)
	float                                              Rotation__0___1_;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.PreConstruct
struct UBasicGradientFill_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill
struct UBasicGradientFill_C_ExecuteUbergraph_BasicGradientFill_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
