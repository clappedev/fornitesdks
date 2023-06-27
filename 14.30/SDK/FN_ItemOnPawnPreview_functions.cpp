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

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::SwitchErebusLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting");

	AItemOnPawnPreview_C_SwitchErebusLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Floor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::SetFloorEnabled(bool Show_Floor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled");

	AItemOnPawnPreview_C_SetFloorEnabled_Params params;
	params.Show_Floor = Show_Floor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::LightControl(bool Active)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl");

	AItemOnPawnPreview_C_LightControl_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::SwitchPCLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting");

	AItemOnPawnPreview_C_SwitchPCLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::SwitchMobileLighting(bool NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting");

	AItemOnPawnPreview_C_SwitchMobileLighting_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
// (Event, Protected, BlueprintEvent)

void AItemOnPawnPreview_C::OnPreviewVisualsSpawned()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned");

	AItemOnPawnPreview_C_OnPreviewVisualsSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void AItemOnPawnPreview_C::UpdateSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings");

	AItemOnPawnPreview_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      InMaterialInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial");

	AItemOnPawnPreview_C_OnSetFloorMaterial_Params params;
	params.InMaterialInstance = InMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete
// (Event, Public, BlueprintEvent)

void AItemOnPawnPreview_C::OnAllLODStreamingComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete");

	AItemOnPawnPreview_C_OnAllLODStreamingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp
// (Event, Public, BlueprintEvent)

void AItemOnPawnPreview_C::OnCurrentVisualsCleanedUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp");

	AItemOnPawnPreview_C_OnCurrentVisualsCleanedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemOnPawnPreview_C::ExecuteUbergraph_ItemOnPawnPreview(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview");

	AItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
