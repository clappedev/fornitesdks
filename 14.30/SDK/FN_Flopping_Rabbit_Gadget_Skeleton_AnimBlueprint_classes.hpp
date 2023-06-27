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

// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
// 0x0EBD (0x117D - 0x02C0)
class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x02D0(0x0088)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0360(0x0650)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x09B0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x09D0(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                         // 0x09F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                         // 0x0A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x0A40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x0A68(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x0A90(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0B08(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x0B38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0BB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0BE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0C58(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0C88(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0D38(0x0108)
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                      // 0x0E40(0x0260)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x10A0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10E8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1118(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1138(0x0020)
	struct FVector                                     GripOffset;                                               // 0x1158(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OneHandGrip;                                              // 0x1164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1165(0x0003) MISSED OFFSET
	float                                              Trail_Alpha;                                              // 0x1168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Trail_RelaxScale;                                         // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    GripRotation;                                             // 0x1170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTethered;                                               // 0x117C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
