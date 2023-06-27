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

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.StructureTraceLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_WilliePete_PlayerLaunch_C::StructureTraceLoop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.StructureTraceLoop");

	UGA_WilliePete_PlayerLaunch_C_StructureTraceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.BreakBlockingStructure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_WilliePete_PlayerLaunch_C::BreakBlockingStructure(class AActor* HitActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.BreakBlockingStructure");

	UGA_WilliePete_PlayerLaunch_C_BreakBlockingStructure_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCancelled_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnCancelled_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCancelled_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnInterrupted_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnInterrupted_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnBlendOut_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnBlendOut_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCompleted_A0F03A1445141EA659E282AFE77CEA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_WilliePete_PlayerLaunch_C::OnCompleted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCompleted_A0F03A1445141EA659E282AFE77CEA62");

	UGA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider
// (BlueprintCallable, BlueprintEvent)

void UGA_WilliePete_PlayerLaunch_C::Redeploy_Glider()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider");

	UGA_WilliePete_PlayerLaunch_C_Redeploy_Glider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.End Skydive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_WilliePete_PlayerLaunch_C::End_Skydive(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.End Skydive");

	UGA_WilliePete_PlayerLaunch_C_End_Skydive_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WilliePete_PlayerLaunch_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility");

	UGA_WilliePete_PlayerLaunch_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ActorHit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_WilliePete_PlayerLaunch_C::ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ActorHit");

	UGA_WilliePete_PlayerLaunch_C_ActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ExecuteUbergraph_GA_WilliePete_PlayerLaunch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_WilliePete_PlayerLaunch_C::ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ExecuteUbergraph_GA_WilliePete_PlayerLaunch");

	UGA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
