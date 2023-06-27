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

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingDiveJumpingLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughSwimmingDiveJumping (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer2           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MainInstanceDiveJumpLayerAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPlayerAnimBodyType        AnimBodyTypePassThrough        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingDiveJumpingLayer       (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, EFortPlayerAnimBodyType AnimBodyTypePassThrough, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingDiveJumpingLayer");

	USwimmingAnimLayerInterface_C_SwimmingDiveJumpingLayer_Params params;
	params.PassThroughSwimmingDiveJumping = PassThroughSwimmingDiveJumping;
	params.IsHidingInPropLayer2 = IsHidingInPropLayer2;
	params.MainInstanceDiveJumpLayerAlpha = MainInstanceDiveJumpLayerAlpha;
	params.AnimBodyTypePassThrough = AnimBodyTypePassThrough;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingDiveJumpingLayer != nullptr)
		*SwimmingDiveJumpingLayer = params.SwimmingDiveJumpingLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingFullBodyAdditiveLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughFullBodyAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingFullBodyAdditiveLayer  (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingFullBodyAdditiveLayer");

	USwimmingAnimLayerInterface_C_SwimmingFullBodyAdditiveLayer_Params params;
	params.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = params.SwimmingFullBodyAdditiveLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingAdditiveLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               IdleAdditive_Cache             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               MovementAdditiveLayerPose_Cache (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               FullBody                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PlayMeleeAttackAOLayer         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisableArmsHeadAdditiveCurveAlphaLayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisableIKRootAdditiveCurveAlphaLayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocomotionAdditiveAlphaLayer   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MainInstanceAdditiveLayerAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               UpperAndLowerBody_Cache        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SprintingPose_PostMask_Cache   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingAdditiveLayer          (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingAdditiveLayer");

	USwimmingAnimLayerInterface_C_SwimmingAdditiveLayer_Params params;
	params.IdleAdditive_Cache = IdleAdditive_Cache;
	params.MovementAdditiveLayerPose_Cache = MovementAdditiveLayerPose_Cache;
	params.FullBody = FullBody;
	params.PlayMeleeAttackAOLayer = PlayMeleeAttackAOLayer;
	params.DisableArmsHeadAdditiveCurveAlphaLayer = DisableArmsHeadAdditiveCurveAlphaLayer;
	params.DisableIKRootAdditiveCurveAlphaLayer = DisableIKRootAdditiveCurveAlphaLayer;
	params.LocomotionAdditiveAlphaLayer = LocomotionAdditiveAlphaLayer;
	params.MainInstanceAdditiveLayerAlpha = MainInstanceAdditiveLayerAlpha;
	params.UpperAndLowerBody_Cache = UpperAndLowerBody_Cache;
	params.SprintingPose_PostMask_Cache = SprintingPose_PostMask_Cache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingAdditiveLayer != nullptr)
		*SwimmingAdditiveLayer = params.SwimmingAdditiveLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLowerBodyLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               UpperBody_Cache                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PreUpperBodySlot_Cache         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PassThroughSwimmingLowerBody   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLowerBodyLayer         (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLowerBodyLayer");

	USwimmingAnimLayerInterface_C_SwimmingLowerBodyLayer_Params params;
	params.UpperBody_Cache = UpperBody_Cache;
	params.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	params.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = params.SwimmingLowerBodyLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseNonTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseNonTargetingLayer (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseNonTargetingLayer");

	USwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseNonTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = params.SwimmingUpperBodyPoseNonTargetingLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseTargetingLayer (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseTargetingLayer");

	USwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = params.SwimmingUpperBodyPoseTargetingLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingSprintLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughSwimmingSprint      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingSprintLayer            (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingSprintLayer");

	USwimmingAnimLayerInterface_C_SwimmingSprintLayer_Params params;
	params.PassThroughSwimmingSprint = PassThroughSwimmingSprint;
	params.IsHidingInPropLayer = IsHidingInPropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = params.SwimmingSprintLayer;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingMovementAdditiveLayerPose
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughSwimmingMovementAdditive (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingMovementAdditiveLayerPose (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingMovementAdditiveLayerPose");

	USwimmingAnimLayerInterface_C_SwimmingMovementAdditiveLayerPose_Params params;
	params.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = params.SwimmingMovementAdditiveLayerPose;
}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               MainPlayerAnimBP               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLayer                  (Parm, OutParm)

void USwimmingAnimLayerInterface_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLayer");

	USwimmingAnimLayerInterface_C_SwimmingLayer_Params params;
	params.MainPlayerAnimBP = MainPlayerAnimBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = params.SwimmingLayer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
