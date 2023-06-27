#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OutpostScreenStormShield.OutpostScreenStormShield_C
// 0x0040 (0x0420 - 0x03E0)
class UOutpostScreenStormShield_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UHorizontalTabList_C*                        ContentOrPermissionsTab;                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       ShieldToContentSwitcher;                                  // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortOutpostBuilding*                        OutpostCoreBuilding;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    CloseOutpostScreen;                                       // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UOutpostScreenStormShieldContent_C*          StormShieldWidgetReference;                               // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOutpostScreenStormShieldPermissions_C*      PermissionsWidgetReference;                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OutpostScreenStormShield.OutpostScreenStormShield_C");
		return ptr;
	}


	void CenterPermissionsWidget();
	void CenterStormShieldWidget();
	void HandleBack(bool* PassThrough);
	void AddInputHandlers();
	void SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding);
	void Construct();
	void BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(const struct FName& TabId);
	void BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void ExecuteUbergraph_OutpostScreenStormShield(int EntryPoint);
	void CloseOutpostScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
