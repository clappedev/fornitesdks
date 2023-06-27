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

// AnimBlueprintGeneratedClass Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C
// 0x0560 (0x0820 - 0x02C0)
class UKev_Fish_Gadget_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x02D0(0x0018)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x02E8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0308(0x0020)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FAnimNode_Trail                             AnimGraphNode_Trail_2;                                    // 0x0330(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                      // 0x0590(0x0260)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x07F0(0x0030)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kev_Fish_Gadget_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
