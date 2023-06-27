#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C8 (0xCF0 - 0xB28)
// WidgetBlueprintGeneratedClass PartyFinderListItem_New.PartyFinderListItem_New_C
class UPartyFinderListItem_New_C : public UFortPartyTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered_FriendItem_Reverse;                        // 0xB30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite_Reverse;                       // 0xB38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_FriendItem;                                // 0xB40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite;                               // 0xB48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_PartyIconsDisplay_C*           Athena_PartyIconsDisplay;                          // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_ButtonZone;                                      // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DisplayFriendsButton;                              // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               FriendItem_Border;                                 // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ButtonContainer;                                // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Header;                                            // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_3;                                   // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Location;                                          // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyFinder_ListItem_ButtonOptions_C* PartyFinder_ListItem_Invite;                       // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayerStatus;                                      // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextState;                                         // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  InviteJoinChanged;                                 // 0xBE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAbleToBeInvited;                                  // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_FriendListBorder;                              // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Param_TopGradient_R;                           // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_Border;                               // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_InviteItem_Border;                               // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewInvite;                                    // 0xC20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         ClickedInviteButton;                               // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0xC30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ConfirmSlateBrush;                                 // 0xC38(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  RequestClosePartyFinder;                           // 0xCC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsConsolePlatform;                                // 0xCD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SoftInviteDisableTimer;                            // 0xCD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_XboxBorder;                           // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_XboxButtonZone;                       // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinderListItem_New_C");
		return Clss;
	}

	void UnbindAllButtons(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void SetupButtonChoices(bool bIsInvite, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason, bool CallFunc_CanBeInvited_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason1, bool CallFunc_CanBeJoined_ReturnValue1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason1, bool CallFunc_CanBeInvited_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason2, bool CallFunc_CanBeJoined_ReturnValue2, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason2, bool CallFunc_CanBeInvited_ReturnValue2, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason3, bool CallFunc_CanBeJoined_ReturnValue3, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason3, bool CallFunc_CanBeInvited_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupButtonBindingsForPartyInvite(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void SetupButtonBindingsForFriendItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void UnbindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void UpdateStateText(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction Temp_byte_Variable, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default);
	void SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default);
	void HandlePresenceUpdated();
	void BindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeItem(enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_GetCurrentPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_GetPartySize_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetLocation_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue);
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnIgnoreInviteClicked(class UCommonButton* Button);
	void OnInviteToPartyClicked(class UCommonButton* Button);
	void OnAcceptPartyInviteClicked(class UCommonButton* Button);
	void ReEnableInviteButtonAfterDelay();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnJoinPartyClicked(class UCommonButton* Button);
	void STWInviteClicked(class UCommonButton* Button);
	void ReEnableSTWInvite();
	void BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_PartyFinderListItem_New(int32 EntryPoint, class UWidgetAnimation* Temp_object_Variable, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue3, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UWidgetAnimation* Temp_object_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortSocialItemType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue1, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue7, bool Temp_bool_Variable2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue8, bool Temp_bool_Variable3, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool K2Node_Event_IsDesignTime, class UMaterialInterface* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UCommonButton* K2Node_CustomEvent_Button4, class UCommonButton* K2Node_CustomEvent_Button3, class UCommonButton* K2Node_CustomEvent_Button2, bool CallFunc_IsValid_ReturnValue6, bool K2Node_Event_bIsSelected, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Not_PreBool_ReturnValue5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_EqualEqual_ByteByte_ReturnValue9, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue7, class UCommonButton* K2Node_CustomEvent_Button1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_EqualEqual_ByteByte_ReturnValue10, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_EqualEqual_ByteByte_ReturnValue11, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UWidgetAnimation* K2Node_Select2_Default, class UWidgetAnimation* K2Node_Select3_Default, class UWidgetAnimation* K2Node_Select4_Default, class UCommonButton* K2Node_CustomEvent_Button, class UWidgetAnimation* Temp_object_Variable2, bool CallFunc_IsValid_ReturnValue8, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue1, class UWidgetAnimation* Temp_object_Variable3, enum class EFortSocialItemType Temp_byte_Variable1, bool CallFunc_IsListItemExpanded_ReturnValue, class UWidgetAnimation* K2Node_Select5_Default, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsMobileGame_ReturnValue2, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue9);
	void RequestClosePartyFinder__DelegateSignature();
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
