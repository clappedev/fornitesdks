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

// WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C
// 0x0058 (0x0288 - 0x0230)
class UOptionsMenuRowSelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            RowSelectorText;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              SelectorButtonsBox;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Selector_Button_Selected;                                 // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FText>                               Hover_Texts;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCommonButtonGroup*                          Selector_Buttons;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Common_Button_Group_Type;                                 // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip_Text;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ButtonStyle;                                              // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C");
		return ptr;
	}


	void Button_Hovered(class UCommonButton* Button_Hovered);
	void Deselect_All_Rows();
	void Update_Row_Selector(int Tab_Number);
	void Initialize_Row_Selector(const struct FText& Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts);
	void Construct();
	void OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void Destruct();
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint);
	void Selector_Button_Selected__DelegateSignature(int Tab_Id);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
