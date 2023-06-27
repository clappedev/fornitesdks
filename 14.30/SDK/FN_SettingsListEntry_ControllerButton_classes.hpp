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

// WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
// 0x0010 (0x0300 - 0x02F0)
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                        CommonRichTextBlock_98;                                   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C");
		
		return ptr;
	}


	void OnSettingAssigned(const struct FText& ActionText);
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
