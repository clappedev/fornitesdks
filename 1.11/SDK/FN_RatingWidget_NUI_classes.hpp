#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RatingWidget_NUI.RatingWidget_NUI_C
// 0x1273 (0x1483 - 0x0210)
class URatingWidget_NUI_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                     CommonNumericTextRatingValue;                             // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                RatingValue;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0240(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InterpDuration;                                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Silhouette;                                        // 0x0270(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Chamfer;                                           // 0x0540(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Shadow;                                            // 0x0810(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Icon;                                              // 0x0AE0(0x02D0) (Edit, BlueprintVisible)
	bool                                               OverrideDefaultColor;                                     // 0x0DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0DB1(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Light;                                              // 0x0DB4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Medium;                                             // 0x0DC4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Dark;                                               // 0x0DD4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Light;                                      // 0x0DE4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Medium;                                     // 0x0DF4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Dark;                                       // 0x0E04(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Icon_Alt;                                          // 0x0E18(0x02D0) (Edit, BlueprintVisible)
	bool                                               UseAlternateIcon;                                         // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x10E9(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Shadow_Alt;                                        // 0x10F0(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin_Alt;                                              // 0x13C0(0x0060) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin;                                                  // 0x1420(0x0060) (Edit, BlueprintVisible)
	bool                                               ShowTeamPowerRating;                                      // 0x1480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // 0x1481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRatingValuesFromPlayer;                               // 0x1482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RatingWidget_NUI.RatingWidget_NUI_C");
		return ptr;
	}


	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush);
	void Update_From_Unique_ID();
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Update_Rating_Value(int Rating);
	void PreConstruct(bool* IsDesignTime);
	void PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_RatingWidget_NUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
