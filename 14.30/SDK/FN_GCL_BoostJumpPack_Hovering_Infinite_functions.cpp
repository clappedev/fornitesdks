// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.SetJetpackAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_Infinite_C::SetJetpackAudioEnabled(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.SetJetpackAudioEnabled");

	AGCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_Hovering_Infinite_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnRemove");

	AGCL_BoostJumpPack_Hovering_Infinite_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_Hovering_Infinite_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnActive");

	AGCL_BoostJumpPack_Hovering_Infinite_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.On Pawn Landed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_Infinite_C::On_Pawn_Landed(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.On Pawn Landed");

	AGCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_Infinite_C::ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite");

	AGCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
