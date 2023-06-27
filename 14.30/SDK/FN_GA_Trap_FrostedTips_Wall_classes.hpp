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

// BlueprintGeneratedClass GA_Trap_FrostedTips_Wall.GA_Trap_FrostedTips_Wall_C
// 0x0000 (0x0C58 - 0x0C58)
class UGA_Trap_FrostedTips_Wall_C : public UGA_Trap_FrostedTips_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FrostedTips_Wall.GA_Trap_FrostedTips_Wall_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
