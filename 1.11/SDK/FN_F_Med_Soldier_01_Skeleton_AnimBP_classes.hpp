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

// AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C
// 0x0B80 (0x0FF0 - 0x0470)
class UF_Med_Soldier_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C;      // 0x0478(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451;// 0x04C0(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767;// 0x0558(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE;// 0x05A0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515;// 0x05E8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6F4A94024B5C2ABE419876B18771368A;// 0x0868(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7DD61B914A5D12998FBEB0A641F3B55D;// 0x0AE8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F7EDF3B142843689DC3442A6FE1CD5A2;// 0x0D68(0x0280)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
