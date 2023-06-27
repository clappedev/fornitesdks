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

// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
// 0x1070 (0x1510 - 0x04A0)
class UF_MED_Rebirth_Soldier_AnimBP_C : public UCustomCharacterPartAnimInstance_Rebirth_Soldier_F
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_2;                                // 0x04B0(0x0650)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0B00(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0B20(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x0B40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x0C48(0x0108)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x0D50(0x0650)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x13A0(0x0140)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x14E0(0x0030)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C");
		
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
