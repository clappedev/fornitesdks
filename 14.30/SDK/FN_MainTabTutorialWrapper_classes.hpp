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

// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
// 0x0028 (0x02D0 - 0x02A8)
class UMainTabTutorialWrapper_C : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            TutorialGlow;                                             // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTutorialToastWidget_C*                      TutorialToastWidget;                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USoundBase*                                  Play_Callout_Sound;                                       // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonButton*                               ParentButton;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C");
		
		return ptr;
	}


	void TutorialWrapperFinished();
	void SetParentButton(class UCommonButton* ParentButton);
	void GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo);
	void HasValidData(const struct FFortUITutorialData& FortUITutorialData, bool* Result);
	void HandleTutorialCallout(const struct FName& TutorialObjectiveName, ETutorialType TutorialType);
	void CheckFinishTutorialWrapper();
	void OnStopCallout();
	void OnStartCallout(const struct FName& TutorialObjectiveName, ETutorialType TutorialType);
	void Construct();
	void Destruct();
	void OnFinishedToast();
	void ExecuteUbergraph_MainTabTutorialWrapper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
