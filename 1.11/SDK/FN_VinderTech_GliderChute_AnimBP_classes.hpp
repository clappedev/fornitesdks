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

// AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C
// 0x0690 (0x0A50 - 0x03C0)
class UVinderTech_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6;      // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585;      // 0x0410(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648;// 0x0480(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE;// 0x0500(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775;// 0x0580(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122;// 0x0600(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D;// 0x0680(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C;// 0x06F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65;// 0x0738(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB;// 0x07A8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D;// 0x07F0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1;// 0x0918(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F;// 0x0960(0x00D8)
	bool                                               IsParachuteOpen;                                          // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftRight;                                                // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawDeltaSmoothed;                                         // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_VinderTech_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
