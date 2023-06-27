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

// AnimBlueprintGeneratedClass ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C
// 0x11F8 (0x1508 - 0x0310)
class UChargeWeaponLayerAnimBP_C : public UFortItemLayerAnimInstance_ChargedWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x0318(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_35;                                    // 0x0320(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_19;                         // 0x0350(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x03D8(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0450(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_Root_34;                                    // 0x0518(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_18;                         // 0x0548(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_33;                                    // 0x05D0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_17;                         // 0x0600(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_32;                                    // 0x0688(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_31;                                    // 0x06B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_30;                                    // 0x06E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_29;                                    // 0x0718(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_28;                                    // 0x0748(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_27;                                    // 0x0778(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_26;                                    // 0x07A8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_25;                                    // 0x07D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_24;                                    // 0x0808(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_23;                                    // 0x0838(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_22;                                    // 0x0868(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_21;                                    // 0x0898(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_16;                         // 0x08C8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_20;                                    // 0x0950(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_15;                         // 0x0980(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_19;                                    // 0x0A08(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_14;                         // 0x0A38(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_18;                                    // 0x0AC0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_13;                         // 0x0AF0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_17;                                    // 0x0B78(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_12;                         // 0x0BA8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_16;                                    // 0x0C30(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_11;                         // 0x0C60(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_15;                                    // 0x0CE8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_10;                         // 0x0D18(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_14;                                    // 0x0DA0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_9;                          // 0x0DD0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_13;                                    // 0x0E58(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_8;                          // 0x0E88(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_12;                                    // 0x0F10(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_7;                          // 0x0F40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_11;                                    // 0x0FC8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_6;                          // 0x0FF8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_10;                                    // 0x1080(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_9;                                     // 0x10B0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_8;                                     // 0x10E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_7;                                     // 0x1110(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_6;                                     // 0x1140(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_5;                                     // 0x1170(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_5;                          // 0x11A0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x1228(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_4;                          // 0x1258(0x0088)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_3;                          // 0x12E0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x1368(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x1398(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x1420(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x1450(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x14D8(0x0030)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C");
		
		return ptr;
	}


	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive);
	void ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ChargeWeaponLayerAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
