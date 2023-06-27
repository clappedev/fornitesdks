#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SocialUMG.SocialChatChannelTab
// 0x0010 (0x0B58 - 0x0B48)
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                          ChatChannel;                                              // 0x0B48(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            CommonText_ChannelName;                                   // 0x0B50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatChannelTab");
		return ptr;
	}

};


// Class SocialUMG.SocialChatContainer
// 0x0058 (0x0288 - 0x0230)
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                          ChatManager;                                              // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialChatChannel*>                  JoinedChannels;                                           // 0x0238(0x0010) (ZeroConstructor)
	class USocialChatChannel*                          ActiveChannel;                                            // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class USocialChatMessageList*                      ChatList_Messages;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocialChatEditableText*                     ChatEditableText_MessageEntry;                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_SendMessage;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicEntryBox*                            EntryBox_JoinedChannels;                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBox_Channels;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatContainer");
		return ptr;
	}


	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(struct FText MessageText, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class SocialUMG.SocialChatEditableText
// 0x04E0 (0x05E8 - 0x0108)
class USocialChatEditableText : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0128(0x0218) (Edit)
	struct FTextBlockStyle                             AutoCompleteStyle;                                        // 0x0340(0x0268) (Edit)
	unsigned char                                      UnknownData01[0x40];                                      // 0x05A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatEditableText");
		return ptr;
	}

};


// Class SocialUMG.SocialChatMessageEntry
// 0x0168 (0x0398 - 0x0230)
class USocialChatMessageEntry : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	struct FSocialChatMessageEntryStyle                DefaultStyle;                                             // 0x0248(0x0120) (Edit)
	class UTextBlock*                                  Text_Message;                                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_SenderName;                                          // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_ChannelName;                                         // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_Timestamp;                                           // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              HorizontalBox_Header;                                     // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     Button_MessageButton;                                     // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageEntry");
		return ptr;
	}


	void OnMessageSet();
	bool CanInteract();
};


// Class SocialUMG.SocialChatMessageList
// 0x00D8 (0x02E0 - 0x0208)
class USocialChatMessageList : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0208(0x00A8) MISSED OFFSET
	bool                                               bIsFocusable;                                             // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	class USocialChatChannel*                          ActiveChannel;                                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageList");
		return ptr;
	}

};


// Class SocialUMG.SocialGroupListEntry
// 0x0020 (0x0B68 - 0x0B48)
class USocialGroupListEntry : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	class USocialGroupChannel*                         SocialGroup;                                              // 0x0B50(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text_GroupName;                                           // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0B60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialGroupListEntry");
		return ptr;
	}


	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialGroupTreeView
// 0x0020 (0x03B8 - 0x0398)
class USocialGroupTreeView : public UTreeView
{
public:
	class UClass*                                      GroupEntryWidgetClass;                                    // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UserEntryWidgetClass;                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionMenuClass;                                          // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialInteractionMenu*                      ActionMenu;                                               // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialGroupTreeView");
		return ptr;
	}

};


// Class SocialUMG.SocialInteractionButton
// 0x0060 (0x0BA8 - 0x0B48)
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                                DefaultIndicatorColor;                                    // 0x0B48(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AlertingIndicatorColor;                                   // 0x0B58(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0B68(0x0030) MISSED OFFSET
	class UCommonTextBlock*                            Text_InteractionName;                                     // 0x0B98(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_InteractionIndicator;                              // 0x0BA0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialInteractionButton");
		return ptr;
	}


	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	struct FName GetInteractionName();
};


// Class SocialUMG.SocialInteractionMenu
// 0x0080 (0x02B0 - 0x0230)
class USocialInteractionMenu : public UUserWidget
{
public:
	class UObject*                                     SocialContext;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0238(0x0040) MISSED OFFSET
	class UDynamicEntryBox*                            EntryBox_PositiveInteractions;                            // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicEntryBox*                            EntryBox_NegativeInteractions;                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpacer*                                     Spacer_InteractionSeparator;                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonWidgetSwitcher*                       Switcher_Confirmation;                                    // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_ConfirmationLabel;                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Confirm;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Decline;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialInteractionMenu");
		return ptr;
	}


	void OnToggleConfirmation(bool bIsVisible);
	void OnSocialContextSet();
	class UWidget* GetFirstEntryToCenter();
};


// Class SocialUMG.DesignerPreviewChatChannel
// 0x0068 (0x0150 - 0x00E8)
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00E8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.DesignerPreviewChatChannel");
		return ptr;
	}

};


// Class SocialUMG.SocialListEntry
// 0x0020 (0x0B68 - 0x0B48)
class USocialListEntry : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	class UCommonRichTextBlock*                        Text_DisplayName;                                         // 0x0B50(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonRichTextBlock*                        Text_RichPresence;                                        // 0x0B58(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0B60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialListEntry");
		return ptr;
	}


	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialUserListEntry
// 0x0008 (0x0B70 - 0x0B68)
class USocialUserListEntry : public USocialListEntry
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x0B68(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserListEntry");
		return ptr;
	}


	void OnUserPresenceChanged(EOnlineStatus OnlineStatus);
};


// Class SocialUMG.SocialInviteListEntry
// 0x0008 (0x0B70 - 0x0B68)
class USocialInviteListEntry : public USocialListEntry
{
public:
	class USocialFriendInvite*                         SocialInvite;                                             // 0x0B68(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialInviteListEntry");
		return ptr;
	}

};


// Class SocialUMG.SocialActionItem
// 0x0008 (0x0030 - 0x0028)
class USocialActionItem : public UObject
{
public:
	class USocialUser*                                 CurrentUser;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialActionItem");
		return ptr;
	}

};


// Class SocialUMG.SocialFriendInvite
// 0x0000 (0x0030 - 0x0030)
class USocialFriendInvite : public USocialActionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialFriendInvite");
		return ptr;
	}

};


// Class SocialUMG.SocialPartyInvite
// 0x0000 (0x0030 - 0x0030)
class USocialPartyInvite : public USocialActionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialPartyInvite");
		return ptr;
	}

};


// Class SocialUMG.SocialUserListHeader
// 0x0040 (0x0068 - 0x0028)
class USocialUserListHeader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserListHeader");
		return ptr;
	}

};


// Class SocialUMG.SocialFriendInviteListHeader
// 0x0010 (0x0078 - 0x0068)
class USocialFriendInviteListHeader : public USocialUserListHeader
{
public:
	TArray<class USocialFriendInvite*>                 FriendInvites;                                            // 0x0068(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialFriendInviteListHeader");
		return ptr;
	}

};


// Class SocialUMG.SocialPartyInviteListHeader
// 0x0010 (0x0078 - 0x0068)
class USocialPartyInviteListHeader : public USocialUserListHeader
{
public:
	TArray<class USocialPartyInvite*>                  PartyInvites;                                             // 0x0068(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialPartyInviteListHeader");
		return ptr;
	}

};


// Class SocialUMG.SocialUserListHeaderEntry
// 0x0020 (0x0B68 - 0x0B48)
class USocialUserListHeaderEntry : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	class USocialUserListHeader*                       ListHeader;                                               // 0x0B50(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text_ListName;                                            // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_NumEntries;                                          // 0x0B60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserListHeaderEntry");
		return ptr;
	}

};


// Class SocialUMG.SocialUserTreeView
// 0x0030 (0x03C8 - 0x0398)
class USocialUserTreeView : public UTreeView
{
public:
	class UClass*                                      UserEntryWidgetClass;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InviteEntryWidgetClass;                                   // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionMenuClass;                                          // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialInteractionMenu*                      ActionMenu;                                               // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserTreeView");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
