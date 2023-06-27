#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x6E0 (0xAF0 - 0x410)
// AnimBlueprintGeneratedClass SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C
class USK_Pickaxe_Street_Basketball_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3E083023491E8C6A61B83B8012C20316; // 0x418(0x48)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_BC59562E47B30C90A6ECDB9F1FF6EC19; // 0x460(0x68)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_373EDCEA43AE17C5F5906381E2A40518; // 0x4C8(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_C5B6C0924B16770E381AC88FB3481573; // 0x510(0x48)()
	uint8                                        Pad_326E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_7AA881DB426694954884689980DBABB3; // 0x560(0x590)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_Street_Basketball_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
