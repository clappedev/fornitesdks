#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x238 - 0x228)
// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
class UAthenaLockedStyleNotification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLockedStyleNotification_C");
		return Clss;
	}

	void SetLockedStyleDescription(class FText LockedStyleDescription);
	void Construct();
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
