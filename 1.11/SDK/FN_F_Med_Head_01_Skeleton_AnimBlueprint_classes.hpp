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

// AnimBlueprintGeneratedClass F_Med_Head_01_Skeleton_AnimBlueprint.F_Med_Head_01_Skeleton_AnimBlueprint_C
// 0x0F80 (0x13F0 - 0x0470)
class UF_Med_Head_01_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5;// 0x0478(0x0098)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DAAA55974A974C7391E2738414737C1A;// 0x0510(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ADAB37DE4D0626D74E5B289531C43C2B;// 0x0790(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0636CDEC4754ABD475C03684CC485005;// 0x07D8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_87895A27417AC5E9596A6AAFC208A8AB;// 0x0820(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F322569444B8EAC4D76EDFB3DD1FFFA4;// 0x0AA0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5FC365C8473A405E8D365596E3963183;// 0x0D20(0x0280)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE6745244161B5BBC7CDC6A630489F45;      // 0x0FA0(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FB2B157E47A93660872C13BDA80F5382;// 0x1008(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7D36480A45BCB919AC54C88B614CD912;// 0x10E8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF;// 0x11C8(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09;// 0x1298(0x0098)
	struct FAnimNode_Root                              AnimGraphNode_Root_78C289E7415EB6B448CEBA94209DD0E0;      // 0x1330(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B2874774D09EC4D49B608AE20C3B1E8;// 0x1378(0x0070)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x13E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_Med_Head_01_Skeleton_AnimBlueprint.F_Med_Head_01_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_34C24EC14C087D4CDC73CDB02E3DA5AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_7578003E4B46F65767573F97536A9D09();
	void Playface();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_8B223DDB4D6C5B4B573337BD037B3EA5();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Head_01_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
