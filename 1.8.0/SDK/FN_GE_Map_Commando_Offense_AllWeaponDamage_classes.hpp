#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GE_Map_Commando_Offense_AllWeaponDamage.GE_Map_Commando_Offense_AllWeaponDamage_C
// 0x0000 (0x0660 - 0x0660)
class UGE_Map_Commando_Offense_AllWeaponDamage_C : public UGE_Map_Offense_To_WeaponDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Map_Commando_Offense_AllWeaponDamage.GE_Map_Commando_Offense_AllWeaponDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
