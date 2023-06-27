#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x17C8 (0x1A40 - 0x278)
// ControlRigBlueprintGeneratedClass Mech_Veh_ConrolRig.Mech_Veh_ConrolRig_C
class UMech_Veh_ConrolRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution_0;                                  // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_510C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_Control                      Leg_IK_L;                                          // 0x2C0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SpringIK                     SpringIK_0;                                        // 0x3B0(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform             SetBoneTransform_0;                                // 0x550(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Knee_Pole_Vector_L;                                // 0x5E0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_0;                                // 0x6D0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0x780(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x7F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Leg_IK_R;                                          // 0x860(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SpringIK                     SpringIK_1;                                        // 0x950(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneTransform             SetBoneTransform_1;                                // 0xAF0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Knee_Pole_Vector_R;                                // 0xB80(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_1;                                // 0xC70(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_2;                                // 0xD20(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_3;                                // 0xD90(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_0;                         // 0xE00(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_1;                         // 0xE70(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_0;                       // 0xEE0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_2;                                // 0xF90(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_2;                         // 0x1040(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_3;                         // 0x10B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_1;                       // 0x1120(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_3;                                // 0x11D0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_FABRIK                       FABRIK_0;                                          // 0x1280(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_FABRIK                       FABRIK_1;                                          // 0x1340(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_3;                                 // 0x1400(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0;                              // 0x1470(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_3_0;                       // 0x14E0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_4;                         // 0x1550(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_0_0;                     // 0x15C0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_0_0;                              // 0x1670(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_5;                                 // 0x1720(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0;                              // 0x1790(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_6;                         // 0x1800(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_7;                         // 0x1870(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMakeRelative    MathTransformMakeRelative_1_0;                     // 0x18E0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformMul             MathTransformMul_1_0;                              // 0x1990(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mech_Veh_ConrolRig_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
