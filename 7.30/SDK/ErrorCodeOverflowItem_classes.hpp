#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x230 - 0x228)
// WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C
class UErrorCodeOverflowItem_C : public UUserWidget
{
public:
	class UTextBlock*                            TextBlock_332;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorCodeOverflowItem_C");
		return Clss;
	}

	void SetErrorCodeDisplay(const class FString& ErrorCode, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
