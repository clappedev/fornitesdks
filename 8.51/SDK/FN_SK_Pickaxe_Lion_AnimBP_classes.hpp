#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_Pickaxe_Lion_AnimBP.SK_Pickaxe_Lion_AnimBP_C
// 0x0700 (0x0970 - 0x0270)
class USK_Pickaxe_Lion_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0298(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F885D8BE4E41E0AC4C2F1F986B927309;// 0x02B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E4F1A1A44E5CBA797024FABEB0F302C0;// 0x0330(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0350(0x00B0)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_A5DA35424AD2DC86A0C279B34E798B69; // 0x0400(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0950(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_Lion_AnimBP.SK_Pickaxe_Lion_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
