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

// BlueprintGeneratedClass B_Galileo_Weapon.B_Galileo_Weapon_C
// 0x0000 (0x0CC1 - 0x0CC1)
class AB_Galileo_Weapon_C : public AB_UtilityItem_Generic_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Galileo_Weapon.B_Galileo_Weapon_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
