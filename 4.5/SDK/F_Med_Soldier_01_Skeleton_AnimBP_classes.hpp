#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x938 (0xD48 - 0x410)
// AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C
class UF_Med_Soldier_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	uint8                                        Pad_5392[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515; // 0x420(0x3B0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE; // 0x7D0(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767; // 0x818(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451; // 0x860(0xE8)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C; // 0x948(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_56F62F3B493C77E730A7C0A4F1892259; // 0x990(0x3B0)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xD40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_Med_Soldier_01_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
