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

// WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C
// 0x1271 (0x19D1 - 0x0760)
class ULegacyRatingWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     Border_Base;                                              // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBox;                                            // 0x0770(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortNumericTextBlock*                       NumericText_RatingValue;                                  // 0x0778(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox;                                                  // 0x0780(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                RatingValue;                                              // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0790(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InterpDuration;                                           // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07BC(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Silhouette;                                        // 0x07C0(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Chamfer;                                           // 0x0A90(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Shadow;                                            // 0x0D60(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         MBrush_Icon;                                              // 0x1030(0x02D0) (Edit, BlueprintVisible)
	bool                                               OverrideDefaultColor;                                     // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1301(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Light;                                              // 0x1304(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Medium;                                             // 0x1314(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Dark;                                               // 0x1324(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Light;                                      // 0x1334(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Medium;                                     // 0x1344(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Color_Dark;                                       // 0x1354(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1364(0x0004) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Icon_Alt;                                          // 0x1368(0x02D0) (Edit, BlueprintVisible)
	bool                                               UseAlternateIcon;                                         // 0x1638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1639(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         MBrush_Shadow_Alt;                                        // 0x1640(0x02D0) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin_Alt;                                              // 0x1910(0x0060) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MMargin;                                                  // 0x1970(0x0060) (Edit, BlueprintVisible)
	bool                                               ShowTeamPowerRating;                                      // 0x19D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegacyRatingWidget.LegacyRatingWidget_C");
		return ptr;
	}


	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, const struct FFortMultiSizeBrush& MBrush);
	void Update_Base_Material();
	void Update_From_Unique_ID();
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Set_Padding();
	void Set_Size_Box();
	void Update_Rating_Value(int Rating);
	void PreConstruct(bool* IsDesignTime);
	void PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_LegacyRatingWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
