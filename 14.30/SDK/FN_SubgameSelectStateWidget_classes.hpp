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

// WidgetBlueprintGeneratedClass SubgameSelectStateWidget.SubgameSelectStateWidget_C
// 0x0000 (0x0328 - 0x0328)
class USubgameSelectStateWidget_C : public UStartUpUIStateWidget_SubgameSelect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SubgameSelectStateWidget.SubgameSelectStateWidget_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
