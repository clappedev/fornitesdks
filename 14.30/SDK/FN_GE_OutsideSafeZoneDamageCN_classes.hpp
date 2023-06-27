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

// BlueprintGeneratedClass GE_OutsideSafeZoneDamageCN.GE_OutsideSafeZoneDamageCN_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_OutsideSafeZoneDamageCN_C : public UGET_PeriodicEnergyDamage_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_OutsideSafeZoneDamageCN.GE_OutsideSafeZoneDamageCN_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
