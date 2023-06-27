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

// AnimBlueprintGeneratedClass Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C
// 0x0058 (0x04C8 - 0x0470)
class UFemale_Commando_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983;      // 0x0478(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
