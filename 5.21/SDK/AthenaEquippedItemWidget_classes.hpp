#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x68 (0x3D0 - 0x368)
// WidgetBlueprintGeneratedClass AthenaEquippedItemWidget.AthenaEquippedItemWidget_C
class UAthenaEquippedItemWidget_C : public UAthenaEquippedItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(Transient, DuplicateTransient)
	class UImage*                                AmmoIcon;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MagazineAmmoCount;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutOfAmmo;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ResourceCount;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ResourceIcon;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Split1;                                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StandAloneAmmoCount;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SurplusAmmoCount;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherContent;                                   // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UtilityItemImage;                                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          OutOfAmmoColor;                                    // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEquippedItemWidget_C");
		return Clss;
	}

	void GetRemainingAmmoText(int32 RemainingAmmoCount, class FText* CurrentAmmoText, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
	void UpdateWidgetColor(bool HasAmmo, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void ResourceCountChanged(int32 ResourceCount);
	void AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item);
	void ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount);
	void WeaponTypeChanged(enum class EEquippedWeaponDisplay Mode);
	void HasAmmoChanged(bool bHasAmmo);
	void AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining);
	void UtilityItemCountChanged(int32 Remaining);
	void UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item);
	void Construct();
	void ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable1, float Temp_float_Variable2, enum class EEquippedWeaponDisplay Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, float Temp_float_Variable3, int32 K2Node_Event_ResourceCount1, class FText CallFunc_Conv_IntToText_ReturnValue, class AFortWeaponRanged* K2Node_Event_RangedWeapon, class UFortWorldItemDefinition* K2Node_Event_Item2, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortResourceItemDefinition* K2Node_Event_Item1, int32 K2Node_Event_ResourceCount, class FText CallFunc_Conv_IntToText_ReturnValue1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue1, enum class EEquippedWeaponDisplay K2Node_Event_Mode, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bHasAmmo, int32 K2Node_Event_MagazineAmmoCount, int32 K2Node_Event_BackupAmmoCount, int32 K2Node_Event_TotalRemaining, class FText CallFunc_GetRemainingAmmoText_CurrentAmmoText, bool CallFunc_Greater_IntInt_ReturnValue1, class FText CallFunc_GetCurrentAmmoText_CurrentAmmoText, float K2Node_Select1_Default, bool CallFunc_Greater_IntInt_ReturnValue2, int32 K2Node_Event_Remaining, class FText CallFunc_Conv_IntToText_ReturnValue2, class AFortWeapon* K2Node_Event_Weapon, class UFortWeaponItemDefinition* K2Node_Event_Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue2, bool Temp_bool_Variable1, float K2Node_Select2_Default, const struct FVector2D& CallFunc_Get_Standard_Icon_Size_Icon_Size);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
