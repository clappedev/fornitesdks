#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C
class UAthenaSpectatorScoreboardListView_C : public UCommonUserWidget
{
public:
	class UCommonListView*                       List;                                              // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorScoreboardListView_C");
		return Clss;
	}

	void ResetFocus(class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
