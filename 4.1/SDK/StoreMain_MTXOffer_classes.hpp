#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xA0 (0x948 - 0x8A8)
// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
class UStoreMain_MTXOffer_C : public UFortMtxStoreOfferBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x8B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Embiggen;                                          // 0x8B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HighlightGlow_Founders;                            // 0x8C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HighlightGlow_VBuck;                               // 0x8C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      GradientFade;                                      // 0x8D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColor;                                         // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BonusCurrencySB;                                   // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderAll;                                         // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyArt;                                            // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpotHighlight;                                     // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferName;                                     // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0x930(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  AboutToShowDetails;                                // 0x938(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_MTXOffer_C");
		return Clss;
	}

	void TriggerReset();
	void InitialReset();
	void TriggerIntro();
	void ShowDetails(bool CallFunc_IsBROnly_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UStoreMain_OfferDetails_C* CallFunc_Create_ReturnValue);
	void InitOffer(class FText SalePrice, bool bIsOnSale, class FText LocalSalePrice, class FText BonusMTX, class FText BaseMtx, class UMaterial* OfferMaterial, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, int32 CallFunc_GetBonusQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable1, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FSlateBrush& CallFunc_GetTileImage_ReturnValue, class FText CallFunc_GetName_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_GetNormalPrice_ReturnValue1, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText K2Node_Select1_Default);
	void Construct();
	void OnClick(class UCommonButton* Button);
	void OnHovered();
	void OnUnhovered();
	void ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1);
	void AboutToShowDetails__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
