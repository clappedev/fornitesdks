#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// 0x0008 (0x0C40 - 0x0C38)
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
		return ptr;
	}


	void PickDeathMontageSection();
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
