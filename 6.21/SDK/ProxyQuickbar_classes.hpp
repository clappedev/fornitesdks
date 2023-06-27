#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0x3B8 - 0x370)
// WidgetBlueprintGeneratedClass ProxyQuickbar.ProxyQuickbar_C
class UProxyQuickbar_C : public UHUDLayoutToolProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot_0;                               // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot_1;                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot_2;                               // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot_3;                               // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProxyQuickbarSlot_C*                  ProxyQuickbarSlot_4;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ResizeBox;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Slot_Height;                                       // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Default_Slot_Height;                               // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyQuickbar_C");
		return Clss;
	}

	int32 BP_GetNumOfProperties();
	enum class ELayoutPropertyType BP_GetPropertyType(int32 PropertyIndex, int32 Temp_int_Variable, enum class ELayoutPropertyType Temp_byte_Variable, enum class ELayoutPropertyType Temp_byte_Variable1, enum class ELayoutPropertyType K2Node_Select_Default);
	class FText BP_GetPropertyName(int32 PropertyIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default);
	float BP_GetPropertyValue(int32 PropertyIndex, bool K2Node_SwitchInteger_CmpSuccess);
	void BP_GetPropertyRange(int32 PropertyIndex, float* OutMin, float* OutMax, bool K2Node_SwitchInteger_CmpSuccess);
	void SetQuickbarHeight(float NewHeight, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BP_SetPropertyValue(int32 PropertyIndex, float NewValue);
	void ExecuteUbergraph_ProxyQuickbar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_PropertyIndex, float K2Node_Event_NewValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
