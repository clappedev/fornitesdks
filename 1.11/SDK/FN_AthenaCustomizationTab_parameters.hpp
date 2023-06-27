#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetHeaderToBanner
struct UAthenaCustomizationTab_C_SetHeaderToBanner_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetupBanner
struct UAthenaCustomizationTab_C_SetupBanner_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowVaultItemByCategory
struct UAthenaCustomizationTab_C_ShowVaultItemByCategory_Params
{
	EAthenaCustomizationCategory                       CustomizationType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotHovered
struct UAthenaCustomizationTab_C_HandleSlotHovered_Params
{
	EAthenaCustomizationCategory                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DescriptionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
struct UAthenaCustomizationTab_C_SelectFirstWidget_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowThrobber
struct UAthenaCustomizationTab_C_ShowThrobber_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
struct UAthenaCustomizationTab_C_RefreshInputActions_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
struct UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
struct UAthenaCustomizationTab_C_EndPickingCustomization_Params
{
	bool                                               RestoreFocus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
struct UAthenaCustomizationTab_C_BeginPickingCustomization_Params
{
	EAthenaCustomizationCategory                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               WidgetToReturnFocusTo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Subslot_Index;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
struct UAthenaCustomizationTab_C_RegisterInputActions_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
struct UAthenaCustomizationTab_C_RegisterCancel_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
struct UAthenaCustomizationTab_C_HandleCancel_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Destruct
struct UAthenaCustomizationTab_C_Destruct_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_561_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_561_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
struct UAthenaCustomizationTab_C_Construct_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotUnhovered
struct UAthenaCustomizationTab_C_HandleSlotUnhovered_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
struct UAthenaCustomizationTab_C_OnInputModeChanged_Params
{
	bool*                                              bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
struct UAthenaCustomizationTab_C_OnActivated_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
struct UAthenaCustomizationTab_C_OnDeactivated_Params
{
};

// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
struct UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
