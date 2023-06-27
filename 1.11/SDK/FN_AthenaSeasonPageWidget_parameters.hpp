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

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.UpdateDynamicData
struct UAthenaSeasonPageWidget_C_UpdateDynamicData_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.GetFirstLevel
struct UAthenaSeasonPageWidget_C_GetFirstLevel_Params
{
	int                                                FirstLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.HandleUsingGamepadChanged
struct UAthenaSeasonPageWidget_C_HandleUsingGamepadChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddFreeRewards
struct UAthenaSeasonPageWidget_C_AddFreeRewards_Params
{
	int                                                InColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaSeasonLevelFreeRewardsWidget_C*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddPaidRewards
struct UAthenaSeasonPageWidget_C_AddPaidRewards_Params
{
	int                                                InColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaSeasonLevelPaidRewardsWidget_C*       OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PagePopulationComplete
struct UAthenaSeasonPageWidget_C_PagePopulationComplete_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ContainsLevel
struct UAthenaSeasonPageWidget_C_ContainsLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.IsFull
struct UAthenaSeasonPageWidget_C_IsFull_Params
{
	bool                                               Full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddLevelWidgets
struct UAthenaSeasonPageWidget_C_AddLevelWidgets_Params
{
	class UFortSeasonPassLevelInfo*                    LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USeasonPassLevelWidget*>              LevelWidgets;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.BndEvt__RightPaidBtn_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonPageWidget_C_BndEvt__RightPaidBtn_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.BndEvt__RightFreeBtn_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonPageWidget_C_BndEvt__RightFreeBtn_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.BndEvt__LeftFreeBtn_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonPageWidget_C_BndEvt__LeftFreeBtn_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.BndEvt__LeftPaidBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonPageWidget_C_BndEvt__LeftPaidBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Construct
struct UAthenaSeasonPageWidget_C_Construct_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Destruct
struct UAthenaSeasonPageWidget_C_Destruct_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageRight
struct UAthenaSeasonPageWidget_C_NavigatePageRight_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageLeft
struct UAthenaSeasonPageWidget_C_NavigatePageLeft_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.OnBattlePassChanged
struct UAthenaSeasonPageWidget_C_OnBattlePassChanged_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ExecuteUbergraph_AthenaSeasonPageWidget
struct UAthenaSeasonPageWidget_C_ExecuteUbergraph_AthenaSeasonPageWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageRight__DelegateSignature
struct UAthenaSeasonPageWidget_C_PageRight__DelegateSignature_Params
{
};

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageLeft__DelegateSignature
struct UAthenaSeasonPageWidget_C_PageLeft__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
