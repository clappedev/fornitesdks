#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class USwimmingAnimLayerInterface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C");
		
		return ptr;
	}


	void SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, bool IsHidingInPropLayer2, float MainInstanceDiveJumpLayerAlpha, EFortPlayerAnimBodyType AnimBodyTypePassThrough, struct FPoseLink* SwimmingDiveJumpingLayer);
	void SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer);
	void SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, float MainInstanceAdditiveLayerAlpha, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer);
	void SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer);
	void SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer);
	void SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer);
	void SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, bool IsHidingInPropLayer, struct FPoseLink* SwimmingSprintLayer);
	void SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose);
	void SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
