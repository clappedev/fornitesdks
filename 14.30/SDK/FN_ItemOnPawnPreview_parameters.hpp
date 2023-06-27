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

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
struct AItemOnPawnPreview_C_SwitchErebusLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
struct AItemOnPawnPreview_C_SetFloorEnabled_Params
{
	bool                                               Show_Floor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
struct AItemOnPawnPreview_C_LightControl_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
struct AItemOnPawnPreview_C_SwitchPCLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
struct AItemOnPawnPreview_C_SwitchMobileLighting_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
struct AItemOnPawnPreview_C_OnPreviewVisualsSpawned_Params
{
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings
struct AItemOnPawnPreview_C_UpdateSettings_Params
{
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
struct AItemOnPawnPreview_C_OnSetFloorMaterial_Params
{
	class UMaterialInterface*                          InMaterialInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete
struct AItemOnPawnPreview_C_OnAllLODStreamingComplete_Params
{
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp
struct AItemOnPawnPreview_C_OnCurrentVisualsCleanedUp_Params
{
};

// Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
struct AItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
