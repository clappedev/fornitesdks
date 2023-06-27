#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x178 (0x4F0 - 0x378)
// WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C
class UAutorunLockZone_C : public UFortAutorunLockZone
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Target_Opacity;                                    // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           RunLockHighlight;                                  // 0x390(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RunLockNormal;                                     // 0x418(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NormalColor;                                       // 0x4A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HighlightColor;                                    // 0x4C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutorunLockZone_C");
		return Clss;
	}

	void OnInZoneChanged(bool bNewIsInZone);
	void ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bNewIsInZone, const struct FSlateColor& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
