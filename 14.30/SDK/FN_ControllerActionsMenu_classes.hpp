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

// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
// 0x0008 (0x0470 - 0x0468)
class UControllerActionsMenu_C : public UFortControllerActionsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C");
		
		return ptr;
	}


	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
