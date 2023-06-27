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

// BlueprintGeneratedClass QuickHealItemPickerBP.QuickHealItemPickerBP_C
// 0x0000 (0x0080 - 0x0080)
class UQuickHealItemPickerBP_C : public UQuickHealItemPicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass QuickHealItemPickerBP.QuickHealItemPickerBP_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
