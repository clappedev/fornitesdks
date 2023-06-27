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

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x0510 (0x08B0 - 0x03A0)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_4;                               // 0x03B0(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_3;                               // 0x04D8(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_2;                               // 0x0600(0x0128)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone;                                 // 0x0728(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0850(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0870(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                // 0x08A0(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
