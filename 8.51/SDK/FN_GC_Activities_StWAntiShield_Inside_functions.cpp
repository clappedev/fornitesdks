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

// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_Activities_StWAntiShield_Inside_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnRemove");

	AGC_Activities_StWAntiShield_Inside_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_Activities_StWAntiShield_Inside_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnActive");

	AGC_Activities_StWAntiShield_Inside_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.UserConstructionScript");

	AGC_Activities_StWAntiShield_Inside_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__FinishedFunc
// (BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::Fade_Smoke_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__FinishedFunc");

	AGC_Activities_StWAntiShield_Inside_C_Fade_Smoke_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__UpdateFunc
// (BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::Fade_Smoke_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__UpdateFunc");

	AGC_Activities_StWAntiShield_Inside_C_Fade_Smoke_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ReceiveBeginPlay");

	AGC_Activities_StWAntiShield_Inside_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeIn");

	AGC_Activities_StWAntiShield_Inside_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void AGC_Activities_StWAntiShield_Inside_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeOut");

	AGC_Activities_StWAntiShield_Inside_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ExecuteUbergraph_GC_Activities_StWAntiShield_Inside
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Activities_StWAntiShield_Inside_C::ExecuteUbergraph_GC_Activities_StWAntiShield_Inside(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ExecuteUbergraph_GC_Activities_StWAntiShield_Inside");

	AGC_Activities_StWAntiShield_Inside_C_ExecuteUbergraph_GC_Activities_StWAntiShield_Inside_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
