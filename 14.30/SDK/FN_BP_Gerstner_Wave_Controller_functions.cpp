// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Render Standalone Waves
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Render_Standalone_Waves()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Render Standalone Waves");

	ABP_Gerstner_Wave_Controller_C_Render_Standalone_Waves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Generate Spectrum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWaveSpectrumSettings   Spectrum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FWaterWaveParams> Waves                          (Parm, OutParm)

void ABP_Gerstner_Wave_Controller_C::Generate_Spectrum(const struct FWaveSpectrumSettings& Spectrum, TArray<struct FWaterWaveParams>* Waves)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Generate Spectrum");

	ABP_Gerstner_Wave_Controller_C_Generate_Spectrum_Params params;
	params.Spectrum = Spectrum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Waves != nullptr)
		*Waves = params.Waves;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Waves On WaterBodies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Set_Waves_On_WaterBodies()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Waves On WaterBodies");

	ABP_Gerstner_Wave_Controller_C_Set_Waves_On_WaterBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.RenderWaveTextureData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::RenderWaveTextureData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.RenderWaveTextureData");

	ABP_Gerstner_Wave_Controller_C_RenderWaveTextureData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.GetWaterWaves
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWaterWaveParams> WaterWaveParams                (Parm, OutParm)
// float                          BigWaveDepth                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Gerstner_Wave_Controller_C::GetWaterWaves(TArray<struct FWaterWaveParams>* WaterWaveParams, float* BigWaveDepth)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.GetWaterWaves");

	ABP_Gerstner_Wave_Controller_C_GetWaterWaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaterWaveParams != nullptr)
		*WaterWaveParams = params.WaterWaveParams;
	if (BigWaveDepth != nullptr)
		*BigWaveDepth = params.BigWaveDepth;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Distance Field
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                rt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gerstner_Wave_Controller_C::Set_Distance_Field(class UTexture* rt)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Distance Field");

	ABP_Gerstner_Wave_Controller_C_Set_Distance_Field_Params params;
	params.rt = rt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Single Wave MPC Parameters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWaveParams             WaveParams                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gerstner_Wave_Controller_C::Set_Single_Wave_MPC_Parameters(const struct FWaveParams& WaveParams, int idx)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set Single Wave MPC Parameters");

	ABP_Gerstner_Wave_Controller_C_Set_Single_Wave_MPC_Parameters_Params params;
	params.WaveParams = WaveParams;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.General MPC Params
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::General_MPC_Params()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.General MPC Params");

	ABP_Gerstner_Wave_Controller_C_General_MPC_Params_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Manual Parameter Overrides
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Manual_Parameter_Overrides()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Manual Parameter Overrides");

	ABP_Gerstner_Wave_Controller_C_Manual_Parameter_Overrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set All Wave MPC Params
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Set_All_Wave_MPC_Params()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Set All Wave MPC Params");

	ABP_Gerstner_Wave_Controller_C_Set_All_Wave_MPC_Params_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.UserConstructionScript");

	ABP_Gerstner_Wave_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveBeginPlay");

	ABP_Gerstner_Wave_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gerstner_Wave_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ReceiveTick");

	ABP_Gerstner_Wave_Controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Harvest Material Params
// (BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Harvest_Material_Params()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Harvest Material Params");

	ABP_Gerstner_Wave_Controller_C_Harvest_Material_Params_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Spawn Grid
// (BlueprintCallable, BlueprintEvent)

void ABP_Gerstner_Wave_Controller_C::Spawn_Grid()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.Spawn Grid");

	ABP_Gerstner_Wave_Controller_C_Spawn_Grid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ExecuteUbergraph_BP_Gerstner_Wave_Controller
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Gerstner_Wave_Controller_C::ExecuteUbergraph_BP_Gerstner_Wave_Controller(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C.ExecuteUbergraph_BP_Gerstner_Wave_Controller");

	ABP_Gerstner_Wave_Controller_C_ExecuteUbergraph_BP_Gerstner_Wave_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
