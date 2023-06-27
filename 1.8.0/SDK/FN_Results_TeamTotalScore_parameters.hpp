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

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
struct UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
struct UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
struct UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
struct UResults_TeamTotalScore_C_SkipToConvertScoreFinalState_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
struct UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
struct UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
struct UResults_TeamTotalScore_C_Initialize_Params
{
	class UFortUIScoreReport*                          Score_Report;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
struct UResults_TeamTotalScore_C_Count_Score_Sequence_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
struct UResults_TeamTotalScore_C_Count_Score_Intro_Sequence_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
struct UResults_TeamTotalScore_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
struct UResults_TeamTotalScore_C_Convert_Score_Intro_Sequence_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
struct UResults_TeamTotalScore_C_Convert_Score_Sequence_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
struct UResults_TeamTotalScore_C_Count_Score_Interpolation_Finished_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
struct UResults_TeamTotalScore_C_Convert_Score_Interpolation_Finished_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
struct UResults_TeamTotalScore_C_Teleport_Pad_Intro_Sequence_Params
{
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
struct UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HadCompleted;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
struct UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
struct UResults_TeamTotalScore_C_Count_Score_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
