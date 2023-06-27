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

// WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C
// 0x0020 (0x0780 - 0x0760)
class UPlayerChoiceButtonWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)
	class ULegacyButtonIconText_C*                     Button;                                                   // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ChoiceID;                                                 // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class UPlayerChoiceWidget_C*                       Owner;                                                    // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C");
		return ptr;
	}


	void ConfigureChoice(const struct FChoiceDataEntry& Choice, int ChoiceID, class UPlayerChoiceWidget_C* Owner);
	void BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_PlayerChoiceButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
