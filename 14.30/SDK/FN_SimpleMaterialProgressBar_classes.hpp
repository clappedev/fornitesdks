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

// WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
// 0x0000 (0x0338 - 0x0338)
class USimpleMaterialProgressBar_C : public UFortSimpleMaterialProgressBar
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
