#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x61 (0x311 - 0x2B0)
// WidgetBlueprintGeneratedClass AthenaSpectatorNameplate.AthenaSpectatorNameplate_C
class UAthenaSpectatorNameplate_C : public UAthenaSpectatorNameplateBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Background;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         HealthBar;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HealthBarSB;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         ShieldBar;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ShieldBarSB;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TeamColor;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TeamNumber;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TeamSB;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              WeaponSB;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HitPointBarNearHeight;                             // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitPointBarFarHeight;                              // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaSpectatorNameplateDistanceState DesignTime_DistanceState;                          // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorNameplate_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void OnPlayerDataSet(class UAthenaRemotePlayerViewData* InPlayerData);
	void OnDistanceStateChanged(enum class EAthenaSpectatorNameplateDistanceState NewDistanceState);
	void OnTeamColorChanged(class UAthenaRemotePlayerViewData* InPlayerData, const struct FLinearColor& InTeamColor);
	void OnTeamNumberChanged(class UAthenaRemotePlayerViewData* InPlayerData, int32 InTeamNumber);
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData* InPlayerData, const class FString& InPlayerName);
	void ExecuteUbergraph_AthenaSpectatorNameplate(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool K2Node_Event_IsDesignTime, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3, enum class EAthenaSpectatorNameplateDistanceState Temp_byte_Variable3, enum class EAthenaSpectatorNameplateDistanceState K2Node_Event_NewDistanceState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2, const struct FLinearColor& K2Node_Event_InTeamColor, float K2Node_Select1_Default, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1, int32 K2Node_Event_InTeamNumber, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
