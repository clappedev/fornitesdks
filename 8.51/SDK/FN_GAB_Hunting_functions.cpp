// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAB_Hunting.GAB_Hunting_C.UpdatePositionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         PosArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 NewPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasValidData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::UpdatePositionData(struct FVector NewPosition, TArray<struct FVector>* PosArray, float* MaxDistance, bool* HasValidData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.UpdatePositionData");

	UGAB_Hunting_C_UpdatePositionData_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosArray != nullptr)
		*PosArray = params.PosArray;
	if (MaxDistance != nullptr)
		*MaxDistance = params.MaxDistance;
	if (HasValidData != nullptr)
		*HasValidData = params.HasValidData;
}


// Function GAB_Hunting.GAB_Hunting_C.UpdateDistanceData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  DistArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          NewDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasValidData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::UpdateDistanceData(float NewDistance, TArray<float>* DistArray, float* MinValue, float* MaxValue, bool* HasValidData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.UpdateDistanceData");

	UGAB_Hunting_C_UpdateDistanceData_Params params;
	params.NewDistance = NewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistArray != nullptr)
		*DistArray = params.DistArray;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
	if (HasValidData != nullptr)
		*HasValidData = params.HasValidData;
}


// Function GAB_Hunting.GAB_Hunting_C.OnMoveFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::OnMoveFinished(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnMoveFinished");

	UGAB_Hunting_C_OnMoveFinished_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnRequestFailed
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnRequestFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnRequestFailed");

	UGAB_Hunting_C_OnRequestFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnCancelled
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnCancelled");

	UGAB_Hunting_C_OnCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnInterrupted");

	UGAB_Hunting_C_OnInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnComplete
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnComplete");

	UGAB_Hunting_C_OnComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Hunting_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility");

	UGAB_Hunting_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility");

	UGAB_Hunting_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnHuntingQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::OnHuntingQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnHuntingQueryFinished");

	UGAB_Hunting_C_OnHuntingQueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Hunting_C::OnTargetPerceptionUpdated_Event_1(class AActor* Actor, struct FAIStimulus Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event_1");

	UGAB_Hunting_C_OnTargetPerceptionUpdated_Event_1_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.StartQuery
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::StartQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.StartQuery");

	UGAB_Hunting_C_StartQuery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.Restart Hunting
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::Restart_Hunting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.Restart Hunting");

	UGAB_Hunting_C_Restart_Hunting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.StoreGoalDistance
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::StoreGoalDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.StoreGoalDistance");

	UGAB_Hunting_C_StoreGoalDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Hunting_C::ExecuteUbergraph_GAB_Hunting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting");

	UGAB_Hunting_C_ExecuteUbergraph_GAB_Hunting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
