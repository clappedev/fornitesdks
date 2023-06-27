#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xA8A (0xDFA - 0x370)
// AnimBlueprintGeneratedClass CowboyPistol_AnimBP.CowboyPistol_AnimBP_C
class UCowboyPistol_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_442E6B9D435AE8995A390EB7E8F3C581; // 0x378(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3ED598E0460076589068709A8B67886F; // 0x3B8(0x68)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7263B320484139E8E8AEE681524D2915; // 0x420(0x98)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2F6FBC31412496F7A84CA088C79E45E5; // 0x4B8(0xE8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_ADF14F354FC283207EA8EAADFE15105D; // 0x5A0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FD0EAE864F3471C855E9B280A42E92F9; // 0x5E8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DF2336604D6803012122B4878C5D8393; // 0x630(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1000B18F4202289D2CAE59BE965C93D3; // 0x678(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EFF414694ECE3CB3FC0617AF218EFB1D; // 0x6C0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27C94DCF4E9CA702B64B778A5F360593; // 0x708(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_91F106DE49491495C4B4A182F401CF49; // 0x750(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4595911243E88B402643B0B8404BF73E; // 0x798(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_2CB40C09401B5E93F8D884834E9E68E5; // 0x830(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0E4B92E04C71FBA7612306B313CBD0A8; // 0x870(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_EBEB96034A0E0A8AD6951D8CC3924E80; // 0x908(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C1B3E375486AA11B282A6892F3073CFE; // 0x948(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_73771CD347CA78F9FCF00BB394E78E3E; // 0x9E0(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A1BDA177449286213C03CB95FE124AC3; // 0xA20(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_1E54201D44888361B87A89B66B0D08C3; // 0xAB8(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31D6BFEF41AC9219BC11C9B1EC988910; // 0xAF8(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_6D6620BA467C5297112E64A55DD33F3A; // 0xB90(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_061BCCBC4B58400CEB7CB7B88B7D9DEC; // 0xBD0(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_6838A9C349D4D11B0ED2D28CA863AC31; // 0xC68(0x40)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_933AA3FD4059406AE023909CF3DF3046; // 0xCA8(0x38)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E5E3080E424CC9CA67EDD1B343B030C3; // 0xCE0(0x40)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_73B093474CE4B196755BD5AACA808B91; // 0xD20(0xD0)()
	int32                                        ChamberRotationCounter;                            // 0xDF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChamberPosition_1;                                 // 0xDF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_6;                                 // 0xDF5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_2;                                 // 0xDF6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_3;                                 // 0xDF7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_4;                                 // 0xDF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_5;                                 // 0xDF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CowboyPistol_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_FD0EAE864F3471C855E9B280A42E92F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_DF2336604D6803012122B4878C5D8393();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_1000B18F4202289D2CAE59BE965C93D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_EFF414694ECE3CB3FC0617AF218EFB1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_ADF14F354FC283207EA8EAADFE15105D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_27C94DCF4E9CA702B64B778A5F360593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CowboyPistol_AnimBP_AnimGraphNode_TransitionResult_91F106DE49491495C4B4A182F401CF49();
	void AnimNotify_ChamberRotation();
	void ExecuteUbergraph_CowboyPistol_AnimBP(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
