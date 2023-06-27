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

// AnimBlueprintGeneratedClass ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C
// 0x2840 (0x2BF0 - 0x03B0)
class UExplosiveBowLayerAnimBP_C : public UFortItemLayerAnimInstance_ExplosiveBow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_35;                                    // 0x03C0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_18;                         // 0x03F0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_34;                                    // 0x0478(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_17;                         // 0x04A8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_33;                                    // 0x0530(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_16;                         // 0x0560(0x0088)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_15;                         // 0x05E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_32;                                    // 0x0670(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_14;                         // 0x06A0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_31;                                    // 0x0728(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_30;                                    // 0x0758(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_29;                                    // 0x0788(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_28;                                    // 0x07B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_27;                                    // 0x07E8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_26;                                    // 0x0818(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_13;                         // 0x0848(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x08D0(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x09B0(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x0B38(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0BB0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x0C78(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x0D58(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0E08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x0EB8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                          // 0x0F30(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_25;                                    // 0x0FD0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_12;                         // 0x1000(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_24;                                    // 0x1088(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_11;                         // 0x10B8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_23;                                    // 0x1140(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_22;                                    // 0x1170(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_21;                                    // 0x11A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x11D0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                          // 0x1248(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x12E8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x1360(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x1400(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_20;                                    // 0x1478(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x14A8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1520(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x15C0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1638(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x16D8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_19;                                    // 0x1750(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x1780(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x17F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x1898(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1910(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x19B0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_18;                                    // 0x1A28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x1A58(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1AD0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x1B70(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1BE8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1C88(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_17;                                    // 0x1D00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1D30(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_16;                                    // 0x1DA8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1DD8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_15;                                    // 0x1E50(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1E80(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_14;                                    // 0x1EF8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_13;                                    // 0x1F28(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_12;                                    // 0x1F58(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_10;                         // 0x1F88(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_11;                                    // 0x2010(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_9;                          // 0x2040(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_10;                                    // 0x20C8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_8;                          // 0x20F8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_9;                                     // 0x2180(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_7;                          // 0x21B0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_8;                                     // 0x2238(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_6;                          // 0x2268(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_7;                                     // 0x22F0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_5;                          // 0x2320(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_6;                                     // 0x23A8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_4;                          // 0x23D8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_5;                                     // 0x2460(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_3;                          // 0x2490(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x2518(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x2548(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x25D0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x2600(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x2688(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x26B8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x2740(0x0030)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // 0x2770(0x0240) (BlueprintReadOnly)
	struct FFortAnimInput_AdjustedAim                  AdjustedAim;                                              // 0x29B0(0x0240) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C");
		
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
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ExplosiveBowLayerAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
