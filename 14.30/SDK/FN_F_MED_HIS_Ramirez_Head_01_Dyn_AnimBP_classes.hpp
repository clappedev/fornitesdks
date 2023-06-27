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

// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// 0x24C1 (0x2961 - 0x04A0)
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance_RamirezHead
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x04B0(0x0030)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x04E0(0x0650)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x0B30(0x0088)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0BB8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x0BC0(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x1000(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x1020(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x1040(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x1480(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x18C0(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x1D00(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x1DC8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1DF0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x1E90(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x1EB8(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x1FC0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x1FE0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x2000(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x20A0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x20C8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x2190(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x21B8(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x2258(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x2278(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x22A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x22C0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x22E0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x2300(0x0108)
	unsigned char                                      UnknownData02[0x8];                                       // 0x2408(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x2410(0x0440)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x2850(0x0108)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               GetPlayerListUsesCustomCharacterParts;                    // 0x2960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
