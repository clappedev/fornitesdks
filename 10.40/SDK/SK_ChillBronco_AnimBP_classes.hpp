#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB98 (0xE08 - 0x270)
// AnimBlueprintGeneratedClass SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C
class USK_ChillBronco_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C4E7C10B4123546D5E4707ADA0584F21; // 0x278(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_56961C9147FF433DCC0DF5B564D419BC; // 0x298(0x20)()
	uint8                                        Pad_4D45[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5EBC59BD4088DABE5FBB73A504160CAB; // 0x2C0(0x440)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_26B47E4B4E9A29D3656E56BDB7BEE893; // 0x700(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_29EF0641464C2ABACCC4E1868B9A2BE0; // 0x770(0x30)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_07B9D0C44196FD0A18AD70A0D38A8826; // 0x7A0(0x560)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D0FBBBD1410F7C5A52B45EAB29BDA57E; // 0xD00(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_ChillBronco_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_ChillBronco_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
