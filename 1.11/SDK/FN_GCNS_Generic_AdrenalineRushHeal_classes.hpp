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

// BlueprintGeneratedClass GCNS_Generic_AdrenalineRushHeal.GCNS_Generic_AdrenalineRushHeal_C
// 0x0000 (0x00B0 - 0x00B0)
class UGCNS_Generic_AdrenalineRushHeal_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_Generic_AdrenalineRushHeal.GCNS_Generic_AdrenalineRushHeal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
