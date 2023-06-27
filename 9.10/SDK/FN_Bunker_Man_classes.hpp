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

// AnimBlueprintGeneratedClass Bunker_Man.Bunker_Man
// 0x05D0 (0x0840 - 0x0270)
class UBunker_Man : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x0298(0x0018)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_DDB7BA7E4B30010F7ABC448D1E8C5269; // 0x02B0(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BED935E247CC763212C0BC94576DDCF6;// 0x0800(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A1806E1A4079DDFDC3E9618896D7452A;// 0x0820(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bunker_Man.Bunker_Man");
		return ptr;
	}


	void ExecuteUbergraph_Bunker_Man(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
