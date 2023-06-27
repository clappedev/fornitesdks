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

// BlueprintGeneratedClass Border-HeroLoadoutWarningStyle.Border-HeroLoadoutWarningStyle_C
// 0x0000 (0x00B0 - 0x00B0)
class UBorder_HeroLoadoutWarningStyle_C : public UCommonBorderStyle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Border-HeroLoadoutWarningStyle.Border-HeroLoadoutWarningStyle_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
