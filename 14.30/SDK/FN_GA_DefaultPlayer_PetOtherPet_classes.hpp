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

// BlueprintGeneratedClass GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
// 0x0008 (0x0AB0 - 0x0AA8)
class UGA_DefaultPlayer_PetOtherPet_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C");
		
		return ptr;
	}


	void OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
