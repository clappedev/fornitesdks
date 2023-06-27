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

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemUpperBody
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_AdjustedAim InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemUpperBody                  (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemUpperBody");

	UChargeWeaponLayerAnimBP_C_ItemUpperBody_Params params;
	params.InPoseUpperBody = InPoseUpperBody;
	params.InputParam = InputParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = params.ItemUpperBody;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodySprint
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseSprint                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodySprint             (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodySprint");

	UChargeWeaponLayerAnimBP_C_ItemFullBodySprint_Params params;
	params.InPoseSprint = InPoseSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = params.ItemFullBodySprint;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemIdleAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseIdleAdditive             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemIdleAdditive               (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemIdleAdditive");

	UChargeWeaponLayerAnimBP_C_ItemIdleAdditive_Params params;
	params.InPoseIdleAdditive = InPoseIdleAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = params.ItemIdleAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemCrouchTurningAdditive      (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemCrouchTurningAdditive");

	UChargeWeaponLayerAnimBP_C_ItemCrouchTurningAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = params.ItemCrouchTurningAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSlopeSliding
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSlopeSliding               (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSlopeSliding");

	UChargeWeaponLayerAnimBP_C_ItemSlopeSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = params.ItemSlopeSliding;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpUpAdditive             (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpUpAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJumpUpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = params.ItemJumpUpAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpLoopAdditive           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpLoopAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJumpLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = params.ItemJumpLoopAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallAdditive               (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallAdditive");

	UChargeWeaponLayerAnimBP_C_ItemFallAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = params.ItemFallAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallLandAdditive           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallLandAdditive");

	UChargeWeaponLayerAnimBP_C_ItemFallLandAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = params.ItemFallLandAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackStartAdditive       (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackStartAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJetPackStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = params.ItemJetPackStartAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackJumpAdditive        (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackJumpAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJetPackJumpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = params.ItemJetPackJumpAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemZipLineStartAdditive       (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemZipLineStartAdditive");

	UChargeWeaponLayerAnimBP_C_ItemZipLineStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = params.ItemZipLineStartAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeStartAdditive       (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeStartAdditive");

	UChargeWeaponLayerAnimBP_C_ItemFlyModeStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = params.ItemFlyModeStartAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeLoopAdditive        (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeLoopAdditive");

	UChargeWeaponLayerAnimBP_C_ItemFlyModeLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = params.ItemFlyModeLoopAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStartAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStartAdditive           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStartAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJogStartAdditive_Params params;
	params.InPoseJogStartAdditive = InPoseJogStartAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = params.ItemJogStartAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStopAdditive          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStopAdditive            (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStopAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJogStopAdditive_Params params;
	params.InPoseJogStopAdditive = InPoseJogStopAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = params.ItemJogStopAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePrePivotAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPrePivotAdditive        (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPrePivotAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJogPrePivotAdditive_Params params;
	params.InPosePrePivotAdditive = InPosePrePivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = params.ItemJogPrePivotAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePostPivotAdditive        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPostPivotAdditive       (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPostPivotAdditive");

	UChargeWeaponLayerAnimBP_C_ItemJogPostPivotAdditive_Params params;
	params.InPosePostPivotAdditive = InPosePostPivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = params.ItemJogPostPivotAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyMovement        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyMovement          (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyMovement");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyMovement_Params params;
	params.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = params.ItemLowerBodyMovement;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyLeanAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyLeanAdditive      (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyLeanAdditive");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params params;
	params.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = params.ItemLowerBodyLeanAdditive;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStart        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStart          (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStart");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogStart_Params params;
	params.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = params.ItemLowerBodyJogStart;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStop         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStop           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStop");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogStop_Params params;
	params.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = params.ItemLowerBodyJogStop;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPrePivot     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPrePivot       (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPrePivot");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params params;
	params.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = params.ItemLowerBodyJogPrePivot;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPostPivot    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPostPivot      (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPostPivot");

	UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params params;
	params.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = params.ItemLowerBodyJogPostPivot;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseRelaxedEntry             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemRelaxedEntry               (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemRelaxedEntry");

	UChargeWeaponLayerAnimBP_C_ItemRelaxedEntry_Params params;
	params.InPoseRelaxedEntry = InPoseRelaxedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = params.ItemRelaxedEntry;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStart              (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStart");

	UChargeWeaponLayerAnimBP_C_ItemSwimJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = params.ItemSwimJumpStart;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStartLoop          (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStartLoop");

	UChargeWeaponLayerAnimBP_C_ItemSwimJumpStartLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = params.ItemSwimJumpStartLoop;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpFallLoop           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpFallLoop");

	UChargeWeaponLayerAnimBP_C_ItemSwimJumpFallLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = params.ItemSwimJumpFallLoop;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceLoop        (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceLoop");

	UChargeWeaponLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = params.ItemSwimJumpSurfaceLoop;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceEnd         (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceEnd");

	UChargeWeaponLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = params.ItemSwimJumpSurfaceEnd;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSkeletalControl
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemSkeletalControl            (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSkeletalControl");

	UChargeWeaponLayerAnimBP_C_ItemSkeletalControl_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = params.ItemSkeletalControl;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemAimOffset
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose_AimOffset               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          AimOffsetAlpha                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               InPose_UpperLowerPreMeleeAO    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemAimOffset                  (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemAimOffset");

	UChargeWeaponLayerAnimBP_C_ItemAimOffset_Params params;
	params.InPose_AimOffset = InPose_AimOffset;
	params.AimOffsetAlpha = AimOffsetAlpha;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = params.ItemAimOffset;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseFullBody                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodyOverride           (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodyOverride");

	UChargeWeaponLayerAnimBP_C_ItemFullBodyOverride_Params params;
	params.InPoseFullBody = InPoseFullBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = params.ItemFullBodyOverride;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemPreIK
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose_PreIK                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemPreIK                      (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemPreIK");

	UChargeWeaponLayerAnimBP_C_ItemPreIK_Params params;
	params.InPose_PreIK = InPose_PreIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemPreIK != nullptr)
		*ItemPreIK = params.ItemPreIK;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UChargeWeaponLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.AnimGraph");

	UChargeWeaponLayerAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChargeWeaponLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.BlueprintUpdateAnimation");

	UChargeWeaponLayerAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ExecuteUbergraph_ChargeWeaponLayerAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChargeWeaponLayerAnimBP_C::ExecuteUbergraph_ChargeWeaponLayerAnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ExecuteUbergraph_ChargeWeaponLayerAnimBP");

	UChargeWeaponLayerAnimBP_C_ExecuteUbergraph_ChargeWeaponLayerAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
