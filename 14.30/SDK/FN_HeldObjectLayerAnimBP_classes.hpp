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

// AnimBlueprintGeneratedClass HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C
// 0x19F5 (0x1D05 - 0x0310)
class UHeldObjectLayerAnimBP_C : public UFortItemLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x0318(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_35;                                    // 0x0320(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_19;                         // 0x0350(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_34;                                    // 0x03D8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_18;                         // 0x0408(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_33;                                    // 0x0490(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_17;                         // 0x04C0(0x0088)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x0548(0x0188)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_16;                         // 0x06D0(0x0088)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x0758(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x0820(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_32;                                    // 0x0848(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_15;                         // 0x0878(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x0900(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x0978(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_31;                                    // 0x0A18(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_14;                         // 0x0A48(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_30;                                    // 0x0AD0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_13;                         // 0x0B00(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_29;                                    // 0x0B88(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_28;                                    // 0x0BB8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_27;                                    // 0x0BE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x0C18(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_26;                                    // 0x0C90(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x0CC0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_25;                                    // 0x0D38(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x0D68(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_24;                                    // 0x0DE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x0E10(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_23;                                    // 0x0E88(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x0EB8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_22;                                    // 0x0F30(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x0F60(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_21;                                    // 0x0FD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1008(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_20;                                    // 0x1080(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_19;                                    // 0x10B0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_18;                                    // 0x10E0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_12;                         // 0x1110(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_17;                                    // 0x1198(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_11;                         // 0x11C8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_16;                                    // 0x1250(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_10;                         // 0x1280(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_15;                                    // 0x1308(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_9;                          // 0x1338(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_14;                                    // 0x13C0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_8;                          // 0x13F0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_13;                                    // 0x1478(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_7;                          // 0x14A8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_12;                                    // 0x1530(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_6;                          // 0x1560(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_11;                                    // 0x15E8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_5;                          // 0x1618(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_10;                                    // 0x16A0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_4;                          // 0x16D0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_9;                                     // 0x1758(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_3;                          // 0x1788(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_8;                                     // 0x1810(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x1840(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_7;                                     // 0x18C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x18F8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_6;                                     // 0x1970(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x19A0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_5;                                     // 0x1A18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1A48(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x1AC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1AF0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x1B68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1B98(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x1C10(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x1C40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x1CC8(0x0030)
	float                                              Pitch;                                                    // 0x1CF8(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x1CFC(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AimOffsetAlpha;                                           // 0x1D00(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeldObjectDropped;                                      // 0x1D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C");
		
		return ptr;
	}


	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
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
	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_HeldObjectPlace();
	void AnimNotify_HeldObjectPickUp();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_HeldObjectLayerAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
