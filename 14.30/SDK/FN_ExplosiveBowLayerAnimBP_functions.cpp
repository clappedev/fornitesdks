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

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemUpperBody
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_AdjustedAim InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemUpperBody                  (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemUpperBody");

	UExplosiveBowLayerAnimBP_C_ItemUpperBody_Params params;
	params.InPoseUpperBody = InPoseUpperBody;
	params.InputParam = InputParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = params.ItemUpperBody;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFullBodySprint
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseSprint                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodySprint             (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFullBodySprint");

	UExplosiveBowLayerAnimBP_C_ItemFullBodySprint_Params params;
	params.InPoseSprint = InPoseSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = params.ItemFullBodySprint;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemIdleAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseIdleAdditive             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemIdleAdditive               (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemIdleAdditive");

	UExplosiveBowLayerAnimBP_C_ItemIdleAdditive_Params params;
	params.InPoseIdleAdditive = InPoseIdleAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = params.ItemIdleAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemCrouchTurningAdditive      (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemCrouchTurningAdditive");

	UExplosiveBowLayerAnimBP_C_ItemCrouchTurningAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = params.ItemCrouchTurningAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemSlopeSliding
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSlopeSliding               (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemSlopeSliding");

	UExplosiveBowLayerAnimBP_C_ItemSlopeSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = params.ItemSlopeSliding;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpUpAdditive             (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpUpAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJumpUpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = params.ItemJumpUpAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpLoopAdditive           (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpLoopAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJumpLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = params.ItemJumpLoopAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallAdditive               (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallAdditive");

	UExplosiveBowLayerAnimBP_C_ItemFallAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = params.ItemFallAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallLandAdditive           (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallLandAdditive");

	UExplosiveBowLayerAnimBP_C_ItemFallLandAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = params.ItemFallLandAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackStartAdditive       (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackStartAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJetPackStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = params.ItemJetPackStartAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackJumpAdditive        (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackJumpAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJetPackJumpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = params.ItemJetPackJumpAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemZipLineStartAdditive       (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemZipLineStartAdditive");

	UExplosiveBowLayerAnimBP_C_ItemZipLineStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = params.ItemZipLineStartAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeStartAdditive       (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeStartAdditive");

	UExplosiveBowLayerAnimBP_C_ItemFlyModeStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = params.ItemFlyModeStartAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeLoopAdditive        (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeLoopAdditive");

	UExplosiveBowLayerAnimBP_C_ItemFlyModeLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = params.ItemFlyModeLoopAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStartAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStartAdditive           (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStartAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJogStartAdditive_Params params;
	params.InPoseJogStartAdditive = InPoseJogStartAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = params.ItemJogStartAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStopAdditive          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStopAdditive            (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStopAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJogStopAdditive_Params params;
	params.InPoseJogStopAdditive = InPoseJogStopAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = params.ItemJogStopAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePrePivotAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPrePivotAdditive        (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPrePivotAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJogPrePivotAdditive_Params params;
	params.InPosePrePivotAdditive = InPosePrePivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = params.ItemJogPrePivotAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePostPivotAdditive        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPostPivotAdditive       (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPostPivotAdditive");

	UExplosiveBowLayerAnimBP_C_ItemJogPostPivotAdditive_Params params;
	params.InPosePostPivotAdditive = InPosePostPivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = params.ItemJogPostPivotAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyMovement        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyMovement          (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyMovement");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyMovement_Params params;
	params.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = params.ItemLowerBodyMovement;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyLeanAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyLeanAdditive      (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyLeanAdditive");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params params;
	params.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = params.ItemLowerBodyLeanAdditive;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStart        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStart          (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStart");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStart_Params params;
	params.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = params.ItemLowerBodyJogStart;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStop         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStop           (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStop");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStop_Params params;
	params.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = params.ItemLowerBodyJogStop;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPrePivot     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPrePivot       (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPrePivot");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params params;
	params.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = params.ItemLowerBodyJogPrePivot;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPostPivot    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPostPivot      (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPostPivot");

	UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params params;
	params.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = params.ItemLowerBodyJogPostPivot;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseRelaxedEntry             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemRelaxedEntry               (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemRelaxedEntry");

	UExplosiveBowLayerAnimBP_C_ItemRelaxedEntry_Params params;
	params.InPoseRelaxedEntry = InPoseRelaxedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = params.ItemRelaxedEntry;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UExplosiveBowLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.AnimGraph");

	UExplosiveBowLayerAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ExecuteUbergraph_ExplosiveBowLayerAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExplosiveBowLayerAnimBP_C::ExecuteUbergraph_ExplosiveBowLayerAnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ExecuteUbergraph_ExplosiveBowLayerAnimBP");

	UExplosiveBowLayerAnimBP_C_ExecuteUbergraph_ExplosiveBowLayerAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
