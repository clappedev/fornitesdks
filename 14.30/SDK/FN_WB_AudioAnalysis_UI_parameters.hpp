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

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddMPCParameter
struct UWB_AudioAnalysis_UI_C_AddMPCParameter_Params
{
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                Collection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Vec4Index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
struct UWB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
