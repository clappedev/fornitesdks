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

// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
struct USocialPanel_C_Play_Panel_Animation_Sound_Params
{
};

// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
struct USocialPanel_C_ClosePanelAfterAnimation_Params
{
};

// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_1
struct USocialPanel_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SocialPanel.SocialPanel_C.ClosePanel
struct USocialPanel_C_ClosePanel_Params
{
};

// Function SocialPanel.SocialPanel_C.HandleOutroEnded
struct USocialPanel_C_HandleOutroEnded_Params
{
};

// Function SocialPanel.SocialPanel_C.OnBeginOutro
struct USocialPanel_C_OnBeginOutro_Params
{
};

// Function SocialPanel.SocialPanel_C.OnBeginIntro
struct USocialPanel_C_OnBeginIntro_Params
{
};

// Function SocialPanel.SocialPanel_C.HandleIntroEnded
struct USocialPanel_C_HandleIntroEnded_Params
{
};

// Function SocialPanel.SocialPanel_C.Destruct
struct USocialPanel_C_Destruct_Params
{
};

// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
struct USocialPanel_C_ExecuteUbergraph_SocialPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
