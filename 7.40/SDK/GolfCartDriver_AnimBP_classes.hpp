#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2788 (0x6B58 - 0x43D0)
// AnimBlueprintGeneratedClass GolfCartDriver_AnimBP.GolfCartDriver_AnimBP_C
class UGolfCartDriver_AnimBP_C : public UFortPlayerAnimInstance_GolfCartDriver
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x43D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_354D57084455C3AFA7109D9B89111722; // 0x43D8(0x20)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_C60FFFED461D67E9D898119EA47D71FA; // 0x43F8(0xF8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_027788D3448A244EF7E55F8595F0E467; // 0x44F0(0xF8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E287192B41DB06C3CA6166A6EC4B7583; // 0x45E8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_562FFDB147EC143B14535DB8DB758343; // 0x4608(0x108)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_8EF24F4348840064F9E6F9892C0AEA7A; // 0x4710(0xF8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_BD0B707A4C53CC6945608FBECFE72DA7; // 0x4808(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9EC96A024C97ACDF96F5D7A2F8E96DDE; // 0x4910(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8D41583044A9968D5C17A2B1002B06AD; // 0x4930(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_BCA6314148E9C81CFC8191A1416BA364; // 0x4A38(0x108)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_18CF224F47315576541EB691DABC5F0A; // 0x4B40(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EDDC912B47873968BBDB9E9B69F19166; // 0x4B88(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_AF851C6C4E9568531E73B39475DBF517; // 0x4BB0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2C396C3848D6C174ACFCEAA766641239; // 0x4BD8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35B38C804AE2AF410BD67791EB8C4DC6; // 0x4C00(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_81C7F66D43B991C3BE41A89A8FBCA81F; // 0x4C28(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FABE886E4D69990825549988AA9B76DD; // 0x4C50(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31141A97485711E00E0242A1395EB74D; // 0x4C78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_346F6FCC435D7F8802DB418734C59102; // 0x4CA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_05B1847C4F835A3823F79891DA461278; // 0x4CC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D579653F48D9D0452AE385816BB2EB26; // 0x4CF0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2BF9C2C7468FEADCFE817FB87F471685; // 0x4D18(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D2B572E94BE81101C34C6EAA6125331D; // 0x4D40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CA808D61438B76097BED2B9058262941; // 0x4D68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B0D771494B0B9166943E97BDB52C5DF6; // 0x4D90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2C63890A44E079193B19BA98E617FB7B; // 0x4DB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5FAE847441154032F5B47C93393E91E9; // 0x4DE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50EA94C44E92EAAD21A9B99BD983DB77; // 0x4E08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_77B8DD49461506255FAE67B0BB2F4771; // 0x4E30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B41F1ECD427F2FC3497E5692C03D2CE6; // 0x4E58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25A5ADF545E14C46B0F872BF7D3983AB; // 0x4E80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2CAF4AE740974C9E13EF94804C975D3C; // 0x4EA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_94AAB0C24FB6A238DAEAAA88538B02B5; // 0x4ED0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B6EA132D42EF729FEE6A2FA35A5E8AC2; // 0x4EF8(0x28)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_B308DF3F47F1018A9236DC88321F0E40; // 0x4F20(0x188)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35DB09AA4C08E9A92B08DE839D15BBC9; // 0x50A8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2BC5515644F37A6E44FCE6B47C655639; // 0x5120(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_89C827F54D14A77E796B3488F44D4DA1; // 0x5140(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_DBA724C94AF034DCEB3970B4D5CBA5EB; // 0x51B8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CC85113A4128DAA74AA3ED8C30504C6F; // 0x51D8(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_211AF20844C211E5F32B4DB818C7CC25; // 0x5250(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C480230F412DD292D4A7C6B80BBE9143; // 0x5300(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_C15ACE0C47D804330EDB29B2983668C1; // 0x5378(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7FE2B90C42C2DC623E43B48485D16677; // 0x5398(0x78)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_6E393B704774526C93CFDFB95EE41486; // 0x5410(0x188)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7C1BBE4D4FF694D0856AE7B7D8F89889; // 0x5598(0xB0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_DABB08A84AE2C8D6055C1CB62A6272CD; // 0x5648(0x188)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16942DEC49F50C421EEB6D8A8F0C502E; // 0x57D0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4F3FE426444651ECFC0092B784EA5510; // 0x5848(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0C376D2D46F01FCBAF462AA991929B0A; // 0x5868(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2F10564B4A383574164A2995B1C54561; // 0x58E0(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BBCE7EF24202B4CA3751E682DB817032; // 0x5990(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2214B2A644544B601F8D47A16F73F59F; // 0x5A08(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EFDFDBF64971D0105E7CD58AEF4FBA35; // 0x5A28(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_DBF0F536446828BB54F6F58276128E5B; // 0x5AA0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D914EAE74CDCDA07BC9D9CBBA4E590A3; // 0x5AC0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_EF0657C74E91C51BE8192092A7EF2ED0; // 0x5B38(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B445FBC5429284E86146E7B5D737B194; // 0x5B58(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A4B270FB4B343B9BDBEBE381A5745DF9; // 0x5BD0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3A7960AE47AD0883DF6F07BDCEA75B90; // 0x5BF0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_F45306754572BBE385DACD90A0654245; // 0x5C68(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F7C74AA74E383D6498FF10A9F22C61DF; // 0x5C88(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8205DB544B3A6B0013DEE5BBB2530A67; // 0x5D00(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_46E819EB43B8C109D5C7C68465B2AD4A; // 0x5D20(0x28)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_8ECC0415462204F00934D385579B42EC; // 0x5D48(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17FE992B4BFC0E8ACE4A26B784AD16DD; // 0x5D90(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_CF0F281B4F250B872BE42585E44BE4A3; // 0x5E08(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8283904F46729892530EE6A448BDFD37; // 0x5E28(0x28)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_0AD1D3944CCAFFFF5EFFA8A9521556A2; // 0x5E50(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8F25F614492E2B7F34A488AD14753332; // 0x5E98(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5AF948D54F87FF609D36ADBBE1E960F5; // 0x5F10(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_ACC771544D23A7C6DB62538DB7EDCAF1; // 0x5F30(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_048651004AD4F9AE05768C9AEA7AC007; // 0x5F58(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8913C5FA4C1623FF8138FDBC4566BBB7; // 0x5F78(0xB0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_D5C7F7924BE08287323517AD3183553E; // 0x6028(0x188)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EEA153D74CA4B7A4EAE8B38DD035DA87; // 0x61B0(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DF582DC7471F0FC72410079D4804DC44; // 0x6228(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EEC94D1C4572A9B0B6CC3A92CD233D98; // 0x62A0(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_AD61BD6A454F8BA418E866AF4BD793A5; // 0x6318(0xA0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_54C53DB741478350F4D7C38C68E2FA33; // 0x63B8(0x188)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_987AD4754D4A4873F66EBE8DE815E33E; // 0x6540(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D3EAFC8A44B943ADAD144B88248A4B65; // 0x65B8(0xA0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_A4F2938C433EFA478CBDBDA2BD98C7C1; // 0x6658(0xA0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_4789D88A401756E8490628B1461B48ED; // 0x66F8(0x188)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9086339040537829BAFB01ADCAF52CA0; // 0x6880(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_255E447B4EADF430AF92DEAA6CC0836C; // 0x68A0(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_DB0D3EAB4374B7CCADFD029541ABB1F9; // 0x6950(0xB8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_C332621842D891E7E3639BA6F7FFEA08; // 0x6A08(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_503D08B949307B085ACFD6A4B5ED522C; // 0x6AD0(0x78)()
	UMulticastDelegateProperty_                  OnPedal;                                           // 0x6B48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GolfCartDriver_AnimBP_C");
		return Clss;
	}

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GolfCartDriver_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
	void OnPedal__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
