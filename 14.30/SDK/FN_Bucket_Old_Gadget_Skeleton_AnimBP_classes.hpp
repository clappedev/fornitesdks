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

// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
// 0x0860 (0x0D00 - 0x04A0)
class UBucket_Old_Gadget_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x04B0(0x0650)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0B00(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0B20(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x0B40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0BC8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0BF8(0x0108)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
