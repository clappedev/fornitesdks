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

// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.QuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_DanceGrenade_C::QuestUpdate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.QuestUpdate");

	AB_Prj_Athena_DanceGrenade_C_QuestUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_DanceGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnExploded");

	AB_Prj_Athena_DanceGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_DanceGrenade_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnBounce");

	AB_Prj_Athena_DanceGrenade_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.FuseEnded
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_DanceGrenade_C::FuseEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.FuseEnded");

	AB_Prj_Athena_DanceGrenade_C_FuseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_DanceGrenade_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_Athena_DanceGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.Play Quest Success FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_DanceGrenade_C::Play_Quest_Success_FX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.Play Quest Success FX");

	AB_Prj_Athena_DanceGrenade_C_Play_Quest_Success_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_DanceGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_DanceGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnBeginPlayQuestCheck
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_DanceGrenade_C::OnBeginPlayQuestCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.OnBeginPlayQuestCheck");

	AB_Prj_Athena_DanceGrenade_C_OnBeginPlayQuestCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_DanceGrenade_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_DanceGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ExecuteUbergraph_B_Prj_Athena_DanceGrenade
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_DanceGrenade_C::ExecuteUbergraph_B_Prj_Athena_DanceGrenade(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_DanceGrenade.B_Prj_Athena_DanceGrenade_C.ExecuteUbergraph_B_Prj_Athena_DanceGrenade");

	AB_Prj_Athena_DanceGrenade_C_ExecuteUbergraph_B_Prj_Athena_DanceGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
