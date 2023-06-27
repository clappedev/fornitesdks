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

// AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C
// 0x0484 (0x08B4 - 0x0430)
class UMenuScreen_Commando_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F70AA5C441806953E84736BA8BC1318A;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_476FB3144FF01CDECEC25D9FCA0BF170;// 0x0480(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_78BB02D34BB0CD13E52B729CD15EC48B;// 0x04C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30CEFFAA4FD7F57FD5A6EDB40D31DE9D;      // 0x0510(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECCC70F04489C85C49B82FB532A3D3A9;// 0x0578(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B;// 0x05E8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDEB41CC42B9DE30260861A50A7F4D48;// 0x06C8(0x0070)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_0FF63B634F69D86C980667A0EF7099ED;     // 0x0738(0x0098)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E4328FA745CE2162C4FC048495DF6B7C;// 0x07D0(0x00B8)
	struct FScriptMulticastDelegate                    MenuScreenDispatcher;                                     // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HasBeenSelected;                                          // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	struct FVector                                     OffsetTranslate;                                          // 0x089C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x08A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_ModifyBone_E4328FA745CE2162C4FC048495DF6B7C();
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_MenuScreen_Commando(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
