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

// Class HighTowerUI.HighTowerAbilityContainerWidget
// 0x0008 (0x0320 - 0x0318)
class UHighTowerAbilityContainerWidget : public ULTMWidgetBase
{
public:
	struct FGameplayTag                                ShowAbilityIntroTag;                                      // 0x0318(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HighTowerUI.HighTowerAbilityContainerWidget");
		
		return ptr;
	}


	void ShowAbilityIntro();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
