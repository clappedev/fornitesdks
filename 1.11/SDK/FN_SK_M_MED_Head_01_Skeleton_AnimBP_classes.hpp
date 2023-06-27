#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_M_MED_Head_01_Skeleton_AnimBP.SK_M_MED_Head_01_Skeleton_AnimBP_C
// 0x04F0 (0x0960 - 0x0470)
class USK_M_MED_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906;// 0x0478(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1;      // 0x0510(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD;// 0x0578(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF;// 0x0658(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73;// 0x0738(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7;// 0x0808(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178;      // 0x08A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41;// 0x08E8(0x0070)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_M_MED_Head_01_Skeleton_AnimBP.SK_M_MED_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
