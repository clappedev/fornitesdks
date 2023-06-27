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

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Render Standalone Waves
struct ABP_Gerstner_Wave_Controller_C_Render_Standalone_Waves_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Generate Spectrum
struct ABP_Gerstner_Wave_Controller_C_Generate_Spectrum_Params
{
	struct FWaveSpectrumSettings                       Spectrum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FWaterWaveParams>                    Waves;                                                    // (Parm, OutParm)
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Waves On WaterBodies
struct ABP_Gerstner_Wave_Controller_C_Set_Waves_On_WaterBodies_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.RenderWaveTextureData
struct ABP_Gerstner_Wave_Controller_C_RenderWaveTextureData_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.GetWaterWaves
struct ABP_Gerstner_Wave_Controller_C_GetWaterWaves_Params
{
	TArray<struct FWaterWaveParams>                    WaterWaveParams;                                          // (Parm, OutParm)
	float                                              BigWaveDepth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Distance Field
struct ABP_Gerstner_Wave_Controller_C_Set_Distance_Field_Params
{
	class UTexture*                                    rt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Single Wave MPC Parameters
struct ABP_Gerstner_Wave_Controller_C_Set_Single_Wave_MPC_Parameters_Params
{
	struct FWaveParams                                 WaveParams;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.General MPC Params
struct ABP_Gerstner_Wave_Controller_C_General_MPC_Params_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Manual Parameter Overrides
struct ABP_Gerstner_Wave_Controller_C_Manual_Parameter_Overrides_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set All Wave MPC Params
struct ABP_Gerstner_Wave_Controller_C_Set_All_Wave_MPC_Params_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.UserConstructionScript
struct ABP_Gerstner_Wave_Controller_C_UserConstructionScript_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveBeginPlay
struct ABP_Gerstner_Wave_Controller_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveTick
struct ABP_Gerstner_Wave_Controller_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Harvest Material Params
struct ABP_Gerstner_Wave_Controller_C_Harvest_Material_Params_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Spawn Grid
struct ABP_Gerstner_Wave_Controller_C_Spawn_Grid_Params
{
};

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ExecuteUbergraph_BP_Gerstner_Wave_Controller
struct ABP_Gerstner_Wave_Controller_C_ExecuteUbergraph_BP_Gerstner_Wave_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
