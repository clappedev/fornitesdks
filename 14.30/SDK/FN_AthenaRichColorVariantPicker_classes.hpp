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

// WidgetBlueprintGeneratedClass AthenaRichColorVariantPicker.AthenaRichColorVariantPicker_C
// 0x0000 (0x0330 - 0x0330)
class UAthenaRichColorVariantPicker_C : public UFortVariantRichColorPicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaRichColorVariantPicker.AthenaRichColorVariantPicker_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
