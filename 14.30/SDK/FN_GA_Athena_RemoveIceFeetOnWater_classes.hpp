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

// BlueprintGeneratedClass GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C
// 0x0008 (0x0AB0 - 0x0AA8)
class UGA_Athena_RemoveIceFeetOnWater_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C");
		
		return ptr;
	}


	void Added_ABAD1DEE46A337533ED461815C2B7BED();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
