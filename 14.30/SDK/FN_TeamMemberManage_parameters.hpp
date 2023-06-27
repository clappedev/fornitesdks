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

// Function TeamMemberManage.TeamMemberManage_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UTeamMemberManage_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TeamMemberManage.TeamMemberManage_C.OnParticipationChanged
struct UTeamMemberManage_C_OnParticipationChanged_Params
{
	bool                                               bIsParticipating;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberManage.TeamMemberManage_C.BP_OnActivated
struct UTeamMemberManage_C_BP_OnActivated_Params
{
};

// Function TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature
struct UTeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature_Params
{
	struct FName                                       IconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated
struct UTeamMemberManage_C_BP_OnDeactivated_Params
{
};

// Function TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature
struct UTeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberManage.TeamMemberManage_C.OpenBannerEditor
struct UTeamMemberManage_C_OpenBannerEditor_Params
{
};

// Function TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage
struct UTeamMemberManage_C_ExecuteUbergraph_TeamMemberManage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
