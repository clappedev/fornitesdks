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

// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
// 0x0310 (0x0600 - 0x02F0)
class UApplyMedkit_Athena_AnimBP_C : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0300(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x0330(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0378(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                            // 0x03F0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x04A0(0x00C8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x0568(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x05B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x05D8(0x0028)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
