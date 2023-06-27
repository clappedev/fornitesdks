#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C
// 0x0008 (0x0AB0 - 0x0AA8)
class UGA_AppleSun_DestroyOverlappingObjects_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C");
		
		return ptr;
	}


	struct FTransform GetCustomAbilitySourceTransform();
	void Cancelled_96BA3C644E573EAE0D8760B88ABB3969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_96BA3C644E573EAE0D8760B88ABB3969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
