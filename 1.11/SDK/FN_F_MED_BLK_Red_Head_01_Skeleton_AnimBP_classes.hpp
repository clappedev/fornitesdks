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

// AnimBlueprintGeneratedClass F_MED_BLK_Red_Head_01_Skeleton_AnimBP.F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C
// 0x0510 (0x0980 - 0x0470)
class UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ADD84ECA4C179A894077EA926E4E8C27;      // 0x0478(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030;// 0x04C0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_14C43EE54D79827F00DF1E9A8242ED73;      // 0x0558(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26AEFC2749B6D18C132B8A9AFACB7107;// 0x05C0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B3EB7DD7487D3DA8C89669A6B3EE960E;// 0x06A0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F;// 0x0780(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D;// 0x0850(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9E42BD2C4D12D2F1E124EFBCD05D9810;// 0x08E8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1E99F95C4ECF47136D41C482F786FD2C;// 0x0930(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_BLK_Red_Head_01_Skeleton_AnimBP.F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
