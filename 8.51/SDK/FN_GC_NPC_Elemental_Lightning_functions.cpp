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

// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.WhileActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_NPC_Elemental_Lightning_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.WhileActive");

	AGC_NPC_Elemental_Lightning_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.Death FX Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AEnemyPawn_Parent_C*     Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_NPC_Elemental_Lightning_C::Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.Death FX Setup");

	AGC_NPC_Elemental_Lightning_C_Death_FX_Setup_Params params;
	params.Remove = Remove;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_NPC_Elemental_Lightning_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.OnRemove");

	AGC_NPC_Elemental_Lightning_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_NPC_Elemental_Lightning_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.K2_HandleGameplayCue");

	AGC_NPC_Elemental_Lightning_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.Rerun
// (BlueprintCallable, BlueprintEvent)

void AGC_NPC_Elemental_Lightning_C::Rerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.Rerun");

	AGC_NPC_Elemental_Lightning_C_Rerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.ExecuteUbergraph_GC_NPC_Elemental_Lightning
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_NPC_Elemental_Lightning_C::ExecuteUbergraph_GC_NPC_Elemental_Lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C.ExecuteUbergraph_GC_NPC_Elemental_Lightning");

	AGC_NPC_Elemental_Lightning_C_ExecuteUbergraph_GC_NPC_Elemental_Lightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
