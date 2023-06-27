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

// Function FullPartyBarAthena.FullPartyBarAthena_C.GetHoverText
struct UFullPartyBarAthena_C_GetHoverText_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output;                                                   // (Parm, OutParm)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTooltipStat
struct UFullPartyBarAthena_C_GetTooltipStat_Params
{
	struct FGameplayTag                                Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortDisplayAttribute                       OutDisplayAttribute;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Tech_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Tech_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Resistance_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Resistance_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Offense_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Offense_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Fortitude_ToolTipWidget
struct UFullPartyBarAthena_C_Get_Fortitude_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTotalNumFriendCodes
struct UFullPartyBarAthena_C_GetTotalNumFriendCodes_Params
{
	int                                                Num_Codes;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.isTeammateSlotPopulated
struct UFullPartyBarAthena_C_isTeammateSlotPopulated_Params
{
	int                                                inSlotNUmber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.OpenPartyPrivacy
struct UFullPartyBarAthena_C_OpenPartyPrivacy_Params
{
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.HandlePartybarUIFeatureChanged
struct UFullPartyBarAthena_C_HandlePartybarUIFeatureChanged_Params
{
	EFortUIFeature                                     Feature;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                FeatureState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
struct UFullPartyBarAthena_C_Initialize_Params
{
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BindDelegates
struct UFullPartyBarAthena_C_BindDelegates_Params
{
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
struct UFullPartyBarAthena_C_Construct_Params
{
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Destruct
struct UFullPartyBarAthena_C_Destruct_Params
{
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature
struct UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.Tick
struct UFullPartyBarAthena_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
struct UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyBarAthena.FullPartyBarAthena_C.OnButtonHovered__DelegateSignature
struct UFullPartyBarAthena_C_OnButtonHovered__DelegateSignature_Params
{
	struct FText                                       HelpText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
