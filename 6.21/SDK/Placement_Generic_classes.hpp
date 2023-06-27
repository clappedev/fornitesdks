#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x3C8 - 0x3C0)
// WidgetBlueprintGeneratedClass Placement_Generic.Placement_Generic_C
class UPlacement_Generic_C : public UHUDLayoutToolPlacementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Placement_Generic_C");
		return Clss;
	}

	void OnInsideGridStateChange(bool bInsideGrid);
	void ExecuteUbergraph_Placement_Generic(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool K2Node_Event_bInsideGrid, const struct FLinearColor& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
