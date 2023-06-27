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

// AnimBlueprintGeneratedClass M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C
// 0x0BA8 (0x0F78 - 0x03D0)
class UM_MED_Cupid_Dark_Backpack_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03D8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x03F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult02;                         // 0x0420(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A0137061484599B25197858D2F7A6047;// 0x0448(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult03;                         // 0x0470(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult04;                         // 0x0498(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult05;                         // 0x04C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult06;                         // 0x04E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult07;                         // 0x0510(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult08;                         // 0x0538(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult09;                         // 0x0560(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult10;                         // 0x0588(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F32ECA204BA52915449F7586670FDD3F;// 0x05B0(0x0028)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName;                                 // 0x05D8(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x0668(0x0020)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName02;                               // 0x0688(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult02;                              // 0x0718(0x0020)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName_A5B0750743BC60D5DBD9CD9A53825EA5;// 0x0738(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DDB45B024EB1B3A844858EB62E68EFD8;// 0x07C8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EDC9BA3E4598487A8AE44B8628125F80;// 0x07E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult11;                         // 0x0810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult12;                         // 0x0838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult13;                         // 0x0860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC88B26A4B0EF517BFB2FAB4582E9CE5;// 0x0888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E09A547745220A77799E719EAE07BF76;// 0x08B0(0x0028)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName_F61BD57147B6CF4A77AB1F9E313ABF81;// 0x08D8(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B571DB9B48F957B83F4096A9FE74BE18;// 0x0968(0x0020)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName03;                               // 0x0988(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult03;                              // 0x0A18(0x0020)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName_F41464784B249811ADA80CAF0407FEBD;// 0x0A38(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult04;                              // 0x0AC8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D761559B4C8284942904B0A462F293A9;// 0x0AE8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult05;                              // 0x0B98(0x0020)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName04;                               // 0x0BB8(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult06;                              // 0x0C48(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D4E76E0F4C6FA4F9A4461E9B26817372;// 0x0C68(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D893655241375E4EA950E9AFE0A9F50B;// 0x0D48(0x00C8)
	struct FAnimNode_PoseByName                        AnimGraphNode_PoseByName_E9D9A6E34A3F2194A5347FB99D8CF2D1;// 0x0E10(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult07;                              // 0x0EA0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x0EC0(0x00B0)
	float                                              PlayerVector_FwdBwd;                                      // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerVector_LR;                                          // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
