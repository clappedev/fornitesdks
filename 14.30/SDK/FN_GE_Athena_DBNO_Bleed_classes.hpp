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

// BlueprintGeneratedClass GE_Athena_DBNO_Bleed.GE_Athena_DBNO_Bleed_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_Athena_DBNO_Bleed_C : public UGET_PeriodicEnergyDamage_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Athena_DBNO_Bleed.GE_Athena_DBNO_Bleed_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
