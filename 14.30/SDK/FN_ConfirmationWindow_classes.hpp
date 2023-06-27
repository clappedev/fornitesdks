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

// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// 0x0028 (0x0638 - 0x0610)
class UConfirmationWindow_C : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCloseButton_C*                              CloseButton;                                              // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               TapToCloseZone;                                           // 0x0620(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                ButtonIconColor;                                          // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C");
		
		return ptr;
	}


	void HandleConfigureDeclineButton(class UCommonButton* New_Button);
	void ConfigureConfirmationButton(class UCommonButton* Button, const struct FConfirmationDialogAction& Action, bool bSimpleConfirm);
	void PlayShowSound();
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetupNonInteractiveContent();
	struct FDataTableRowHandle GetInputAction(const struct FName& RowName, bool UseInputAction);
	void Initialize();
	void OnBeginOutro();
	void ConfigureDeclineButton(class UCommonButton* Button);
	void BP_OnActivated();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ConfirmationWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
