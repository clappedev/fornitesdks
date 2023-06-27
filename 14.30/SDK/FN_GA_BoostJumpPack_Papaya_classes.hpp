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

// BlueprintGeneratedClass GA_BoostJumpPack_Papaya.GA_BoostJumpPack_Papaya_C
// 0x0000 (0x0C48 - 0x0C48)
class UGA_BoostJumpPack_Papaya_C : public UGA_BoostJumpPack_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_BoostJumpPack_Papaya.GA_BoostJumpPack_Papaya_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
