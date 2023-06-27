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

// AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
// 0x10E8 (0x1588 - 0x04A0)
class UHighTower_Tapas_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x04B0(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x04D0(0x0140)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0610(0x0030)
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                      // 0x0640(0x0260)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x08A0(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x09A8(0x00A0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A48(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0A50(0x0650)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x10A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x10C0(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x10E0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x11A8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x11D0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x11F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x1218(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1240(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1348(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1368(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x1388(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x13D0(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                // 0x1498(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1560(0x0028)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
