#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8E (0x2F0 - 0x262)
// WidgetBlueprintGeneratedClass ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C
class UItemReceivedEpicMakeGoodHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	uint8                                        Pad_5483[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      AssetString;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Sender;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UserMessage;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Text;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             AssetStrings;                                      // 0x2A0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedEpicMakeGoodHeader_C");
		return Clss;
	}

	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasParam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_FormatTextUsingParams_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
