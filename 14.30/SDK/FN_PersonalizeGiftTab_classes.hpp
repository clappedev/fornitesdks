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

// WidgetBlueprintGeneratedClass PersonalizeGiftTab.PersonalizeGiftTab_C
// 0x0008 (0x0370 - 0x0368)
class UPersonalizeGiftTab_C : public UFortPersonalizeGiftTab
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PersonalizeGiftTab.PersonalizeGiftTab_C");
		
		return ptr;
	}


	void BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_PersonalizeGiftTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
