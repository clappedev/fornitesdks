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

// AnimBlueprintGeneratedClass M_Med_Soldier.M_Med_Soldier
// 0x0E68 (0x1238 - 0x03D0)
class UM_Med_Soldier : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x03D8(0x0138)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0510(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C02AB20348B2B54CFA0C50803C42321A;// 0x0530(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0550(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0570(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B17F58154A349B54BB143CBE152F66E8;// 0x09B0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0DF0(0x0440)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_Med_Soldier.M_Med_Soldier");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_Med_Soldier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
