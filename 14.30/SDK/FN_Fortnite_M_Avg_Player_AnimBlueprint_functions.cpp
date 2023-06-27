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

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseFullBodyAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionFullBodyAdditive (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionFullBodyAdditive_Params params;
	params.InPoseFullBodyAdditive = InPoseFullBodyAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionFullBodyAdditive != nullptr)
		*CustomLocomotionFullBodyAdditive = params.CustomLocomotionFullBodyAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionPreIKLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePreIK                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionPreIKLayer     (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionPreIKLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionPreIKLayer_Params params;
	params.InPosePreIK = InPosePreIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionPreIKLayer != nullptr)
		*CustomLocomotionPreIKLayer = params.CustomLocomotionPreIKLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughCustomFullBody      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionFullBodyLayer  (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionFullBodyLayer_Params params;
	params.PassThroughCustomFullBody = PassThroughCustomFullBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = params.CustomLocomotionFullBodyLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePostLegIK                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CharacterSkeletalControlPostLegIK (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK");

	UFortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK_Params params;
	params.InPosePostLegIK = InPosePostLegIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = params.CharacterSkeletalControlPostLegIK;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughFullBodyPose        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               FullBodyOverride               (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params params;
	params.PassThroughFullBodyPose = PassThroughFullBodyPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = params.FullBodyOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingDiveJumpingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingDiveJumping (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer2           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MainInstanceDiveJumpLayerAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPlayerAnimBodyType        AnimBodyTypePassThrough        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingDiveJumpingLayer       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, EFortPlayerAnimBodyType AnimBodyTypePassThrough, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingDiveJumpingLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingDiveJumpingLayer_Params params;
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


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingFullBodyAdditiveLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughFullBodyAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingFullBodyAdditiveLayer  (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingFullBodyAdditiveLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingFullBodyAdditiveLayer_Params params;
	params.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = params.SwimmingFullBodyAdditiveLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingAdditiveLayer
// (HasOutParms, BlueprintCallable)
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

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingAdditiveLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingAdditiveLayer_Params params;
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


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLowerBodyLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               UpperBody_Cache                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PreUpperBodySlot_Cache         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PassThroughSwimmingLowerBody   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLowerBodyLayer         (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLowerBodyLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLowerBodyLayer_Params params;
	params.UpperBody_Cache = UpperBody_Cache;
	params.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	params.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = params.SwimmingLowerBodyLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseNonTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseNonTargetingLayer (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseNonTargetingLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseNonTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = params.SwimmingUpperBodyPoseNonTargetingLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseTargetingLayer (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseTargetingLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = params.SwimmingUpperBodyPoseTargetingLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingMovementAdditiveLayerPose
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingMovementAdditive (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingMovementAdditiveLayerPose (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingMovementAdditiveLayerPose");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingMovementAdditiveLayerPose_Params params;
	params.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = params.SwimmingMovementAdditiveLayerPose;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingSprintLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingSprint      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingSprintLayer            (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingSprintLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingSprintLayer_Params params;
	params.PassThroughSwimmingSprint = PassThroughSwimmingSprint;
	params.IsHidingInPropLayer = IsHidingInPropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = params.SwimmingSprintLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               MainPlayerAnimBP               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLayer                  (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLayer");

	UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLayer_Params params;
	params.MainPlayerAnimBP = MainPlayerAnimBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = params.SwimmingLayer;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOCarriedLeansOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseDBNOCarried              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleDBNOCarriedLeansOverride (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOCarriedLeansOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOCarriedLeansOverride_Params params;
	params.InPoseDBNOCarried = InPoseDBNOCarried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleDBNOCarriedLeansOverride != nullptr)
		*VehicleDBNOCarriedLeansOverride = params.VehicleDBNOCarriedLeansOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOJoggingOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               VehicleDBNOJoggingOverride     (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOJoggingOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOJoggingOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleDBNOJoggingOverride != nullptr)
		*VehicleDBNOJoggingOverride = params.VehicleDBNOJoggingOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose_PreIK                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemPreIK                      (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK_Params params;
	params.InPose_PreIK = InPose_PreIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemPreIK != nullptr)
		*ItemPreIK = params.ItemPreIK;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseFullBody                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodyOverride           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride_Params params;
	params.InPoseFullBody = InPoseFullBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = params.ItemFullBodyOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose_AimOffset               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          AimOffsetAlpha                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               InPose_UpperLowerPreMeleeAO    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemAimOffset                  (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params params;
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


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemSkeletalControl            (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = params.ItemSkeletalControl;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceEnd         (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = params.ItemSwimJumpSurfaceEnd;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpSurfaceLoop        (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = params.ItemSwimJumpSurfaceLoop;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpFallLoop           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = params.ItemSwimJumpFallLoop;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStartLoop          (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = params.ItemSwimJumpStartLoop;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSwimJumpStart              (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = params.ItemSwimJumpStart;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyLeanAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyLeanAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyLeanAdditive      (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyLeanAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyLeanAdditive_Params params;
	params.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = params.ItemLowerBodyLeanAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_AdjustedAim InputParam                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemUpperBody                  (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params params;
	params.InPoseUpperBody = InPoseUpperBody;
	params.InputParam = InputParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = params.ItemUpperBody;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodySprint
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseSprint                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemFullBodySprint             (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodySprint");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodySprint_Params params;
	params.InPoseSprint = InPoseSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = params.ItemFullBodySprint;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseIdleAdditive             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemIdleAdditive               (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params params;
	params.InPoseIdleAdditive = InPoseIdleAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = params.ItemIdleAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemCrouchTurningAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemCrouchTurningAdditive      (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemCrouchTurningAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemCrouchTurningAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = params.ItemCrouchTurningAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSlopeSliding
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemSlopeSliding               (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSlopeSliding");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSlopeSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = params.ItemSlopeSliding;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpUpAdditive             (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = params.ItemJumpUpAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJumpLoopAdditive           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = params.ItemJumpLoopAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallAdditive               (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = params.ItemFallAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFallLandAdditive           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = params.ItemFallLandAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackStartAdditive       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = params.ItemJetPackStartAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemJetPackJumpAdditive        (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = params.ItemJetPackJumpAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemZipLineStartAdditive       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = params.ItemZipLineStartAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeStartAdditive       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeStartAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeStartAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = params.ItemFlyModeStartAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeLoopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               ItemFlyModeLoopAdditive        (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeLoopAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeLoopAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = params.ItemFlyModeLoopAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStartAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStartAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStartAdditive           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStartAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStartAdditive_Params params;
	params.InPoseJogStartAdditive = InPoseJogStartAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = params.ItemJogStartAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStopAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseJogStopAdditive          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogStopAdditive            (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStopAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStopAdditive_Params params;
	params.InPoseJogStopAdditive = InPoseJogStopAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = params.ItemJogStopAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPrePivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePrePivotAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPrePivotAdditive        (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPrePivotAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPrePivotAdditive_Params params;
	params.InPosePrePivotAdditive = InPosePrePivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = params.ItemJogPrePivotAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPostPivotAdditive
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPosePostPivotAdditive        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemJogPostPivotAdditive       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPostPivotAdditive");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPostPivotAdditive_Params params;
	params.InPosePostPivotAdditive = InPosePostPivotAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = params.ItemJogPostPivotAdditive;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyMovement        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyMovement          (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params params;
	params.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = params.ItemLowerBodyMovement;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStart
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStart        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStart          (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStart");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStart_Params params;
	params.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = params.ItemLowerBodyJogStart;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStop
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogStop         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogStop           (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStop");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStop_Params params;
	params.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = params.ItemLowerBodyJogStop;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPrePivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPrePivot     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPrePivot       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPrePivot");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPrePivot_Params params;
	params.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = params.ItemLowerBodyJogPrePivot;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPostPivot
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyJogPostPivot    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemLowerBodyJogPostPivot      (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPostPivot");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPostPivot_Params params;
	params.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = params.ItemLowerBodyJogPostPivot;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseRelaxedEntry             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               ItemRelaxedEntry               (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params params;
	params.InPoseRelaxedEntry = InPoseRelaxedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = params.ItemRelaxedEntry;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseSplitBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerBody        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_TurnInPlace TurnInPlace                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerBodyRemoveRoot (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleSplitBodyOverride       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params params;
	params.InPoseSplitBody = InPoseSplitBody;
	params.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	params.TurnInPlace = TurnInPlace;
	params.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = params.VehicleSplitBodyOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseFullBody                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerCachePose   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleFullBodyOverride        (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params params;
	params.InPoseFullBody = InPoseFullBody;
	params.InPoseUpperAndLowerCachePose = InPoseUpperAndLowerCachePose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = params.VehicleFullBodyOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               InPoseLowerBodyDefault         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleLowerBodyOverride       (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride");

	UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params params;
	params.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	params.InPoseUpperBody = InPoseUpperBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = params.VehicleLowerBodyOverride;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ValidateDBNONativize
// (Public, BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ValidateDBNONativize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ValidateDBNONativize");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ValidateDBNONativize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance* CharPart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharPartEvent(class UFortPlayerAnimInstance* CharPart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent");

	UFortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent_Params params;
	params.CharPart = CharPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_playFacialAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_IndigoLaunch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_3
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L_3()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_3");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_3
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R_3()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_3");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceEnd_Exit
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpSurfaceEnd_Exit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceEnd_Exit");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceEnd_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpStart_Exited
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpStart_Exited()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpStart_Exited");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpStart_Exited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintSlow_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintSlow_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintSlow_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintSlow_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprint_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprint_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprint_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprint_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Exited
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintStart_Exited()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Exited");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Exited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimSprintStart_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimStartAdditive_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimStartAdditive_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimStartAdditive_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimStartAdditive_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimMovementAccelAdditive_Exited
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimMovementAccelAdditive_Exited()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimMovementAccelAdditive_Exited");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimMovementAccelAdditive_Exited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceLoop_Exited
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_SwimJumpSurfaceLoop_Exited()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceLoop_Exited");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceLoop_Exited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeLoop_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_CreateToolFlyModeStart_Entered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_OpenGlider()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPlace
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_HeldObjectPlace()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPlace");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPickUp
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_HeldObjectPickUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPickUp");

	UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPickUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.PlayFallFarAnims
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::PlayFallFarAnims()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.PlayFallFarAnims");

	UFortnite_M_Avg_Player_AnimBlueprint_C_PlayFallFarAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.StopFallFarAnims
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::StopFallFarAnims()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.StopFallFarAnims");

	UFortnite_M_Avg_Player_AnimBlueprint_C_StopFallFarAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortnite_M_Avg_Player_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.BlueprintUpdateAnimation");

	UFortnite_M_Avg_Player_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");

	UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::Indigo_Boost__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature");

	UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance* CharPart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature");

	UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params params;
	params.CharPart = CharPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
