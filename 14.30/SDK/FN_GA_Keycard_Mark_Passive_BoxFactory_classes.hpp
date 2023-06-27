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

// BlueprintGeneratedClass GA_Keycard_Mark_Passive_BoxFactory.GA_Keycard_Mark_Passive_BoxFactory_C
// 0x0000 (0x0ADC - 0x0ADC)
class UGA_Keycard_Mark_Passive_BoxFactory_C : public UGA_Keycard_Mark_Passive_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Keycard_Mark_Passive_BoxFactory.GA_Keycard_Mark_Passive_BoxFactory_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
