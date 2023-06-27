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

// Function WrapPreview.WrapPreview_C.UpdateFloorVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AWrapPreview_C::UpdateFloorVisibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.UpdateFloorVisibility");

	AWrapPreview_C_UpdateFloorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.SwitchErebusLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::SwitchErebusLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.SwitchErebusLighting");

	AWrapPreview_C_SwitchErebusLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.UpdateLightingScale
// (Public, BlueprintCallable, BlueprintEvent)

void AWrapPreview_C::UpdateLightingScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.UpdateLightingScale");

	AWrapPreview_C_UpdateLightingScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Floor_Enabled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::SetFloorEnabled(bool Floor_Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.SetFloorEnabled");

	AWrapPreview_C_SetFloorEnabled_Params params;
	params.Floor_Enabled = Floor_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::LightControl(bool Active)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.LightControl");

	AWrapPreview_C_LightControl_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::SwitchPCLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.SwitchPCLighting");

	AWrapPreview_C_SwitchPCLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::SwitchMobileLighting(bool NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.SwitchMobileLighting");

	AWrapPreview_C_SwitchMobileLighting_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.HandleLightingScale
// (Public, BlueprintCallable, BlueprintEvent)

void AWrapPreview_C::HandleLightingScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.HandleLightingScale");

	AWrapPreview_C_HandleLightingScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void AWrapPreview_C::UpdateSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.UpdateSettings");

	AWrapPreview_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      InMaterialInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.OnSetFloorMaterial");

	AWrapPreview_C_OnSetFloorMaterial_Params params;
	params.InMaterialInstance = InMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)

void AWrapPreview_C::OnPreviewVisualsSpawned()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned");

	AWrapPreview_C_OnPreviewVisualsSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWrapPreview_C::ExecuteUbergraph_WrapPreview(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview");

	AWrapPreview_C_ExecuteUbergraph_WrapPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
