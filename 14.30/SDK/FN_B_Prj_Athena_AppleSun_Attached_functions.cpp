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

// Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Athena_AppleSun_Attached_C::DistanceFromPlayer__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__FinishedFunc");

	AB_Prj_Athena_AppleSun_Attached_C_DistanceFromPlayer__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Athena_AppleSun_Attached_C::DistanceFromPlayer__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__UpdateFunc");

	AB_Prj_Athena_AppleSun_Attached_C_DistanceFromPlayer__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_AppleSun_Attached_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ReceiveBeginPlay");

	AB_Prj_Athena_AppleSun_Attached_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_AppleSun_Attached_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_AppleSun_Attached_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_AppleSun_Attached_C::ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached");

	AB_Prj_Athena_AppleSun_Attached_C_ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
