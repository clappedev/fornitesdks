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

// BlueprintGeneratedClass Trap_Wall_FrostedTips.Trap_Wall_FrostedTips_C
// 0x0000 (0x0EB8 - 0x0EB8)
class ATrap_Wall_FrostedTips_C : public ATrap_Floor_FrostedTips_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Wall_FrostedTips.Trap_Wall_FrostedTips_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
