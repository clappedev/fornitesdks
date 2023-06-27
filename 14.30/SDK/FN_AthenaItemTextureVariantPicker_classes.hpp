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

// WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
// 0x0000 (0x0320 - 0x0320)
class UAthenaItemTextureVariantPicker_C : public UFortVariantItemTexturePicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
