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

// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C
// 0x00F0 (0x0560 - 0x0470)
class UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_724BF68D49D16A5F96902B93333198D7;      // 0x0478(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A;// 0x04C0(0x0098)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
