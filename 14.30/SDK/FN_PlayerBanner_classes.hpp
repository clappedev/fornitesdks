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

// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
// 0x0080 (0x0340 - 0x02C0)
class UPlayerBanner_C : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BannerImage;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                            LoadGuard;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SurroundImage;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                            SurroundLoadGuard;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bUseLargeTexture;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwnerNetId;                                               // 0x02F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CurrentBannerColorId;                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldUseIconRepresentation;                             // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	struct FName                                       CurrentBannerIconId;                                      // 0x0324(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SurroundEnabled;                                          // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	TArray<class UMaterialInstanceConstant*>           BannerSurroundMats;                                       // 0x0330(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C");
		
		return ptr;
	}


	void UnbindDelegates();
	void SetupSurround();
	void SetBannerIconAndColorFromProfile();
	void SetBannerIconAndColor(const struct FName& IconId, const struct FName& ColorId);
	void ToggleBannerMask(bool Enable);
	void RefreshSurround(int Level);
	void OnSurroundIconLoaded(class UObject* LoadedObject);
	void EnableSurround();
	void ClearBannerState();
	void OnBannerIconLoaded(class UObject* LoadedObject);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId);
	void SetBannerColorId(const struct FName& InBannerColorId);
	void SetBannerIconId(const struct FName& InBannerIconId);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success);
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void Destruct();
	void ExecuteUbergraph_PlayerBanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
