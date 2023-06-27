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

// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// 0x02A8 (0x0680 - 0x03D8)
class UAthenaLobbyPlayerPanel_C : public UAthenaLobbyPlayerPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BattlePassChevron;                                        // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              BattlePassRow;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     Border_1;                                                 // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      SeasonPassIcon;                                           // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // 0x0400(0x0200) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0610(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed
	struct FText                                       AddFriendText;                                            // 0x0620(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptInviteText;                                         // 0x0638(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SentInviteText;                                           // 0x0650(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptedInviteText;                                       // 0x0668(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void Cancel();
	void Focus();
	void OnHasBattlePassUpdated(bool bHasBattlePass);
	void OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus);
	void OnIsMutedUpdated(bool bIsMuted);
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int EntryPoint);
	void OnClosed__DelegateSignature();
	void OnGadgetsClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
