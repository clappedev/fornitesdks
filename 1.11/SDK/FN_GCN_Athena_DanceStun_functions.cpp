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

// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_DanceStun_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove");

	AGCN_Athena_DanceStun_C_OnRemove_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_DanceStun_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive");

	AGCN_Athena_DanceStun_C_OnActive_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Athena_DanceStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript");

	AGCN_Athena_DanceStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_DanceStun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick");

	AGCN_Athena_DanceStun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_DanceStun_C::ExecuteUbergraph_GCN_Athena_DanceStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun");

	AGCN_Athena_DanceStun_C_ExecuteUbergraph_GCN_Athena_DanceStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
