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

// AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
// 0x0CC0 (0x1160 - 0x04A0)
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_LinkedInputPose;                            // 0x04B0(0x0088)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0538(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0558(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0578(0x0030)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x05B0(0x0440)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x09F0(0x0650)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1040(0x0108)
	struct FRotator                                    gear_rot;                                                 // 0x1148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1154(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      skel_mesh;                                                // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
