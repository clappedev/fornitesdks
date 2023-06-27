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

// BlueprintGeneratedClass GA_Slurpshroom_ShieldHealth.GA_Slurpshroom_ShieldHealth_C
// 0x0000 (0x0AF8 - 0x0AF8)
class UGA_Slurpshroom_ShieldHealth_C : public UGA_Coconut_ShieldHealth_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Slurpshroom_ShieldHealth.GA_Slurpshroom_ShieldHealth_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
