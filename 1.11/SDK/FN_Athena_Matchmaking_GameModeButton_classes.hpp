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

// WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C
// 0x00E8 (0x02F0 - 0x0208)
class UAthena_Matchmaking_GameModeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               CB_ExtraInfo;                                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               CB_ModeDescription;                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           PlayButton;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            T_ExtraInfo;                                              // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonLabel;                                              // 0x0230(0x0018) (Edit, BlueprintVisible)
	bool                                               bShowExtraInformation;                                    // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                ButtonMinWidth;                                           // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonMinHeight;                                          // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    GameModeSelected;                                         // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EFortAthenaPlaylist                                MyGameMode;                                               // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStandardGameMode;                                        // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGameModeDisabled;                                        // 0x026A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x026B(0x0005) MISSED OFFSET
	class UClass*                                      OverrideButtonClass;                                      // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideButtonStyle;                                     // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	struct FText                                       ModeDescription;                                          // 0x0280(0x0018) (Edit, BlueprintVisible)
	bool                                               bShowModeDescription;                                     // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ButtonHovered;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAthenaMatchmakingOptionsDisplay_v2_C*       MyOwningDisplay;                                          // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MyMissionGen;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       MyModeTitle;                                              // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MyModeDescription;                                        // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C");
		return ptr;
	}


	void ConfigButtonWithMissionGen(class UClass* InMission);
	void SetMissionGenData(bool* Success);
	void SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay);
	void UpdateGameModeAvailibilty();
	void ShowDisabledMessage(bool Show);
	void DisableGameModeButton();
	void IsGameModeAvailable(EFortAthenaPlaylist InMode, bool* Available);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void SetupGameModeButton(const struct FText& ModeDisplayName, bool bHasExtraInfo, bool bIsEnabled, const struct FText& ExtraInfoText);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnModeButtonHovered(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int EntryPoint);
	void ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
