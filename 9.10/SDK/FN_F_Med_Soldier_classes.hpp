#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass F_Med_Soldier.F_Med_Soldier
// 0x1098 (0x1468 - 0x03D0)
class UF_Med_Soldier : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x03E0(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0840(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451;// 0x0860(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0998(0x0020)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09B8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x09C0(0x0440)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_ABE53C3B430A76D8943BC99613D595E7;// 0x0E00(0x0108)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0F08(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_F22D4D5B46C1E592FF9EE3BB4D57BF8C; // 0x0F10(0x0550)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_Med_Soldier.F_Med_Soldier");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Soldier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
