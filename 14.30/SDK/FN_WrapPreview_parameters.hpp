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

// Function WrapPreview.WrapPreview_C.UpdateFloorVisibility
struct AWrapPreview_C_UpdateFloorVisibility_Params
{
};

// Function WrapPreview.WrapPreview_C.SwitchErebusLighting
struct AWrapPreview_C_SwitchErebusLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.UpdateLightingScale
struct AWrapPreview_C_UpdateLightingScale_Params
{
};

// Function WrapPreview.WrapPreview_C.SetFloorEnabled
struct AWrapPreview_C_SetFloorEnabled_Params
{
	bool                                               Floor_Enabled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.LightControl
struct AWrapPreview_C_LightControl_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.SwitchPCLighting
struct AWrapPreview_C_SwitchPCLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.SwitchMobileLighting
struct AWrapPreview_C_SwitchMobileLighting_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.HandleLightingScale
struct AWrapPreview_C_HandleLightingScale_Params
{
};

// Function WrapPreview.WrapPreview_C.UpdateSettings
struct AWrapPreview_C_UpdateSettings_Params
{
};

// Function WrapPreview.WrapPreview_C.OnSetFloorMaterial
struct AWrapPreview_C_OnSetFloorMaterial_Params
{
	class UMaterialInterface*                          InMaterialInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
struct AWrapPreview_C_OnPreviewVisualsSpawned_Params
{
};

// Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
struct AWrapPreview_C_ExecuteUbergraph_WrapPreview_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
