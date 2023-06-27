#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
// 0x0018 (0x0310 - 0x02F8)
class UFortCosmeticItemCard_C : public UFortCosmeticItemCard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Anim_Hover;                                               // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    ImageMaterial_NewItemCard;                                // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C");
		
		return ptr;
	}


	void HandleUpdateRarity(const struct FFortColorPalette& RarityColors);
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem);
	void UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem);
	void OnUpdateEnhanced(bool bEnhanced);
	void OnUpdateItemCardMaterial(class UMaterialInterface* Material);
	void OnUpdateItemCardIcon(class UTexture2D* Icon);
	void OnUpdateSeriesOrRarityColors(const struct FFortColorPalette& ColorPalette);
	void OnSizeChanged(float InCardWidth);
	void OnHover();
	void OnUnhover();
	void ExecuteUbergraph_FortCosmeticItemCard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
