#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0x2A0 - 0x278)
// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C
class UAthenaSpectatorScoreboard_C : public UAthenaSpectatorScoreboardScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UAthenaSpectatorScoreboardHeaderRowWidget_C* AthenaSpectatorScoreboardHeaderRowWidget;          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorScoreboardListView_C*  AthenaSpectatorScoreboardListView;                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageFollowPlayer;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePlayerProfile;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorScoreboard_C");
		return Clss;
	}

	void SetConsoleInputImages(const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable1, enum class ECommonGamepadType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable12, const struct FSlateBrush& Temp_struct_Variable123, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush12, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush123, const struct FSlateBrush& K2Node_Select1_Default);
	void UpdateListUI();
	void ResetFocus();
	void Construct();
	void ExecuteUbergraph_AthenaSpectatorScoreboard(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
