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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective
struct UQuestUpdatesLog_C_CanDisplayAnotherObjective_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives
struct UQuestUpdatesLog_C_GetTotalDisplayedObjectives_Params
{
	int                                                NumObjectives;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
struct UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateInfo;                                               // (Parm)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished
struct UQuestUpdatesLog_C_HandleQuestUpdateWidgetFinished_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget
struct UQuestUpdatesLog_C_GetAvailableQuestUpdateWidget_Params
{
	struct FDynamicQuestUpdateInfo                     UpdateInfo;                                               // (Parm)
	class UQuestUpdateEntry_C*                         AvailableWIdget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate
struct UQuestUpdatesLog_C_TryDisplayDynamicQuestStatusUpdate_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets
struct UQuestUpdatesLog_C_CreateQuestUpdateWIdgets_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate
struct UQuestUpdatesLog_C_HandleDisplayDynamicQuestUpdate_Params
{
	class UFortQuestObjectiveInfo*                     QuestObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayStatusUpdate;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAnnouncementUpdate;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.Construct
struct UQuestUpdatesLog_C_Construct_Params
{
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
struct UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
