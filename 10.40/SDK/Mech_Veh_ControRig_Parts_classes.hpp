#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xF28 (0x11A0 - 0x278)
// ControlRigBlueprintGeneratedClass Mech_Veh_ControRig_Parts.Mech_Veh_ControRig_Parts_C
class UMech_Veh_ControRig_Parts_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution_0;                                  // 0x278(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_492C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone                      AimBone_0;                                         // 0x2C0(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Paw_Calf_L;                                        // 0x3C0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0;                                 // 0x4B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_0;                         // 0x520(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AimBone                      AimBone_1;                                         // 0x590(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_1;                         // 0x690(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Paw_Thigh_L;                                       // 0x700(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_1;                                 // 0x7F0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AimBone                      AimBone_2;                                         // 0x860(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_AimBone                      AimBone_3;                                         // 0x960(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Clav_L;                                            // 0xA60(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_2;                         // 0xB50(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_2;                                 // 0xBC0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_5;                         // 0xC30(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Upperarm_L;                                        // 0xCA0(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_4;                                 // 0xD90(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Clav_R;                                            // 0xE00(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_8;                         // 0xEF0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_6;                                 // 0xF60(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetInitialBoneTransform      GetInitialBoneTransform_9;                         // 0xFD0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_Control                      Upperarm_R;                                        // 0x1040(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_7;                                 // 0x1130(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mech_Veh_ControRig_Parts_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
