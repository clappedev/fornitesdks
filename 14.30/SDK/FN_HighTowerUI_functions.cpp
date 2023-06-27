// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HighTowerUI.HighTowerAbilityContainerWidget.ShowAbilityIntro
// (Event, Protected, BlueprintEvent)

void UHighTowerAbilityContainerWidget::ShowAbilityIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HighTowerUI.HighTowerAbilityContainerWidget.ShowAbilityIntro");

	UHighTowerAbilityContainerWidget_ShowAbilityIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
