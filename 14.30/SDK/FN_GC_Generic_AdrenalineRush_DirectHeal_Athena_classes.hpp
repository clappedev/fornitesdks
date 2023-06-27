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

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Athena.GC_Generic_AdrenalineRush_DirectHeal_Athena_C
// 0x0000 (0x01B8 - 0x01B8)
class UGC_Generic_AdrenalineRush_DirectHeal_Athena_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Athena.GC_Generic_AdrenalineRush_DirectHeal_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
