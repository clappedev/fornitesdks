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

// AnimBlueprintGeneratedClass M_SML_Lars.M_SML_Lars_Body_Skeleton_AnimBlueprint_C
// 0x1C40 (0x2010 - 0x03D0)
class UM_SML_Lars_Body_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ABBE7B9049051BD35FC06396913867D3;// 0x03E0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x0820(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics02;                             // 0x0C60(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F22264944E0128E1663A8D955C57F1C0;// 0x10A0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B94146E6410326AE160256996285439C;// 0x10C0(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10E0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A0D3A35D4FDDEF364F7C0CB2BC636E9D;// 0x1100(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FB6CDDC24FAA9996085270BB888E9329;// 0x1540(0x0440)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                           // 0x1980(0x0138)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1AB8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x1AC0(0x0550)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_SML_Lars.M_SML_Lars_Body_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_M_SML_Lars_Body_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
