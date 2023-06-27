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

// Function StickyNotification.StickyNotification_C.CloseSticky
struct UStickyNotification_C_CloseSticky_Params
{
};

// Function StickyNotification.StickyNotification_C.BindDelegates
struct UStickyNotification_C_BindDelegates_Params
{
};

// Function StickyNotification.StickyNotification_C.InitializeNotification
struct UStickyNotification_C_InitializeNotification_Params
{
};

// Function StickyNotification.StickyNotification_C.Handle_OutroFinished
struct UStickyNotification_C_Handle_OutroFinished_Params
{
};

// Function StickyNotification.StickyNotification_C.Handle_ShowContentsFinished
struct UStickyNotification_C_Handle_ShowContentsFinished_Params
{
};

// Function StickyNotification.StickyNotification_C.Handle_HideFinished
struct UStickyNotification_C_Handle_HideFinished_Params
{
};

// Function StickyNotification.StickyNotification_C.Handle_IntroFinished
struct UStickyNotification_C_Handle_IntroFinished_Params
{
};

// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_826_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyNotification.StickyNotification_C.Handle_IntroStarted
struct UStickyNotification_C_Handle_IntroStarted_Params
{
};

// Function StickyNotification.StickyNotification_C.OnMouseLeave
struct UStickyNotification_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StickyNotification.StickyNotification_C.OnMouseEnter
struct UStickyNotification_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On Mouse Hovered Changed__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Go_K2Node_ComponentBoundEvent_1161_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyNotification.StickyNotification_C.BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature
struct UStickyNotification_C_BndEvt__ButtonIconText_Close_K2Node_ComponentBoundEvent_1644_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyNotification.StickyNotification_C.Handle_OpenFinished
struct UStickyNotification_C_Handle_OpenFinished_Params
{
};

// Function StickyNotification.StickyNotification_C.HandleAccepted
struct UStickyNotification_C_HandleAccepted_Params
{
};

// Function StickyNotification.StickyNotification_C.Construct
struct UStickyNotification_C_Construct_Params
{
};

// Function StickyNotification.StickyNotification_C.ExecuteUbergraph_StickyNotification
struct UStickyNotification_C_ExecuteUbergraph_StickyNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
