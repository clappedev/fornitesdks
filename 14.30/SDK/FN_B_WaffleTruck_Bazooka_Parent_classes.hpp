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

// BlueprintGeneratedClass B_WaffleTruck_Bazooka_Parent.B_WaffleTruck_Bazooka_Parent_C
// 0x0000 (0x1320 - 0x1320)
class AB_WaffleTruck_Bazooka_Parent_C : public AB_RocketLauncher_Generic_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_WaffleTruck_Bazooka_Parent.B_WaffleTruck_Bazooka_Parent_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
