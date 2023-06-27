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

// WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C
// 0x0000 (0x0260 - 0x0260)
class UArrowCursorWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C");
		
		return ptr;
	}


	struct FSlateBrush GetBackground_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
