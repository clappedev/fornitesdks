#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x50 (0xB78 - 0xB28)
// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
class UBP_BannerEditorTile_C : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(Transient, DuplicateTransient)
	class UImage*                                ColorImage;                                        // 0xB30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      IconLoadGuard;                                     // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BannerEditBorder;                            // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ColorMID;                                          // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  BannerTileBangUpdated;                             // 0xB68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BannerEditorTile_C");
		return Clss;
	}

	void Mark_Item_As_Seen(bool bAlreadySeen, class UObject* CallFunc_GetListItemObject_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue);
	void Update_Bang_State(class UObject* CallFunc_GetListItemObject_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Construct();
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void BP_OnSelected();
	void BP_OnHovered();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint, class UObject* CallFunc_GetListItemObject_ReturnValue, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_GetListItemObject_ReturnValue1, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item1, bool K2Node_DynamicCast_bSuccess2, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAsset_ReturnValue, class UObject* K2Node_CustomEvent_Object, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess3, class UObject* CallFunc_GetListItemObject_ReturnValue2, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item1, bool K2Node_DynamicCast_bSuccess4, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Event_ListItemObject);
	void BannerTileBangUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
