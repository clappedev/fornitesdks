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

// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C
// 0x07D2 (0x0A92 - 0x02C0)
class UPistol_Revolver_SideAction_AnimBP1_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D0(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0300(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x0348(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                         // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                         // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                         // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x0488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x04B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x04D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0500(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                           // 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                              // 0x05A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                           // 0x05D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                              // 0x0648(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                           // 0x0678(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                              // 0x06F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x0720(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                              // 0x0798(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x07C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0840(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0870(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x08E8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                               // 0x0918(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0930(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0960(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0A10(0x0078)
	int                                                DrumPositionCount;                                        // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos1;                                       // 0x0A8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos2;                                       // 0x0A8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos3;                                       // 0x0A8E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos4;                                       // 0x0A8F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos5;                                       // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos6;                                       // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Revolver_RotChamber();
	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
