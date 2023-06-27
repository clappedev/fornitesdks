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

// Class SocialUMG.SocialChatChannelTab
// 0x0010 (0x0BB0 - 0x0BA0)
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                          ChatChannel;                                              // 0x0BA0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            CommonText_ChannelName;                                   // 0x0BA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialChatChannelTab");
		
		return ptr;
	}

};


// Class SocialUMG.SocialChatContainer
// 0x0058 (0x02B8 - 0x0260)
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                          ChatManager;                                              // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialChatChannel*>                  JoinedChannels;                                           // 0x0268(0x0010) (ZeroConstructor)
	class USocialChatChannel*                          ActiveChannel;                                            // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	class USocialChatMessageList*                      ChatList_Messages;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocialChatEditableText*                     ChatEditableText_MessageEntry;                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_SendMessage;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicEntryBox*                            EntryBox_JoinedChannels;                                  // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBox_Channels;                                       // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialChatContainer");
		
		return ptr;
	}


	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(const struct FText& MessageText, TEnumAsByte<ETextCommit> CommitMethod);
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
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialChatEditableText");
		
		return ptr;
	}

};


// Class SocialUMG.SocialChatMessageEntry
// 0x0148 (0x03A8 - 0x0260)
class USocialChatMessageEntry : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	struct FSocialChatMessageEntryStyle                DefaultStyle;                                             // 0x0278(0x0120) (Edit)
	class UCommonRichTextBlock*                        RichText_Message;                                         // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     Button_MessageButton;                                     // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageEntry");
		
		return ptr;
	}


	void OnMessageSet();
	bool CanInteract();
};


// Class SocialUMG.SocialChatMessageList
// 0x00F0 (0x0308 - 0x0218)
class USocialChatMessageList : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0218(0x00C0) MISSED OFFSET
	bool                                               bIsFocusable;                                             // 0x02D8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	class USocialChatChannel*                          ActiveChannel;                                            // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x02E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageList");
		
		return ptr;
	}

};


// Class SocialUMG.SocialGroupListEntry
// 0x0028 (0x0BC8 - 0x0BA0)
class USocialGroupListEntry : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BA0(0x0008) MISSED OFFSET
	class USocialActionMenu*                           ActionMenuClass;                                          // 0x0BA8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialGroupChannel*                         SocialGroup;                                              // 0x0BB0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text_GroupName;                                           // 0x0BB8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0BC0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialGroupListEntry");
		
		return ptr;
	}


	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialGroupTreeView
// 0x0020 (0x03E0 - 0x03C0)
class USocialGroupTreeView : public UTreeView
{
public:
	class USocialGroupListEntry*                       GroupEntryWidgetClass;                                    // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USocialListUserEntryBase*                    UserEntryWidgetClass;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USocialInteractionMenu*                      ActionMenuClass;                                          // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USocialInteractionMenu*                      ActionMenu;                                               // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialGroupTreeView");
		
		return ptr;
	}

};


// Class SocialUMG.SocialInteractionButton
// 0x0060 (0x0C00 - 0x0BA0)
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                                DefaultIndicatorColor;                                    // 0x0BA0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AlertingIndicatorColor;                                   // 0x0BB0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BC0(0x0030) MISSED OFFSET
	class UCommonTextBlock*                            Text_InteractionName;                                     // 0x0BF0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_InteractionIndicator;                              // 0x0BF8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialInteractionButton");
		
		return ptr;
	}


	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	struct FName GetInteractionName();
};


// Class SocialUMG.SocialActionMenu
// 0x0038 (0x0340 - 0x0308)
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0308(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialActionMenu");
		
		return ptr;
	}


	void OnOpened();
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
};


// Class SocialUMG.SocialInteractionMenu
// 0x0068 (0x03A8 - 0x0340)
class USocialInteractionMenu : public USocialActionMenu
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0340(0x0030) MISSED OFFSET
	class UDynamicEntryBox*                            EntryBox_PositiveInteractions;                            // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicEntryBox*                            EntryBox_NegativeInteractions;                            // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpacer*                                     Spacer_InteractionSeparator;                              // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonWidgetSwitcher*                       Switcher_Confirmation;                                    // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_ConfirmationLabel;                                   // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Confirm;                                           // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Decline;                                           // 0x03A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialInteractionMenu");
		
		return ptr;
	}


	void OnToggleConfirmation(bool bIsVisible);
	class UWidget* GetFirstEntryToCenter();
};


// Class SocialUMG.SocialNameTextBlock
// 0x0020 (0x06C0 - 0x06A0)
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x06A0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSize;                                           // 0x06A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredSize;                                           // 0x06AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSecondName;                                          // 0x06B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPlatformIconDisplayRule                           PlatformIconDisplayRule;                                  // 0x06B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapToNextLine;                                          // 0x06B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x06B3(0x0001) MISSED OFFSET
	struct FColor                                      SecondNameColor;                                          // 0x06B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SecondNameFontSize;                                       // 0x06B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialNameTextBlock");
		
		return ptr;
	}

};


// Class SocialUMG.DesignerPreviewChatChannel
// 0x0068 (0x0150 - 0x00E8)
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00E8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.DesignerPreviewChatChannel");
		
		return ptr;
	}

};


// Class SocialUMG.SocialListEntryBase
// 0x0018 (0x0BB8 - 0x0BA0)
class USocialListEntryBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0BA0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialListEntryBase");
		
		return ptr;
	}

};


// Class SocialUMG.SocialListInteractableEntryBase
// 0x0010 (0x0BC8 - 0x0BB8)
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	class USocialActionMenu*                           ActionMenuClass;                                          // 0x0BB8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0BC0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialListInteractableEntryBase");
		
		return ptr;
	}


	void HandleMenuOpenChanged(bool bIsMenuOpen);
	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialListUserEntryBase
// 0x0018 (0x0BE0 - 0x0BC8)
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BC8(0x0008) MISSED OFFSET
	class USocialNameTextBlock*                        Text_SocialName;                                          // 0x0BD0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonRichTextBlock*                        Text_RichPresence;                                        // 0x0BD8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialListUserEntryBase");
		
		return ptr;
	}

};


// Class SocialUMG.SocialUserListHeaderEntry
// 0x0010 (0x0BC8 - 0x0BB8)
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                                  Text_ListName;                                            // 0x0BB8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text_NumEntries;                                          // 0x0BC0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialUserListHeaderEntry");
		
		return ptr;
	}

};


// Class SocialUMG.SocialUserListViewBase
// 0x00E8 (0x0300 - 0x0218)
class USocialUserListViewBase : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0218(0x00E0) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialUserListViewBase");
		
		return ptr;
	}

};


// Class SocialUMG.SocialUserListView
// 0x0088 (0x0388 - 0x0300)
class USocialUserListView : public USocialUserListViewBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0300(0x0030) MISSED OFFSET
	class USocialActionMenu*                           ActiveActionMenu;                                         // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<class USocialActionMenu*, class USocialActionMenu*> CachedActionMenuPool;                                     // 0x0338(0x0050) (ExportObject, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialUserListView");
		
		return ptr;
	}

};


// Class SocialUMG.SocialUserTreeView
// 0x00A0 (0x0428 - 0x0388)
class USocialUserTreeView : public USocialUserListView
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0388(0x0070) MISSED OFFSET
	class USocialListUserEntryBase*                    UserEntryWidgetClass;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USocialListUserEntryBase*                    InviteEntryWidgetClass;                                   // 0x0400(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0408(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SocialUMG.SocialUserTreeView");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
