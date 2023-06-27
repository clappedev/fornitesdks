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

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint
struct UWB_AudioAnalysis_FloatGraph_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize
struct UWB_AudioAnalysis_FloatGraph_C_calcWidgetSize_Params
{
	struct FGeometry                                   geom;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value
struct UWB_AudioAnalysis_FloatGraph_C_Set_Value_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct
struct UWB_AudioAnalysis_FloatGraph_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct
struct UWB_AudioAnalysis_FloatGraph_C_Construct_Params
{
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick
struct UWB_AudioAnalysis_FloatGraph_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC
struct UWB_AudioAnalysis_FloatGraph_C_Initialize_MPC_Params
{
	struct FName                                       Parameter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VectorIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph
struct UWB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
