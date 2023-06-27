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

// AnimBlueprintGeneratedClass GhostRockLayerAnimBP.GhostRockLayerAnimBP_C
// 0x3294 (0x3614 - 0x0380)
class UGhostRockLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x0388(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_35;                                    // 0x0390(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_18;                         // 0x03C0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_34;                                    // 0x0448(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_17;                         // 0x0478(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_33;                                    // 0x0500(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_16;                         // 0x0530(0x0088)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_15;                         // 0x05B8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_32;                                    // 0x0640(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_14;                         // 0x0670(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_31;                                    // 0x06F8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_30;                                    // 0x0728(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_29;                                    // 0x0758(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_28;                                    // 0x0788(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_27;                                    // 0x07B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_26;                                    // 0x07E8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_13;                         // 0x0818(0x0088)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                               // 0x08A0(0x0018)
	struct FAnimNode_Root                              AnimGraphNode_Root_25;                                    // 0x08B8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_12;                         // 0x08E8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_24;                                    // 0x0970(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_11;                         // 0x09A0(0x0088)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0A28(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x0AF0(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0BD0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                          // 0x0BF8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0C70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                          // 0x0CA0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0D18(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0D48(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_23;                                    // 0x0DF8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_10;                         // 0x0E28(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                          // 0x0EB0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x0F28(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_22;                                    // 0x0FC8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_21;                                    // 0x0FF8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_20;                                    // 0x1028(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                          // 0x1058(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_19;                                    // 0x10D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                          // 0x1100(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_18;                                    // 0x1178(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                          // 0x11A8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_17;                                    // 0x1220(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                          // 0x1250(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                          // 0x12C8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1340(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root_16;                                    // 0x13E0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_15;                                    // 0x1410(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_14;                                    // 0x1440(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_13;                                    // 0x1470(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_12;                                    // 0x14A0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_11;                                    // 0x14D0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_9;                          // 0x1500(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                          // 0x1588(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                          // 0x1638(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                          // 0x16B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                          // 0x1728(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                          // 0x17A0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_10;                                    // 0x1818(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_8;                          // 0x1848(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                          // 0x18D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                          // 0x1980(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                          // 0x19F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                          // 0x1A70(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                          // 0x1AE8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_9;                                     // 0x1B60(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_7;                          // 0x1B90(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                          // 0x1C18(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                          // 0x1CC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                          // 0x1D40(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                          // 0x1DB8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                          // 0x1E30(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_8;                                     // 0x1EA8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_6;                          // 0x1ED8(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                          // 0x1F60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                          // 0x2010(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                          // 0x2088(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                          // 0x2100(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                          // 0x2178(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_7;                                     // 0x21F0(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_5;                          // 0x2220(0x0088)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x22A8(0x00E0)
	struct FFortAnimNode_SpeedWarping                  FortAnimGraphNode_SpeedWarping;                           // 0x2388(0x01B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x2540(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x2560(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_6;                                     // 0x2580(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_4;                          // 0x25B0(0x0088)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_4;                           // 0x2638(0x00A0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_3;                           // 0x26D8(0x00A0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_2;                           // 0x2778(0x00A0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone;                             // 0x2818(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                          // 0x28B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                          // 0x2968(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                          // 0x29E0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                          // 0x2A58(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                          // 0x2AD0(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_5;                                     // 0x2B48(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_3;                          // 0x2B78(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                          // 0x2C00(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                          // 0x2CB0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                          // 0x2D28(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                          // 0x2DA0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                           // 0x2E18(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_4;                                     // 0x2E90(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose_2;                          // 0x2EC0(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x2F48(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                           // 0x2FF8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x3070(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x30E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x3160(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                     // 0x31D8(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x3208(0x0088)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x3290(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x3340(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x33B8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x3430(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x34A8(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                     // 0x3520(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x3550(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x35D8(0x0030)
	float                                              JogStartPosition;                                         // 0x3608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartBlendTime;                                           // 0x360C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotAnimBlendTime;                                       // 0x3610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass GhostRockLayerAnimBP.GhostRockLayerAnimBP_C");
		
		return ptr;
	}


	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
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
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GhostRockLayerAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
