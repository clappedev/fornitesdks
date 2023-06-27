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

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0000 (0x0B00 - 0x0B00)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
