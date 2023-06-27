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

// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
struct UPowerToastWidget_C_UpdatePowerRating_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.StartIntro
struct UPowerToastWidget_C_StartIntro_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.ShowText
struct UPowerToastWidget_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.SetToast
struct UPowerToastWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.Construct
struct UPowerToastWidget_C_Construct_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
struct UPowerToastWidget_C_HandleIntroFinished_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
struct UPowerToastWidget_C_HandleOutroFinished_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
struct UPowerToastWidget_C_HandleAnimationDelay_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
struct UPowerToastWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
struct UPowerToastWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
struct UPowerToastWidget_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (Parm)
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_1
struct UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_1_Params
{
	struct FUniqueNetIdRepl                            NewTeamMemberId;                                          // (Parm)
};

// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
struct UPowerToastWidget_C_HandleSynchronizeTimeout_Params
{
};

// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
struct UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
struct UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
