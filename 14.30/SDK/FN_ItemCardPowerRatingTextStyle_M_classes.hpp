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

// BlueprintGeneratedClass ItemCardPowerRatingTextStyle_M.ItemCardPowerRatingTextStyle_M_C
// 0x0000 (0x0148 - 0x0148)
class UItemCardPowerRatingTextStyle_M_C : public UCommonTextStyle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ItemCardPowerRatingTextStyle_M.ItemCardPowerRatingTextStyle_M_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif