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

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemPreIK
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose_PreIK                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemPreIK                      (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemPreIK");

	UItemAnimLayerInterface_C_ItemPreIK_Params params;
	params.InPose_PreIK = InPose_PreIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemPreIK != nullptr)
		*ItemPreIK = params.ItemPreIK;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodyOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseFullBody                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodyOverride           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodyOverride");

	UItemAnimLayerInterface_C_ItemFullBodyOverride_Params params;
	params.InPoseFullBody = InPoseFullBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = params.ItemFullBodyOverride;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose_AimOffset               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          AimOffsetAlpha                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               InPose_UpperLowerPreMeleeAO    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemAimOffset                  (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset");

	UItemAnimLayerInterface_C_ItemAimOffset_Params params;
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


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemSkeletalControl            (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl");

	UItemAnimLayerInterface_C_ItemSkeletalControl_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = params.ItemSkeletalControl;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceEnd         (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd");

	UItemAnimLayerInterface_C_ItemSwimJumpSurfaceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = params.ItemSwimJumpSurfaceEnd;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceLoop        (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop");

	UItemAnimLayerInterface_C_ItemSwimJumpSurfaceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = params.ItemSwimJumpSurfaceLoop;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSwimJumpFallLoop           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop");

	UItemAnimLayerInterface_C_ItemSwimJumpFallLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = params.ItemSwimJumpFallLoop;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSwimJumpStartLoop          (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop");

	UItemAnimLayerInterface_C_ItemSwimJumpStartLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = params.ItemSwimJumpStartLoop;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSwimJumpStart              (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart");

	UItemAnimLayerInterface_C_ItemSwimJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = params.ItemSwimJumpStart;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseRelaxedEntry             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemRelaxedEntry               (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry");

	UItemAnimLayerInterface_C_ItemRelaxedEntry_Params params;
	params.InPoseRelaxedEntry = InPoseRelaxedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = params.ItemRelaxedEntry;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPostPivot
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPostPivot    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPostPivot      (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPostPivot");

	UItemAnimLayerInterface_C_ItemLowerBodyJogPostPivot_Params params;
	params.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = params.ItemLowerBodyJogPostPivot;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPrePivot
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPrePivot     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPrePivot       (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPrePivot");

	UItemAnimLayerInterface_C_ItemLowerBodyJogPrePivot_Params params;
	params.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = params.ItemLowerBodyJogPrePivot;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStop         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStop           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStop");

	UItemAnimLayerInterface_C_ItemLowerBodyJogStop_Params params;
	params.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = params.ItemLowerBodyJogStop;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStart        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStart          (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStart");

	UItemAnimLayerInterface_C_ItemLowerBodyJogStart_Params params;
	params.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = params.ItemLowerBodyJogStart;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyLeanAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyLeanAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyLeanAdditive      (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyLeanAdditive");

	UItemAnimLayerInterface_C_ItemLowerBodyLeanAdditive_Params params;
	params.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = params.ItemLowerBodyLeanAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyMovement        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyMovement          (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement");

	UItemAnimLayerInterface_C_ItemLowerBodyMovement_Params params;
	params.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = params.ItemLowerBodyMovement;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPostPivotAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPosePostPivotAdditive        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPostPivotAdditive       (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPostPivotAdditive");

	UItemAnimLayerInterface_C_ItemJogPostPivotAdditive_Params params;
	params.InPosePostPivotAdditive = InPosePostPivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = params.ItemJogPostPivotAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPrePivotAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPosePrePivotAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPrePivotAdditive        (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPrePivotAdditive");

	UItemAnimLayerInterface_C_ItemJogPrePivotAdditive_Params params;
	params.InPosePrePivotAdditive = InPosePrePivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = params.ItemJogPrePivotAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStopAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseJogStopAdditive          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStopAdditive            (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStopAdditive");

	UItemAnimLayerInterface_C_ItemJogStopAdditive_Params params;
	params.InPoseJogStopAdditive = InPoseJogStopAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = params.ItemJogStopAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStartAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseJogStartAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStartAdditive           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStartAdditive");

	UItemAnimLayerInterface_C_ItemJogStartAdditive_Params params;
	params.InPoseJogStartAdditive = InPoseJogStartAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = params.ItemJogStartAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeLoopAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemFlyModeLoopAdditive        (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeLoopAdditive");

	UItemAnimLayerInterface_C_ItemFlyModeLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = params.ItemFlyModeLoopAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeStartAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemFlyModeStartAdditive       (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeStartAdditive");

	UItemAnimLayerInterface_C_ItemFlyModeStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = params.ItemFlyModeStartAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemZipLineStartAdditive       (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive");

	UItemAnimLayerInterface_C_ItemZipLineStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = params.ItemZipLineStartAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemJetPackJumpAdditive        (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive");

	UItemAnimLayerInterface_C_ItemJetPackJumpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = params.ItemJetPackJumpAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemJetPackStartAdditive       (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive");

	UItemAnimLayerInterface_C_ItemJetPackStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = params.ItemJetPackStartAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemFallLandAdditive           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive");

	UItemAnimLayerInterface_C_ItemFallLandAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = params.ItemFallLandAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemFallAdditive               (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive");

	UItemAnimLayerInterface_C_ItemFallAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = params.ItemFallAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemJumpLoopAdditive           (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive");

	UItemAnimLayerInterface_C_ItemJumpLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = params.ItemJumpLoopAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemJumpUpAdditive             (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive");

	UItemAnimLayerInterface_C_ItemJumpUpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = params.ItemJumpUpAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSlopeSliding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemSlopeSliding               (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSlopeSliding");

	UItemAnimLayerInterface_C_ItemSlopeSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = params.ItemSlopeSliding;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemCrouchTurningAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               ItemCrouchTurningAdditive      (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemCrouchTurningAdditive");

	UItemAnimLayerInterface_C_ItemCrouchTurningAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = params.ItemCrouchTurningAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseIdleAdditive             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemIdleAdditive               (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive");

	UItemAnimLayerInterface_C_ItemIdleAdditive_Params params;
	params.InPoseIdleAdditive = InPoseIdleAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = params.ItemIdleAdditive;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodySprint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseSprint                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodySprint             (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodySprint");

	UItemAnimLayerInterface_C_ItemFullBodySprint_Params params;
	params.InPoseSprint = InPoseSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = params.ItemFullBodySprint;
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_AdjustedAim InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemUpperBody                  (Parm, OutParm)

void UItemAnimLayerInterface_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody");

	UItemAnimLayerInterface_C_ItemUpperBody_Params params;
	params.InPoseUpperBody = InPoseUpperBody;
	params.InputParam = InputParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = params.ItemUpperBody;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
