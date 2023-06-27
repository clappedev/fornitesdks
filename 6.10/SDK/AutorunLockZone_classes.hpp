#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x128 (0x490 - 0x368)
// WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C
class UAutorunLockZone_C : public UFortAutorunLockZone
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_80;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Target_Opacity;                                    // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5429[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           RunLockHighlight;                                  // 0x380(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RunLockNormal;                                     // 0x408(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AutorunLockZone_C");
		return Clss;
	}

	void OnInZoneChanged(bool bNewIsInZone);
	void ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool K2Node_Event_bNewIsInZone);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
