#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SocialUMG.SocialChatContainer.SendCurrentMessage
struct USocialChatContainer_SendCurrentMessage_Params
{
};

// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
struct USocialChatContainer_OnChatOpenChanged_Params
{
	bool                                               bShouldBeOpen;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
struct USocialChatContainer_HandleRightTabPressed_Params
{
};

// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
struct USocialChatContainer_HandleLeftTabPressed_Params
{
};

// Function SocialUMG.SocialChatContainer.FocusEditableText
struct USocialChatContainer_FocusEditableText_Params
{
};

// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
struct USocialChatContainer_DynamicHandleMessageTextCommitted_Params
{
	struct FText                                       MessageText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
struct USocialChatMessageEntry_OnMessageSet_Params
{
};

// Function SocialUMG.SocialChatMessageEntry.CanInteract
struct USocialChatMessageEntry_CanInteract_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
struct USocialGroupListEntry_HandleGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SocialUMG.SocialInteractionButton.OnInteractionSet
struct USocialInteractionButton_OnInteractionSet_Params
{
};

// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
struct USocialInteractionButton_IsPlatformOnlyFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SocialUMG.SocialInteractionButton.GetInteractionName
struct USocialInteractionButton_GetInteractionName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SocialUMG.SocialActionMenu.OnOpened
struct USocialActionMenu_OnOpened_Params
{
};

// Function SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged
struct USocialActionMenu_HandleMenuAnchorOpenChanged_Params
{
	bool                                               bIsOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
struct USocialInteractionMenu_OnToggleConfirmation_Params
{
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
struct USocialInteractionMenu_GetFirstEntryToCenter_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
struct USocialListInteractableEntryBase_HandleMenuOpenChanged_Params
{
	bool                                               bIsMenuOpen;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
struct USocialListInteractableEntryBase_HandleGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
