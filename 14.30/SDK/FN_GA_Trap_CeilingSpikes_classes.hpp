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

// BlueprintGeneratedClass GA_Trap_CeilingSpikes.GA_Trap_CeilingSpikes_C
// 0x0000 (0x0AD8 - 0x0AD8)
class UGA_Trap_CeilingSpikes_C : public UGA_TrapGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_CeilingSpikes.GA_Trap_CeilingSpikes_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
