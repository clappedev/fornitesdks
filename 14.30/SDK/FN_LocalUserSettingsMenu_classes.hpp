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

// WidgetBlueprintGeneratedClass LocalUserSettingsMenu.LocalUserSettingsMenu_C
// 0x0000 (0x0348 - 0x0348)
class ULocalUserSettingsMenu_C : public UFortLocalUserSettingsMenu
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalUserSettingsMenu.LocalUserSettingsMenu_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
