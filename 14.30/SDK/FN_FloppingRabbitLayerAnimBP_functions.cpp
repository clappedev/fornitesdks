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

// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceEnd         (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceEnd");

	UFloppingRabbitLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = params.ItemSwimJumpSurfaceEnd;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceLoop        (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceLoop");

	UFloppingRabbitLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = params.ItemSwimJumpSurfaceLoop;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpFallLoop           (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpFallLoop");

	UFloppingRabbitLayerAnimBP_C_ItemSwimJumpFallLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = params.ItemSwimJumpFallLoop;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStartLoop          (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStartLoop");

	UFloppingRabbitLayerAnimBP_C_ItemSwimJumpStartLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = params.ItemSwimJumpStartLoop;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemUpperBody
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_AdjustedAim InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemUpperBody                  (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemUpperBody");

	UFloppingRabbitLayerAnimBP_C_ItemUpperBody_Params params;
	params.InPoseUpperBody = InPoseUpperBody;
	params.InputParam = InputParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = params.ItemUpperBody;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFullBodySprint
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseSprint                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodySprint             (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFullBodySprint");

	UFloppingRabbitLayerAnimBP_C_ItemFullBodySprint_Params params;
	params.InPoseSprint = InPoseSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = params.ItemFullBodySprint;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemIdleAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseIdleAdditive             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemIdleAdditive               (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemIdleAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemIdleAdditive_Params params;
	params.InPoseIdleAdditive = InPoseIdleAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = params.ItemIdleAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemCrouchTurningAdditive      (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemCrouchTurningAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemCrouchTurningAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = params.ItemCrouchTurningAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSlopeSliding
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSlopeSliding               (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSlopeSliding");

	UFloppingRabbitLayerAnimBP_C_ItemSlopeSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = params.ItemSlopeSliding;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpUpAdditive             (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpUpAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJumpUpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = params.ItemJumpUpAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpLoopAdditive           (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpLoopAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJumpLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = params.ItemJumpLoopAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallAdditive               (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemFallAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = params.ItemFallAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallLandAdditive           (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallLandAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemFallLandAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = params.ItemFallLandAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackStartAdditive       (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackStartAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJetPackStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = params.ItemJetPackStartAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackJumpAdditive        (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackJumpAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJetPackJumpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = params.ItemJetPackJumpAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemZipLineStartAdditive       (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemZipLineStartAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemZipLineStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = params.ItemZipLineStartAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeStartAdditive       (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeStartAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemFlyModeStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = params.ItemFlyModeStartAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeLoopAdditive        (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeLoopAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemFlyModeLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = params.ItemFlyModeLoopAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStartAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStartAdditive           (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStartAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJogStartAdditive_Params params;
	params.InPoseJogStartAdditive = InPoseJogStartAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = params.ItemJogStartAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStopAdditive          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStopAdditive            (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStopAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJogStopAdditive_Params params;
	params.InPoseJogStopAdditive = InPoseJogStopAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = params.ItemJogStopAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePrePivotAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPrePivotAdditive        (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPrePivotAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJogPrePivotAdditive_Params params;
	params.InPosePrePivotAdditive = InPosePrePivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = params.ItemJogPrePivotAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePostPivotAdditive        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPostPivotAdditive       (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPostPivotAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemJogPostPivotAdditive_Params params;
	params.InPosePostPivotAdditive = InPosePostPivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = params.ItemJogPostPivotAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyMovement        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyMovement          (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyMovement");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyMovement_Params params;
	params.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = params.ItemLowerBodyMovement;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyLeanAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyLeanAdditive      (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyLeanAdditive");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params params;
	params.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = params.ItemLowerBodyLeanAdditive;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStart        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStart          (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStart");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyJogStart_Params params;
	params.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = params.ItemLowerBodyJogStart;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStop         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStop           (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStop");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyJogStop_Params params;
	params.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = params.ItemLowerBodyJogStop;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPrePivot     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPrePivot       (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPrePivot");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params params;
	params.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = params.ItemLowerBodyJogPrePivot;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPostPivot    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPostPivot      (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPostPivot");

	UFloppingRabbitLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params params;
	params.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = params.ItemLowerBodyJogPostPivot;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseRelaxedEntry             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemRelaxedEntry               (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemRelaxedEntry");

	UFloppingRabbitLayerAnimBP_C_ItemRelaxedEntry_Params params;
	params.InPoseRelaxedEntry = InPoseRelaxedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = params.ItemRelaxedEntry;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStart              (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStart");

	UFloppingRabbitLayerAnimBP_C_ItemSwimJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = params.ItemSwimJumpStart;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UFloppingRabbitLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.AnimGraph");

	UFloppingRabbitLayerAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFloppingRabbitLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.BlueprintUpdateAnimation");

	UFloppingRabbitLayerAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ExecuteUbergraph_FloppingRabbitLayerAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFloppingRabbitLayerAnimBP_C::ExecuteUbergraph_FloppingRabbitLayerAnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ExecuteUbergraph_FloppingRabbitLayerAnimBP");

	UFloppingRabbitLayerAnimBP_C_ExecuteUbergraph_FloppingRabbitLayerAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
