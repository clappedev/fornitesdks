#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
// 0x00F8 (0x0330 - 0x0238)
class ULeaveButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           Leave;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LeaveButton.LeaveButton_C.OnClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0258(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LeaveButton.LeaveButton_C.Update Visibility
	class UClass*                                      ButtonStyleOverride;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ControllerStyleOverride;                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseButtoneStyleOverride;                                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideButtonText;                                       // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	struct FText                                       ButtonTextOverride;                                       // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FText                                       HordModeLeaveDescription;                                 // 0x0298(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MissionLeaveDescriptionAlone;                             // 0x02B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MissionLeaveDescriptionParty;                             // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StormshieldLeaveDescriptionAlone;                         // 0x02E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StormshieldLeaveDescriptionParty;                         // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StormshieldLeaveTitle;                                    // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ULeaveDialog_C*                              LeaveDialog;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C");
		return ptr;
	}


	void ClearLeaveDialogDelegate();
	void ShowLeaveScreen();
	void UnbindDelegates();
	void BindDelegates();
	void GetSTWOutpostConfirmationDialogText(struct FText* OutTitle, struct FText* OutDescription);
	void GetSTWConfirmationDialogText(bool bIsInNeighborhood, struct FText* OutTitle, struct FText* OutDescription, bool* bOutIsInParty);
	void GetBRConfirmationDialogText(struct FText* TitleText, struct FText* MessagText);
	void Change_Main_Menu_Music_State(bool Set_Lobby_Music_State);
	void GetDescriptionText(struct FText* DescriptionText);
	void IsInNeighborhood(bool* bIsInNeighborhood);
	void Update_Style_State();
	void SetText(struct FText TextOverride);
	void GetButton(class UIconTextButton_C** Leave);
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress);
	void LeaveParty();
	void UpdateState();
	void IsConsideredInGame(bool* InGame);
	void GetLeaveActionText(struct FText* Text);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(EFortDialogResult Result, struct FName ResultName);
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void BndEvt__Leave_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void HandleTeamMemberRemoved(int PlayerIndex);
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo TeamMemberInfo);
	void HandleLeft();
	void Construct();
	void HandleTeamMemberAdded(struct FFortTeamMemberInfo NewTeamMemberInfo);
	void HandleCanceled();
	void HandleLobbyEvents();
	void ExecuteUbergraph_LeaveButton(int EntryPoint);
	void Update_Visibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
