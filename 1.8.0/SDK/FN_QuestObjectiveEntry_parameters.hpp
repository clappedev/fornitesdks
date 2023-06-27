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

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.PlayAppearAnimation
struct UQuestObjectiveEntry_C_PlayAppearAnimation_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.Update
struct UQuestObjectiveEntry_C_Update_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AchievedCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
struct UQuestObjectiveEntry_C_UpdateProgress_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AchievedCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData
struct UQuestObjectiveEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
struct UQuestObjectiveEntry_C_ExecuteUbergraph_QuestObjectiveEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
