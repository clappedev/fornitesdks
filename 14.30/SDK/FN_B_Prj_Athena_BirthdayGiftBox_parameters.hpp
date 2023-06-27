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

// Function B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C.OnExploded
struct AB_Prj_Athena_BirthdayGiftBox_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C.ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox
struct AB_Prj_Athena_BirthdayGiftBox_C_ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
