// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMcpQuestObjectiveInfo ObjectiveInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UDailyQuestObjectiveEntry_C::UpdateFromObjectiveInfo(const struct FFortMcpQuestObjectiveInfo& ObjectiveInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateFromObjectiveInfo");

	UDailyQuestObjectiveEntry_C_UpdateFromObjectiveInfo_Params params;
	params.ObjectiveInfo = ObjectiveInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.PlayAppearAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestObjectiveEntry_C::PlayAppearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.PlayAppearAnimation");

	UDailyQuestObjectiveEntry_C_PlayAppearAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.Update");

	UDailyQuestObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.UpdateProgress");

	UDailyQuestObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestObjectiveEntry_C::SetData(class UObject* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.SetData");

	UDailyQuestObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestObjectiveEntry_C::ExecuteUbergraph_DailyQuestObjectiveEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestObjectiveEntry.DailyQuestObjectiveEntry_C.ExecuteUbergraph_DailyQuestObjectiveEntry");

	UDailyQuestObjectiveEntry_C_ExecuteUbergraph_DailyQuestObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
