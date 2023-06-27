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

// BlueprintGeneratedClass GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C
// 0x0008 (0x0AB0 - 0x0AA8)
class UGA_Play_Swipe_Montage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C");
		
		return ptr;
	}


	void OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Play_Swipe_Montage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
