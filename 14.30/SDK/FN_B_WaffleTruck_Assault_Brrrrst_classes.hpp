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

// BlueprintGeneratedClass B_WaffleTruck_Assault_Brrrrst.B_WaffleTruck_Assault_Brrrrst_C
// 0x0000 (0x1310 - 0x1310)
class AB_WaffleTruck_Assault_Brrrrst_C : public AB_WaffleTruck_Assault_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_WaffleTruck_Assault_Brrrrst.B_WaffleTruck_Assault_Brrrrst_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
