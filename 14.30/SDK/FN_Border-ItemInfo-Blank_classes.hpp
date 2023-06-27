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

// BlueprintGeneratedClass Border-ItemInfo-Blank.Border-ItemInfo-Blank_C
// 0x0000 (0x00B0 - 0x00B0)
class UBorder_ItemInfo_Blank_C : public UBorder_ItemInfo_Unlocked_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Border-ItemInfo-Blank.Border-ItemInfo-Blank_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
