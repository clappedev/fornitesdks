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

// AnimBlueprintGeneratedClass M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP.M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C
// 0x0510 (0x0980 - 0x0470)
class UM_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F901F86F47BB0F1F9BB524BC464D209F;      // 0x0478(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0DAB21BB41E9DEE27FC2A48E47BCC290;// 0x04C0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EC53447A47EF3B33B9B6AB9A09D0A7B8;      // 0x0558(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_126DBAF54E00BF07110680986BEC829C;// 0x05C0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_662B3DFB44FA08592E46219428119F66;// 0x06A0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4C473D884B5C599CB66269BA6C880FDD;// 0x0780(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_CD91997043F75270B169AA90390DB8CD;// 0x0850(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2A31EFF642A7F0EC3DDBA189723CF36C;// 0x08E8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EB97BCF7419D3643C831D8A99B57F2EB;// 0x0930(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP.M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_CD91997043F75270B169AA90390DB8CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_4C473D884B5C599CB66269BA6C880FDD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0DAB21BB41E9DEE27FC2A48E47BCC290();
	void Playface();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_HIS_Sparks_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
