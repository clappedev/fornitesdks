#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x98 (0x308 - 0x270)
// AnimBlueprintGeneratedClass DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C
class UDrumShotGun_SK_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B86D730145535107B7503BB7858A1B67; // 0x278(0x30)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_3D25A14C4C8B1F4F18C10B9F2C9A4EF4; // 0x2A8(0x18)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6E9E0BCA419CD4F42433C282CC789184; // 0x2C0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DrumShotGun_SK_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_DrumShotGun_SK_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
