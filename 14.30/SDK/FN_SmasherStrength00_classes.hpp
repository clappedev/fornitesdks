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

// BlueprintGeneratedClass SmasherStrength00.SmasherStrength00_C
// 0x0000 (0x0068 - 0x0068)
class USmasherStrength00_C : public UFortNavAreaAutomatic
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SmasherStrength00.SmasherStrength00_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
