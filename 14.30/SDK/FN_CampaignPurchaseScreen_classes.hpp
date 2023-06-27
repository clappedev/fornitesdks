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

// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
// 0x0044 (0x03D4 - 0x0390)
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SwitchTextures;                                           // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               WasLastPlayForward;                                       // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UProgressModalWidget_C*                      LeavingMatchmakingDialog;                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Keyart;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CycleTimer;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture*>                            TextureCycle;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TextureCycleIndex;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C");
		
		return ptr;
	}


	void IsMinorShutdownWarningEnabled(bool* Enabled);
	void InitializeRedeemButton();
	bool IsBusyMatchmaking();
	void Update();
	void AdvanceTextureCycle();
	void InitializeTextureCycle();
	void ToggleTimer(bool Enabled);
	void Construct();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void OnImageCycleTimeElapsed();
	void ExecuteUbergraph_CampaignPurchaseScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
