#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialTypes.ChatChromeColorScheme
// 0x0050
struct FChatChromeColorScheme
{
	struct FLinearColor                                ChatEntryBackgroundColor;                                 // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                NoneActiveTabColor;                                       // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TabFontColor;                                             // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TabFontColorInverted;                                     // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                ChatBackgroundColor;                                      // 0x0040(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatChromeMargins
// 0x0064
struct FChatChromeMargins
{
	float                                              TabWidth;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TabPadding;                                               // 0x0004(0x0010) (Edit)
	struct FMargin                                     ChatWindowPadding;                                        // 0x0014(0x0010) (Edit)
	struct FMargin                                     ChatWindowToEntryMargin;                                  // 0x0024(0x0010) (Edit)
	struct FMargin                                     ChatChannelPadding;                                       // 0x0034(0x0010) (Edit)
	struct FMargin                                     UserListButtonPadding;                                    // 0x0044(0x0010) (Edit)
	struct FMargin                                     UserListIconPadding;                                      // 0x0054(0x0010) (Edit)
};

// ScriptStruct SocialTypes.ChatChromeStyle
// 0x06F8
struct FChatChromeStyle
{
	struct FSlateBrush                                 UserListBrush;                                            // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ChatBackgroundBrush;                                      // 0x0078(0x0078) (Edit)
	struct FSlateBrush                                 ChatEntryBackgroundBrush;                                 // 0x00F0(0x0078) (Edit)
	struct FSlateBrush                                 ChannelBackgroundBrush;                                   // 0x0168(0x0078) (Edit)
	struct FSlateBrush                                 TabBackgroundBrush;                                       // 0x01E0(0x0078) (Edit)
	struct FButtonStyle                                TabSelectorButtonStyle;                                   // 0x0258(0x0238) (Edit)
	struct FMargin                                     TabOptionPadding;                                         // 0x0490(0x0010) (Edit)
	struct FMargin                                     TabContentPadding;                                        // 0x04A0(0x0010) (Edit)
	struct FMargin                                     TabClosePadding;                                          // 0x04B0(0x0010) (Edit)
	struct FButtonStyle                                UserListButtonStyle;                                      // 0x04C0(0x0238) (Edit)
};

// ScriptStruct SocialTypes.ChatColorScheme
// 0x0120
struct FChatColorScheme
{
	struct FLinearColor                                TimeStampColor;                                           // 0x0000(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DefaultChatColor;                                         // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                WhisperChatColor;                                         // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GlobalChatColor;                                          // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FounderChatColor;                                         // 0x0040(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameChatColor;                                            // 0x0050(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TeamChatColor;                                            // 0x0060(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PartyChatColor;                                           // 0x0070(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                AdminChatColor;                                           // 0x0080(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameAdminChatColor;                                       // 0x0090(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                WhisperHyperlinkChatColor;                                // 0x00A0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GlobalHyperlinkChatColor;                                 // 0x00B0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FounderHyperlinkChatColor;                                // 0x00C0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                GameHyperlinkChatColor;                                   // 0x00D0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TeamHyperlinkChatColor;                                   // 0x00E0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PartyHyperlinkChatColor;                                  // 0x00F0(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0100(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x0110(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.ChatMarkupStyle
// 0x0590
struct FChatMarkupStyle
{
	struct FButtonStyle                                MarkupButtonStyle;                                        // 0x0000(0x0238) (Edit)
	struct FTextBlockStyle                             MarkupTextStyle;                                          // 0x0238(0x01C8) (Edit)
	struct FSlateBrush                                 MarkupBackground;                                         // 0x0400(0x0078) (Edit)
	struct FSlateColor                                 ButtonColor;                                              // 0x0478(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverColor;                                         // 0x04A0(0x0028) (Edit)
	struct FSlateColor                                 TipColor;                                                 // 0x04C8(0x0028) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x04F0(0x0078) (Edit)
	float                                              SeperatorThickness;                                       // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MarkupPadding;                                            // 0x056C(0x0010) (Edit)
	struct FMargin                                     ButtonPadding;                                            // 0x057C(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatStyle
// 0x1170
struct FChatStyle
{
	struct FEditableTextBoxStyle                       ChatEntryTextStyle;                                       // 0x0000(0x0728) (Edit)
	struct FEditableTextBoxStyle                       ChatDisplayTextStyle;                                     // 0x0728(0x0728) (Edit)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                        // 0x0E50(0x01E8) (Edit)
	struct FSlateBrush                                 MessageNotificationBrush;                                 // 0x1038(0x0078) (Edit)
	struct FMargin                                     ChatEntryPadding;                                         // 0x10B0(0x0010) (Edit)
	float                                              ChatEntryHeight;                                          // 0x10C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x10C4(0x0004) MISSED OFFSET
	struct FSlateBrush                                 ChatMenuBackgroundBrush;                                  // 0x10C8(0x0078) (Edit)
	struct FMargin                                     FriendActionPadding;                                      // 0x1140(0x0010) (Edit)
	struct FMargin                                     FriendActionHeaderPadding;                                // 0x1150(0x0010) (Edit)
	struct FMargin                                     FriendActionStatusMargin;                                 // 0x1160(0x0010) (Edit)
};

// ScriptStruct SocialTypes.SocialFontStyle
// 0x0240
struct FSocialFontStyle
{
	struct FSlateFontInfo                              FontSmall;                                                // 0x0000(0x0058) (Edit)
	struct FSlateFontInfo                              FontSmallBold;                                            // 0x0058(0x0058) (Edit)
	struct FSlateFontInfo                              FontNormal;                                               // 0x00B0(0x0058) (Edit)
	struct FSlateFontInfo                              FontNormalBold;                                           // 0x0108(0x0058) (Edit)
	struct FSlateFontInfo                              FontLarge;                                                // 0x0160(0x0058) (Edit)
	struct FSlateFontInfo                              FontLargeBold;                                            // 0x01B8(0x0058) (Edit)
	struct FLinearColor                                DefaultFontColor;                                         // 0x0210(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                InvertedFontColor;                                        // 0x0220(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DefaultDullFontColor;                                     // 0x0230(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListMargins
// 0x0200
struct FSocialListMargins
{
	struct FVector2D                                   UserPresenceImageSize;                                    // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FMargin                                     HeaderButtonMargin;                                       // 0x0008(0x0010) (Edit)
	struct FMargin                                     FriendsListMargin;                                        // 0x0018(0x0010) (Edit)
	struct FMargin                                     FriendsListNoFriendsMargin;                               // 0x0028(0x0010) (Edit)
	struct FMargin                                     FriendsListHeaderMargin;                                  // 0x0038(0x0010) (Edit)
	struct FMargin                                     FriendsListHeaderCountMargin;                             // 0x0048(0x0010) (Edit)
	struct FMargin                                     HeaderButtonContentMargin;                                // 0x0058(0x0010) (Edit)
	struct FMargin                                     FriendItemMargin;                                         // 0x0068(0x0010) (Edit)
	struct FMargin                                     FriendItemStatusMargin;                                   // 0x0078(0x0010) (Edit)
	struct FMargin                                     FriendTipStatusMargin;                                    // 0x0088(0x0010) (Edit)
	struct FMargin                                     FriendItemPresenceMargin;                                 // 0x0098(0x0010) (Edit)
	struct FMargin                                     FriendItemPlatformMargin;                                 // 0x00A8(0x0010) (Edit)
	struct FMargin                                     FriendItemTextScrollerMargin;                             // 0x00B8(0x0010) (Edit)
	struct FMargin                                     ConfirmationBorderMargin;                                 // 0x00C8(0x0010) (Edit)
	struct FMargin                                     ConfirmationButtonMargin;                                 // 0x00D8(0x0010) (Edit)
	struct FMargin                                     ConfirmationButtonContentMargin;                          // 0x00E8(0x0010) (Edit)
	struct FMargin                                     NoneFriendContentMargin;                                  // 0x00F8(0x0010) (Edit)
	float                                              NoneFriendContentHeight;                                  // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoneFriendIconWidth;                                      // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SubMenuBackIconMargin;                                    // 0x0110(0x0010) (Edit)
	struct FMargin                                     SubMenuPageIconMargin;                                    // 0x0120(0x0010) (Edit)
	struct FMargin                                     RadioSettingTitleMargin;                                  // 0x0130(0x0010) (Edit)
	struct FMargin                                     SubMenuSearchIconMargin;                                  // 0x0140(0x0010) (Edit)
	struct FMargin                                     SubMenuSearchTextMargin;                                  // 0x0150(0x0010) (Edit)
	struct FMargin                                     SubMenuBackButtonMargin;                                  // 0x0160(0x0010) (Edit)
	struct FMargin                                     SubMenuSettingButtonMargin;                               // 0x0170(0x0010) (Edit)
	struct FMargin                                     SubMenuListMargin;                                        // 0x0180(0x0010) (Edit)
	float                                              SubMenuSeperatorThickness;                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PresenceSeperatorThickness;                               // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     FriendTipMargin;                                          // 0x0198(0x0010) (Edit)
	struct FMargin                                     FriendTipPresenceMargin;                                  // 0x01A8(0x0010) (Edit)
	struct FMargin                                     FriendTipSeperatorMargin;                                 // 0x01B8(0x0010) (Edit)
	struct FMargin                                     ToolTipMargin;                                            // 0x01C8(0x0010) (Edit)
	struct FMargin                                     TipStatusMargin;                                          // 0x01D8(0x0010) (Edit)
	struct FMargin                                     AddButtonMargin;                                          // 0x01E8(0x0010) (Edit)
	struct FVector2D                                   AddButtonSpacing;                                         // 0x01F8(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct SocialTypes.SocialListStyle
// 0x21F0
struct FSocialListStyle
{
	struct FButtonStyle                                GlobalChatButtonStyle;                                    // 0x0000(0x0238) (Edit)
	struct FSlateBrush                                 GlobalChatIcon;                                           // 0x0238(0x0078) (Edit)
	struct FButtonStyle                                FriendItemButtonStyle;                                    // 0x02B0(0x0238) (Edit)
	struct FButtonStyle                                ConfirmButtonStyle;                                       // 0x04E8(0x0238) (Edit)
	struct FButtonStyle                                CancelButtonStyle;                                        // 0x0720(0x0238) (Edit)
	struct FSlateColor                                 ButtonContentColor;                                       // 0x0958(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverContentColor;                                  // 0x0980(0x0028) (Edit)
	struct FSlateBrush                                 ActionMenuArrowBrush;                                     // 0x09A8(0x0078) (Edit)
	struct FSlateBrush                                 ActionMenuArrowRightBrush;                                // 0x0A20(0x0078) (Edit)
	struct FSlateColor                                 ActionMenuBackgroundColor;                                // 0x0A98(0x0028) (Edit)
	struct FSlateBrush                                 ToolTipArrowBrush;                                        // 0x0AC0(0x0078) (Edit)
	struct FButtonStyle                                BackButtonStyle;                                          // 0x0B38(0x0238) (Edit)
	struct FButtonStyle                                HeaderButtonStyle;                                        // 0x0D70(0x0238) (Edit)
	struct FButtonStyle                                FriendListActionButtonStyle;                              // 0x0FA8(0x0238) (Edit)
	struct FSlateBrush                                 AddFriendButtonContentBrush;                              // 0x11E0(0x0078) (Edit)
	struct FSlateBrush                                 StatusIconBrush;                                          // 0x1258(0x0078) (Edit)
	struct FSlateBrush                                 PCIconBrush;                                              // 0x12D0(0x0078) (Edit)
	struct FSlateBrush                                 ConsoleIconBrush;                                         // 0x1348(0x0078) (Edit)
	struct FSlateBrush                                 EpicIconBrush;                                            // 0x13C0(0x0078) (Edit)
	struct FSlateBrush                                 FriendImageBrush;                                         // 0x1438(0x0078) (Edit)
	struct FSlateBrush                                 OfflineBrush;                                             // 0x14B0(0x0078) (Edit)
	struct FSlateBrush                                 OnlineBrush;                                              // 0x1528(0x0078) (Edit)
	struct FSlateBrush                                 AwayBrush;                                                // 0x15A0(0x0078) (Edit)
	struct FSlateBrush                                 SpectateBrush;                                            // 0x1618(0x0078) (Edit)
	struct FSlateBrush                                 FriendsContainerBackground;                               // 0x1690(0x0078) (Edit)
	struct FSlateBrush                                 FriendsListBackground;                                    // 0x1708(0x0078) (Edit)
	struct FEditableTextBoxStyle                       AddFriendEditableTextStyle;                               // 0x1780(0x0728) (Edit)
	struct FSlateBrush                                 BackBrush;                                                // 0x1EA8(0x0078) (Edit)
	struct FSlateBrush                                 SelectedOptionBrush;                                      // 0x1F20(0x0078) (Edit)
	struct FSlateBrush                                 SettingsBrush;                                            // 0x1F98(0x0078) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x2010(0x0078) (Edit)
	struct FSlateBrush                                 PresenceSeperatorBrush;                                   // 0x2088(0x0078) (Edit)
	struct FSlateBrush                                 FontSizeBrush;                                            // 0x2100(0x0078) (Edit)
	struct FSlateBrush                                 SearchBrush;                                              // 0x2178(0x0078) (Edit)
};

// ScriptStruct SocialTypes.ProfanityData
// 0x0038
struct FProfanityData
{
	struct FString                                     CountryCode;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ProfanityList;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     WhiteList;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAutoAdd;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialSoundSchema
// 0x0048
struct FSocialSoundSchema
{
	struct FSlateSound                                 MessageReceivedSound;                                     // 0x0000(0x0018) (Edit)
	struct FSlateSound                                 PartyInviteReceivedSound;                                 // 0x0018(0x0018) (Edit)
	struct FSlateSound                                 FriendInviteReceivedSound;                                // 0x0030(0x0018) (Edit)
};

// ScriptStruct SocialTypes.SocialStyle
// 0x5D60
struct FSocialStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0440) (Edit)
	struct FButtonStyle                                ActionButtonStyle;                                        // 0x0440(0x0238) (Edit)
	struct FSocialFontStyle                            SmallFontStyle;                                           // 0x0678(0x0240) (Edit)
	struct FSocialFontStyle                            NormalFontStyle;                                          // 0x08B8(0x0240) (Edit)
	struct FSocialFontStyle                            LargeFontStyle;                                           // 0x0AF8(0x0240) (Edit)
	struct FSocialFontStyle                            ChatFontStyle;                                            // 0x0D38(0x0240) (Edit)
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0F78(0x04F0) (Edit)
	struct FCheckBoxStyle                              RadioBoxStyle;                                            // 0x1468(0x04F0) (Edit)
	struct FSocialListStyle                            SocialListStyle;                                          // 0x1958(0x21F0) (Edit)
	struct FSocialListMargins                          SocialListMargins;                                        // 0x3B48(0x0200) (Edit)
	struct FChatStyle                                  ChatStyle;                                                // 0x3D48(0x1170) (Edit)
	struct FChatColorScheme                            ChatColorScheme;                                          // 0x4EB8(0x0120) (Edit)
	struct FChatChromeStyle                            ChatChromeStyle;                                          // 0x4FD8(0x06F8) (Edit)
	struct FChatChromeMargins                          ChatChromeMargins;                                        // 0x56D0(0x0064) (Edit)
	struct FChatChromeColorScheme                      ChatChromeColorScheme;                                    // 0x5734(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x5784(0x0004) MISSED OFFSET
	struct FChatMarkupStyle                            ChatMarkupStyle;                                          // 0x5788(0x0590) (Edit)
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x5D18(0x0048) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
