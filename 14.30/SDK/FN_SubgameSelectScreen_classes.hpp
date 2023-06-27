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

// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// 0x0034 (0x03BC - 0x0388)
class USubgameSelectScreen_C : public UFortSubgameSelectScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    ModeSelect;                                               // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressModalWidget_C*                      LeavingMatchmakingDialog;                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Keyart;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture*>                            TextureCycle;                                             // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TextureCycleIndex;                                        // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C");
		
		return ptr;
	}


	void IsMinorShutdownWarningEnabled(bool* Enabled);
	bool IsBusyMatchmaking();
	void AdvanceTextureCycle();
	void InitializeTextureCycle();
	void DialogResult_FE9F49084346A08B6F02BA99FB50F5CD(EFortDialogResult Result, const struct FName& ResultName);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_SubgameSelectScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
