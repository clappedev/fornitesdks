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

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingDiveJumping (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer2           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MainInstanceDiveJumpLayerAlpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPlayerAnimBodyType        AnimBodyTypePassThrough        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingDiveJumpingLayer       (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, EFortPlayerAnimBodyType AnimBodyTypePassThrough, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer");

	USwimmingAnimBP_C_SwimmingDiveJumpingLayer_Params params;
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


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughFullBodyAdditive    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingFullBodyAdditiveLayer  (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer");

	USwimmingAnimBP_C_SwimmingFullBodyAdditiveLayer_Params params;
	params.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = params.SwimmingFullBodyAdditiveLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer
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

void USwimmingAnimBP_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer");

	USwimmingAnimBP_C_SwimmingAdditiveLayer_Params params;
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


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               UpperBody_Cache                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PreUpperBodySlot_Cache         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               PassThroughSwimmingLowerBody   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLowerBodyLayer         (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer");

	USwimmingAnimBP_C_SwimmingLowerBodyLayer_Params params;
	params.UpperBody_Cache = UpperBody_Cache;
	params.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	params.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = params.SwimmingLowerBodyLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseNonTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseNonTargetingLayer (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer");

	USwimmingAnimBP_C_SwimmingUpperBodyPoseNonTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = params.SwimmingUpperBodyPoseNonTargetingLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingUpperBodyPoseTargeting (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingUpperBodyPoseTargetingLayer (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer");

	USwimmingAnimBP_C_SwimmingUpperBodyPoseTargetingLayer_Params params;
	params.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = params.SwimmingUpperBodyPoseTargetingLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingMovementAdditive (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingMovementAdditiveLayerPose (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose");

	USwimmingAnimBP_C_SwimmingMovementAdditiveLayerPose_Params params;
	params.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = params.SwimmingMovementAdditiveLayerPose;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               PassThroughSwimmingSprint      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsHidingInPropLayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               SwimmingSprintLayer            (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer");

	USwimmingAnimBP_C_SwimmingSprintLayer_Params params;
	params.PassThroughSwimmingSprint = PassThroughSwimmingSprint;
	params.IsHidingInPropLayer = IsHidingInPropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = params.SwimmingSprintLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer
// (HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseLink               MainPlayerAnimBP               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               SwimmingLayer                  (Parm, OutParm)

void USwimmingAnimBP_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer");

	USwimmingAnimBP_C_SwimmingLayer_Params params;
	params.MainPlayerAnimBP = MainPlayerAnimBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = params.SwimmingLayer;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void USwimmingAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph");

	USwimmingAnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36
// (BlueprintEvent)

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36");

	USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A
// (BlueprintEvent)

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A");

	USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Entered_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Exited_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimSprint_Entered_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimSprintSlow_Entered_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimStartAdditive_Entered_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
// (BlueprintCallable, BlueprintEvent)

void USwimmingAnimBP_C::AnimNotify_SwimMovementAccelAdditive_Exited_Layer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer");

	USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USwimmingAnimBP_C::ExecuteUbergraph_SwimmingAnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP");

	USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
