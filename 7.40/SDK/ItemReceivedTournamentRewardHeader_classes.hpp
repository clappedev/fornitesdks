#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x16 (0x278 - 0x262)
// WidgetBlueprintGeneratedClass ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C
class UItemReceivedTournamentRewardHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	uint8                                        Pad_54AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventRewardGiftboxHeader_C*           EventRewardGiftboxHeader;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedTournamentRewardHeader_C");
		return Clss;
	}

	void InitFromGiftBoxItem_BP();
	void OnInitialized();
	void ExecuteUbergraph_ItemReceivedTournamentRewardHeader(int32 EntryPoint, const class FString& CallFunc_TryGetParamString_OutValue, bool CallFunc_TryGetParamString_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
