#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2D51 (0x31C1 - 0x470)
// AnimBlueprintGeneratedClass Husk_V2_Skeleton_AnimBP.Husk_V2_Skeleton_AnimBP_C
class UHusk_V2_Skeleton_AnimBP_C : public UFortHuskAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_CE090E354EB61760D79F62953755D48B; // 0x478(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4262A82C494C864EB2783181565B1F95; // 0x4C0(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_201546E14BB12870CD46DEB250F8B5F5; // 0x528(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8CF796A84E97B8DF6CF0FA9BEC0A8FEA; // 0x570(0xD8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_CC90BF5D4485EFDC63F006AB266EF7B1; // 0x648(0xD8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9C10D5024694DE038D18DF9A1E2ED16C; // 0x720(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0761E3E2446FBE8BA8C70182C4A35DC4; // 0x768(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9EA1B562402B71A1A343FC9CBE33E524; // 0x7B0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_68E2A6A24AF42DF156FC058BEDF08205; // 0x7F8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3519F49C4E381BBD00035481AA888E01; // 0x840(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FE855055439F65E90F5DBC83DF9B5FAE; // 0x888(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46B780A24C65642605CE6C90EC7E5FBD; // 0x8D0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B8D4B871406AB17AE19CD6A71858050D; // 0x918(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_04AE961145429F2A6516B5AFED7A1199; // 0x960(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18F96FA14A02CD829B1BD2BB319893A3; // 0x9A8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_92D1462E43608D5A772EE8977188B28C; // 0x9F0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B3B42E5F483C92E55E5B5AB2EEF928CB; // 0xA38(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_07853C194127B6B9ABA25EB0CE8FC913; // 0xA80(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_2B5D61D94A998DAF661E3AA5F111D3DF; // 0xB20(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F2466C2945F75171ADD34DBC8512C178; // 0xB60(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_52441323478ECFAD9002D3981B66DB69; // 0xC00(0x40)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_CEBDB7714BDD47EE51EC628B95F88CC6; // 0xC40(0x128)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_AA78A5724647E4158FF5F4BB3DAE6AE9; // 0xD68(0xD0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_34B158C94B4C0A758A1ECB9543B1E89D; // 0xE38(0xD0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpace_61D09BDE4910BB779CE507B34C77D77F; // 0xF08(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpace_D51EEE3C40EF00C40880ED99E7B4CB82; // 0x1030(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpace_3B21D0F74A571B7E44D77182E3664CD6; // 0x1158(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpace_EB9668CE4E63A6AEAC0D118192166A87; // 0x1280(0x128)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_4D3EF8E6479C8F9899D8B0A0E462CD2D; // 0x13A8(0xD0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_475422DD46F8DF502DF471AE74362963; // 0x1478(0xD0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1572F9DA490001FD6004CDB0DF3D781A; // 0x1548(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_AF887C0F4724BAE182A49FB7D4A582E4; // 0x1670(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_D80717DD435257C906A758BA71A50B59; // 0x1798(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_59353A2F4400DE28791A0A81BB3EE600; // 0x18C0(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9F755C6847C47BF3424FFC93A343B970; // 0x19E8(0x128)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_3A6B017A48D75B51843A31903180A183; // 0x1B10(0xD0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_200821C74709E63BAF313582BF695B3B; // 0x1BE0(0x128)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7E75A143410F22AF256540B459D2B601; // 0x1D08(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F0E099ED4017D74017D962B11C61B5E7; // 0x1E30(0x40)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_DD1C02754A07A803179F1786A417BC73; // 0x1E70(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_122B753F43EC33EA4C995CABEA83C870; // 0x1EB0(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_11E2EC1247C028C995A4A9BE1A3AA225; // 0x1F50(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_39F837DF4559E7B78618509212FA101A; // 0x1F90(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E0AAFD514546039873FDE1B2BC5973A4; // 0x2000(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6A66E89B412EC4DCEA3B28BE0FB8CB21; // 0x2040(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8AC800314C69C5BD9936DDBEF6F3969C; // 0x20E0(0xA0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5556979540657B0296A90EA8BAD15B6F; // 0x2180(0xD0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_DE200ADD4A630F30F23969BE517276BD; // 0x2250(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1E2D082A46CD2A209782FEA2AD93AF35; // 0x2290(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13C28DE240F88A86CE0491B6966B00AB; // 0x2330(0xA0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3DA2FC3048234652B4FAFDBE463B38CE; // 0x23D0(0xD0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_02564C8C4230BED3F452CABC83461CB9; // 0x24A0(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_9E52933D47EAE3A3023E249E12656754; // 0x2540(0x40)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_76F42A8841D435051B3D67AF7338EAB8; // 0x2580(0xE0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_48C2482447E3BB71BB32CC9176C9C127; // 0x2660(0x68)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2056727A4CA6CAC00898479B970FEF11; // 0x26C8(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E0569F414F3F089D3F91ED8FA17208DF; // 0x2708(0x68)()
	struct FFortAnimNode_ScaleHuskBones          FortAnimGraphNode_ScaleHuskBones_C98C005645E0445DEC600E8072A81B12; // 0x2770(0x1D8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_D6D702774E1F4455BAF2A7A5B736D129; // 0x2948(0x120)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8736A3B946229ADBF7304781565DC4EA; // 0x2A68(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_01EB402E47EB33C78EF0E185C084E959; // 0x2AA8(0x40)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_61C61714470FAED4B69625AF00614E3B; // 0x2AE8(0x1E0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_BCB82FCA4F7248B50A9FB1818E57F4C2; // 0x2CC8(0xF0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2C339AAA4867DCCE54A5F6B29C084866; // 0x2DB8(0xD8)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_DCEFF6F44F895C53A8225293C7E284E1; // 0x2E90(0xD0)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_27D5D46D48FC1C7F97F1E0BCA1F22DEC; // 0x2F60(0x70)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_08C2BBD247629F653E827CB2E2AC5821; // 0x2FD0(0x70)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2B96F3E246E06BAC1B4A6B88125B87D9; // 0x3040(0x70)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5D9F5E484AB77E4893B21FA868DA2A0F; // 0x30B0(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3329431749B97429D217EF99E4ADB4A6; // 0x3120(0xA0)()
	bool                                         ShouldDisableWalking;                              // 0x31C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Husk_V2_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_3B21D0F74A571B7E44D77182E3664CD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_EB9668CE4E63A6AEAC0D118192166A87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_4D3EF8E6479C8F9899D8B0A0E462CD2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_475422DD46F8DF502DF471AE74362963();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_1572F9DA490001FD6004CDB0DF3D781A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_AF887C0F4724BAE182A49FB7D4A582E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D80717DD435257C906A758BA71A50B59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_59353A2F4400DE28791A0A81BB3EE600();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_9F755C6847C47BF3424FFC93A343B970();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_3A6B017A48D75B51843A31903180A183();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_200821C74709E63BAF313582BF695B3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_7E75A143410F22AF256540B459D2B601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_34B158C94B4C0A758A1ECB9543B1E89D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_AA78A5724647E4158FF5F4BB3DAE6AE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_CEBDB7714BDD47EE51EC628B95F88CC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_D51EEE3C40EF00C40880ED99E7B4CB82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B3B42E5F483C92E55E5B5AB2EEF928CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_92D1462E43608D5A772EE8977188B28C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_18F96FA14A02CD829B1BD2BB319893A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_04AE961145429F2A6516B5AFED7A1199();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_B8D4B871406AB17AE19CD6A71858050D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_5556979540657B0296A90EA8BAD15B6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_46B780A24C65642605CE6C90EC7E5FBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_FE855055439F65E90F5DBC83DF9B5FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_3DA2FC3048234652B4FAFDBE463B38CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_3519F49C4E381BBD00035481AA888E01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_61C61714470FAED4B69625AF00614E3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_ApplyAdditive_BCB82FCA4F7248B50A9FB1818E57F4C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_LayeredBoneBlend_2C339AAA4867DCCE54A5F6B29C084866();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendListByInt_DCEFF6F44F895C53A8225293C7E284E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_68E2A6A24AF42DF156FC058BEDF08205();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9EA1B562402B71A1A343FC9CBE33E524();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_0761E3E2446FBE8BA8C70182C4A35DC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_TransitionResult_9C10D5024694DE038D18DF9A1E2ED16C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_LayeredBoneBlend_CC90BF5D4485EFDC63F006AB266EF7B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Husk_V2_Skeleton_AnimBP_AnimGraphNode_BlendSpacePlayer_61D09BDE4910BB779CE507B34C77D77F();
	void ExecuteUbergraph_Husk_V2_Skeleton_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
