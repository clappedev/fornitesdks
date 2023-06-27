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

// WidgetBlueprintGeneratedClass ControllerActionsMenuEntry.ControllerActionsMenuEntry_C
// 0x0000 (0x0BA8 - 0x0BA8)
class UControllerActionsMenuEntry_C : public UFortControllerActionsMenuEntry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerActionsMenuEntry.ControllerActionsMenuEntry_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
