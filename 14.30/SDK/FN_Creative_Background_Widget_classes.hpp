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

// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
// 0x0010 (0x0270 - 0x0260)
class UCreative_Background_Widget_C : public UUserWidget
{
public:
	class UBorder*                                     Border_1;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  UserText;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C");
		
		return ptr;
	}


	void SetShadow(TEnumAsByte<EBillboardshadowDirection> Shadow, float ShadowScale);
	void SetTextFont(int TextFont, int OutlineStrength);
	void SetTextColor(const struct FLinearColor& TextColor);
	void SetTextAlignment(TEnumAsByte<ETextJustify> Alignment);
	void SetTextScale(int FontSize);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(const struct FString& Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
