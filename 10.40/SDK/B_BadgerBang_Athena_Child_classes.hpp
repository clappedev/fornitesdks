#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x958 - 0x948)
// BlueprintGeneratedClass B_BadgerBang_Athena_Child.B_BadgerBang_Athena_Child_C
class AB_BadgerBang_Athena_Child_C : public AB_Grenade_Frag_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x948(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_BlackMondayBangs;                               // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_BadgerBang_Athena_Child_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_BadgerBang_Athena_Child(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
