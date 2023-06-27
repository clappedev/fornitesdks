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

// AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C
// 0x00A0 (0x0360 - 0x02C0)
class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D0(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0300(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0318(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
