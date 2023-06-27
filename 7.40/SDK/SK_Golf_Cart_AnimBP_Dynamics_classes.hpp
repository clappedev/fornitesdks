#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1778 (0x1A08 - 0x290)
// AnimBlueprintGeneratedClass SK_Golf_Cart_AnimBP_Dynamics.SK_Golf_Cart_AnimBP_Dynamics_C
class USK_Golf_Cart_AnimBP_Dynamics_C : public UFortVehicleDynAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_26B200B64E3BBD14ED71B49B956BFEB8; // 0x298(0x20)()
	uint8                                        Pad_4021[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_A8A72390494741E6F0777C913CE9EA7E; // 0x2C0(0x550)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_53B066C943DD41BE1B0D65A839BA819D; // 0x810(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_EC181E1341DD00E759B663A544946DE8; // 0x830(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BCCB4C3144E30EB9115D29826F133B14; // 0x878(0x20)()
	uint8                                        Pad_4022[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7C184A89488FA6A164B6BC99EE4A3D4D; // 0x8A0(0x310)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DE966F04464F5491F1617CB701D1C9C7; // 0xBB0(0x310)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B76D90B64CB1AEF2B4A6F1B0467616C6; // 0xEC0(0x310)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CE982AED4F5D5F271AD8C883245EDDC7; // 0x11D0(0x310)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D988F8A74E7C2AC3E6F9308F441F3BE4; // 0x14E0(0x108)()
	uint8                                        Pad_4023[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A5F52AC64D61530A5EECBEB755A08519; // 0x15F0(0x310)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3ADCB9E74C9017F35BB1578164FEE228; // 0x1900(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Golf_Cart_AnimBP_Dynamics_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Golf_Cart_AnimBP_Dynamics(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
