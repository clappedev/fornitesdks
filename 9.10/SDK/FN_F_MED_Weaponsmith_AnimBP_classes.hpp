#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C
// 0x2598 (0x2968 - 0x03D0)
class UF_MED_Weaponsmith_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x03D8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x03F8(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68;// 0x0530(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0970(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0990(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x09B0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0DF0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42;// 0x1230(0x0440)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x1670(0x0550)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                 // 0x1BC0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1CC8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x1DD0(0x0108)
	struct FFortAnimNode_Flap                          FortAnimGraphNode_Flap;                                   // 0x1ED8(0x00F8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics03;                             // 0x1FD0(0x0440)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint02;                               // 0x2410(0x0108)
	unsigned char                                      UnknownData00[0x8];                                       // 0x2518(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A;// 0x2520(0x0440)
	float                                              crouch_float;                                             // 0x2960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              dyn_alpha;                                                // 0x2964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_Weaponsmith_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
