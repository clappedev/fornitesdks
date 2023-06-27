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

// WidgetBlueprintGeneratedClass AthenaVariantCustomizationSelector.AthenaVariantCustomizationSelector_C
// 0x0000 (0x0428 - 0x0428)
class UAthenaVariantCustomizationSelector_C : public UFortVariantPicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVariantCustomizationSelector.AthenaVariantCustomizationSelector_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
