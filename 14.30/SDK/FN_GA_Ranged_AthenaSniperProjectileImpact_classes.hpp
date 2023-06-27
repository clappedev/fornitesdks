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

// BlueprintGeneratedClass GA_Ranged_AthenaSniperProjectileImpact.GA_Ranged_AthenaSniperProjectileImpact_C
// 0x0000 (0x0AE9 - 0x0AE9)
class UGA_Ranged_AthenaSniperProjectileImpact_C : public UGA_Ranged_GenericProjectileImpact_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_AthenaSniperProjectileImpact.GA_Ranged_AthenaSniperProjectileImpact_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
