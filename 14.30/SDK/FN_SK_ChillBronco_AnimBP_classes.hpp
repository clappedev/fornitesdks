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

// AnimBlueprintGeneratedClass SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C
// 0x0CA8 (0x0F68 - 0x02C0)
class USK_ChillBronco_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x02D0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02F0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0310(0x0440)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x0750(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x07D8(0x0030)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0808(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0810(0x0650)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0E60(0x0108)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_ChillBronco_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
