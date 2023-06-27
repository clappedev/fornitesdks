#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
};

// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
};

// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
};

// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
};

// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
};

// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
};

// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
};

// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
};

// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
};

// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
};

// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
};

// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct USlateBlueprintLibrary_ScreenToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
	struct FSlateBrush                                 A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
};

// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
};

// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
};

// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
};

// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
};

// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
};

// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
};

// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
};

// Function UMG.ContentWidget.SetContent
struct UContentWidget_SetContent_Params
{
};

// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
};

// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
};

// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
};

// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
};

// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
};

// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
};

// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
};

// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
};

// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
};

// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
};

// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
};

// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
