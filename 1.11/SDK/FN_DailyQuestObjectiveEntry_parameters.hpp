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

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo
struct UDailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo_Params
{
	struct FFortMcpQuestObjectiveInfo                  ObjectiveInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.PlayAppearAnimation
struct UDailyQuestObjectiveEntry_C_PlayAppearAnimation_Params
{
};

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update
struct UDailyQuestObjectiveEntry_C_Update_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AchievedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress
struct UDailyQuestObjectiveEntry_C_UpdateProgress_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AchievedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData
struct UDailyQuestObjectiveEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry
struct UDailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
