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

// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
struct UScoreMessageNumber_C_SetScore_Params
{
	int                                                InScore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
struct UScoreMessageNumber_C_UpdateScoreText_Params
{
};

// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
struct UScoreMessageNumber_C_Construct_Params
{
};

// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
struct UScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
struct UScoreMessageNumber_C_OnScoreValueSet__DelegateSignature_Params
{
	EStatCategory                                      ChangedScoreCategory;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
