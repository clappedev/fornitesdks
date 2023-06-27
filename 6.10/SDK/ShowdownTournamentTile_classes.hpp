#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x29 (0xB61 - 0xB38)
// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
class UShowdownTournamentTile_C : public UFortShowdownTournamentTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      SizeUp;                                            // 0xB40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeFocus;                                       // 0xB48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_TileFade;                                    // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PosterSizeBox;                                     // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsFaded;                                           // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowdownTournamentTile_C");
		return Clss;
	}

	void BP_OnSelected();
	void BP_OnDeselected();
	void EventFade(bool FadeOut);
	void ExecuteUbergraph_ShowdownTournamentTile(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_497731244F041150902AECB4EEA35A02_Variable, bool Temp_bool_DD8528AA47DADD7CD4F1F9A8394724E7_Variable, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_C9F7C58F40CB70DFD634A28D65C44DA4_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable2, bool Temp_bool_D3C0983143A7668DC0A9E6AFA03439C5_Variable, bool Temp_bool_Variable2, float Temp_float_Variable3, bool K2Node_CustomEvent_fadeOut, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue3, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetEndTime_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float K2Node_Select1_Default, float CallFunc_GetStartTime_ReturnValue2, float CallFunc_GetEndTime_ReturnValue2, float CallFunc_GetStartTime_ReturnValue3, float CallFunc_GetEndTime_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue5, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue6, float K2Node_Select2_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable3, float K2Node_Select3_Default, bool CallFunc_BooleanAND_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
