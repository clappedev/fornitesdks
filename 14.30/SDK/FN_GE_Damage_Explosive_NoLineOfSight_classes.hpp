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

// BlueprintGeneratedClass GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_Damage_Explosive_NoLineOfSight_C : public UGE_Ranged_GenericDamage_Explosive_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
