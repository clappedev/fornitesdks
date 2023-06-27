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

// AnimBlueprintGeneratedClass SK_Pickaxe_Jackel_AnimBP.SK_Pickaxe_Jackel_AnimBP_C
// 0x0B40 (0x0F10 - 0x03D0)
class USK_Pickaxe_Jackel_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A1D8019943358C956668FA98508DF50C;      // 0x03D8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x03F8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x0418(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C7315F4F4614EF1BD790E2AA1E5A0E13;// 0x0490(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A620197348165F456C40F885EFF492B2;// 0x04B0(0x00B0)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_ECE6BB3242EFB0D722475C95FC3139F3; // 0x0560(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F7B25C9E4CF1DD943771CAA05F634B01;// 0x0AB0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0AD0(0x0440)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_Jackel_AnimBP.SK_Pickaxe_Jackel_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_Jackel_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
