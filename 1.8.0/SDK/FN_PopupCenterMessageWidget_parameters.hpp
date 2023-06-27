#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
struct UPopupCenterMessageWidget_C_OnModalDisplayed_Params
{
	ECenterPopupMessageStateEnum*                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonActivatablePanel**                    ModalPopup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Construct
struct UPopupCenterMessageWidget_C_Construct_Params
{
};

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.UpdateStateEvent
struct UPopupCenterMessageWidget_C_UpdateStateEvent_Params
{
};

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.Destruct
struct UPopupCenterMessageWidget_C_Destruct_Params
{
};

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
struct UPopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
