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

// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
struct AVaultRotator_C_PlaySoundWhenEnabled_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.SetBackgroundColor
struct AVaultRotator_C_SetBackgroundColor_Params
{
	struct FLinearColor                                RGBA0;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RGBA1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
struct AVaultRotator_C_ToggleBackgroundText_Params
{
	bool                                               bDisplayText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.LightControl
struct AVaultRotator_C_LightControl_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.SwitchPCLighting
struct AVaultRotator_C_SwitchPCLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
struct AVaultRotator_C_SwitchPCLighting_LOWDetail_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
struct AVaultRotator_C_SwitchMobileLighting_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.SetBackgroundString
struct AVaultRotator_C_SetBackgroundString_Params
{
	int                                                StringIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
struct AVaultRotator_C_CameraTurn_0_to_180__FinishedFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
struct AVaultRotator_C_CameraTurn_0_to_180__UpdateFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
struct AVaultRotator_C_CameraTurn_180_to_360__FinishedFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
struct AVaultRotator_C_CameraTurn_180_to_360__UpdateFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
struct AVaultRotator_C_Timeline_Zoom__FinishedFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
struct AVaultRotator_C_Timeline_Zoom__UpdateFunc_Params
{
};

// Function VaultRotator.VaultRotator_C.ReceiveBeginPlay
struct AVaultRotator_C_ReceiveBeginPlay_Params
{
};

// Function VaultRotator.VaultRotator_C.UpdateSettings
struct AVaultRotator_C_UpdateSettings_Params
{
};

// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
struct AVaultRotator_C_OnCameraTransitionReady_Params
{
	bool                                               bPrimaryToSecondary;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAccountItemDefinition*                  PrimaryRequestedItem;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSceneTransitionOptions                     Options;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
struct AVaultRotator_C_OnTargetZoomLevelSet_Params
{
	float                                              TargetZoomLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
struct AVaultRotator_C_ExecuteUbergraph_VaultRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
