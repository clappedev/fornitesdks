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

// BlueprintGeneratedClass TextStyle-Base-XS-EnchantedBlue.TextStyle-Base-XS-EnchantedBlue_C
// 0x0000 (0x0148 - 0x0148)
class UTextStyle_Base_XS_EnchantedBlue_C : public UTextStyle_BaseParent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle-Base-XS-EnchantedBlue.TextStyle-Base-XS-EnchantedBlue_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif