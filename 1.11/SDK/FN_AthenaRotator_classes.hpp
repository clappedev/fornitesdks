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

// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
// 0x0039 (0x0839 - 0x0800)
class UAthenaRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               MainBorder;                                               // 0x0808(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Left_Triggering_Input_Action;                             // 0x0810(0x0010) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         Right_Triggering_Input_Action;                            // 0x0820(0x0010) (Edit, BlueprintVisible)
	class UClass*                                      TextStyle;                                                // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowGamepadButtonOnlyWhenFocused;                         // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C");
		return ptr;
	}


	void NewFunction_1();
	void ChangeDirection(bool bDirection);
	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void PreConstruct(bool* IsDesignTime);
	void OnClicked();
	void ExecuteUbergraph_AthenaRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
