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

// BlueprintGeneratedClass ButtonStyle-BottomBar-Console.ButtonStyle-BottomBar-Console_C
// 0x0000 (0x0570 - 0x0570)
class UButtonStyle_BottomBar_Console_C : public UButtonStyle_MediumBase_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle-BottomBar-Console.ButtonStyle-BottomBar-Console_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
