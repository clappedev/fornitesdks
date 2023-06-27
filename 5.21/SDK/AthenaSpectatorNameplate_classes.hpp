#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x62 (0x2FA - 0x298)
// WidgetBlueprintGeneratedClass AthenaSpectatorNameplate.AthenaSpectatorNameplate_C
class UAthenaSpectatorNameplate_C : public UAthenaSpectatorNameplateBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Background;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         HealthBar;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HealthBarSB;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         ShieldBar;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ShieldBarSB;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TeamColor;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TeamNumber;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TeamSB;                                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              WeaponSB;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HitPointBarNearHeight;                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitPointBarFarHeight;                              // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaSpectatorNameplateState    NameplateState;                                    // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaSpectatorNameplateState    CurrentState;                                      // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorNameplate_C");
		return Clss;
	}

	void UpdateVisibility(enum class EAthenaSpectatorNameplateState NameplateState, const class FString& Name, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class EAthenaSpectatorNameplateState Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable, float K2Node_Select1_Default);
	void PlayerNameChanged(class AFortPlayerStateAthena* InPlayerState, const class FString& InPlayerName);
	void SetTeamColor(const struct FLinearColor& TeamColor);
	void SetTeamNumber(int32 TeamNumber);
	void PlayerStateChanged();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateStateFromDistance(float DistanceToCamera);
	void ExecuteUbergraph_AthenaSpectatorNameplate(int32 EntryPoint, bool Temp_bool_Variable, enum class EAthenaSpectatorNameplateState Temp_byte_Variable, enum class EAthenaSpectatorNameplateState Temp_byte_Variable1, class AFortPlayerStateAthena* K2Node_Event_InPlayerState, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& K2Node_Event_TeamColor, enum class EAthenaSpectatorNameplateState Temp_byte_Variable2, int32 K2Node_Event_TeamNumber, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable1, float K2Node_Event_DistanceToCamera, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, enum class EAthenaSpectatorNameplateState K2Node_Select_Default, enum class EAthenaSpectatorNameplateState K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
