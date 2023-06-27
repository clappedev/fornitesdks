#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x6A0 (0xAC0 - 0x420)
// AnimBlueprintGeneratedClass SK_Pickaxe_Graffiti_Dyn_AnimBP.SK_Pickaxe_Graffiti_Dyn_AnimBP_C
class USK_Pickaxe_Graffiti_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_E8F720E645BA2B717EC6CBAF1E3445A0; // 0x428(0x40)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_5044A18743B86B01C04446B2B5000267; // 0x468(0x68)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_47CF91C54D9803ABB8CCA9BD7A049816; // 0x4D0(0x570)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_72A284864185995BDCE82699CC2DE952; // 0xA40(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F07672D147C05CE0E10F4BACDC4D5FBB; // 0xA80(0x40)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_Graffiti_Dyn_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Pickaxe_Graffiti_Dyn_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
