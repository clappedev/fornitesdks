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

// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
struct URadioPlayerWidgetBase_SetControllable_Params
{
	bool                                               bCanControl;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
struct URadioPlayerWidgetBase_OnSourcePlaying_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
struct URadioPlayerWidgetBase_OnSourceFinished_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance
struct URadioPlayerWidgetBase_OnShouldShowDueToEntrance_Params
{
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
struct URadioPlayerWidgetBase_OnRadioStopped_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           LastSource;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
struct URadioPlayerWidgetBase_OnLoadingNewSource_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
struct URadioPlayerWidgetBase_OnFailedToOpenSource_Params
{
	class UStreamingRadioPlayerComponent*              Radio;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp
struct URadioPlayerWidgetBase_OnDisconnectFromComp_Params
{
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
struct URadioPlayerWidgetBase_NativeExitedVehicle_Params
{
};

// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
struct URadioPlayerWidgetBase_NativeEnteredVehicle_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
