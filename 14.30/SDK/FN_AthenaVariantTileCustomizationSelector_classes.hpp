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

// WidgetBlueprintGeneratedClass AthenaVariantTileCustomizationSelector.AthenaVariantTileCustomizationSelector_C
// 0x0000 (0x0328 - 0x0328)
class UAthenaVariantTileCustomizationSelector_C : public UFortVariantSelector
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVariantTileCustomizationSelector.AthenaVariantTileCustomizationSelector_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
