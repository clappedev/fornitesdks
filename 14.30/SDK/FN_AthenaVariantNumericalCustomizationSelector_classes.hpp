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

// WidgetBlueprintGeneratedClass AthenaVariantNumericalCustomizationSelector.AthenaVariantNumericalCustomizationSelector_C
// 0x0000 (0x0348 - 0x0348)
class UAthenaVariantNumericalCustomizationSelector_C : public UFortVariantNumericalPicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVariantNumericalCustomizationSelector.AthenaVariantNumericalCustomizationSelector_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
