#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x90 (0x470 - 0x3E0)
// WidgetBlueprintGeneratedClass InvitePopupMenu.InvitePopupMenu_C
class UInvitePopupMenu_C : public UCommonPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InviteAsFriendButton;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InviteToPartyButton;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      UniqueNetId;                                       // 0x408(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      ConsoleUniqueNetId;                                // 0x430(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  PlayerName;                                        // 0x458(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InvitePopupMenu_C");
		return Clss;
	}

	void GetNetId(struct FUniqueNetIdRepl* NetId, bool* bIsConsoleUniqueId, bool CallFunc_IsTencentBuild_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue);
	void InitializeValues(const struct FUniqueNetIdRepl& InUniqueNetId, const struct FUniqueNetIdRepl& InConsoleNetId, class FText InPlayerName);
	void InvitePlayerToParty(const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void InvitePlayerAsFriend(const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId1, bool CallFunc_GetNetId_bIsConsoleUniqueId1, class UResults_TeleportPadPlayer_C* K2Node_DynamicCast_AsResults_Teleport_Pad_Player, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void CanAddAsFriend(bool* bCanFriendPlayer, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, enum class EFortFriendRequestStatus Temp_byte_Variable1, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, bool Temp_bool_Variable1234567, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, enum class EFortFriendRequestStatus CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool K2Node_Select_Default, bool K2Node_Select1_Default);
	void CanInviteToParty(bool* CanInviteToParty, const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue);
	void BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ExecuteUbergraph_InvitePopupMenu(int32 EntryPoint, bool CallFunc_CanInviteToParty_CanInviteToParty, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_CanAddAsFriend_bCanFriendPlayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
