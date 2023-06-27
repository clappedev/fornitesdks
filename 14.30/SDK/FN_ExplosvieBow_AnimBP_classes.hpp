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

// AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C
// 0x1200 (0x15B0 - 0x03B0)
class UExplosvieBow_AnimBP_C : public UFortBowWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03C0(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0488(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x04B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x04D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x04F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x05F8(0x0108)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                         // 0x0700(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                          // 0x07E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0890(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x0908(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                            // 0x09B8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0A80(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0AF8(0x0078)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                   // 0x0B70(0x0188)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x0CF8(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                         // 0x0DC0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                         // 0x0EA0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                            // 0x0F80(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x1048(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x1078(0x0018)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1090(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x1130(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x11F8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x12D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1350(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1380(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                           // 0x1430(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x14F0(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1568(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93();
	void ExecuteUbergraph_ExplosvieBow_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
