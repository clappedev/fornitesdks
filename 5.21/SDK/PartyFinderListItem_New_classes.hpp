#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C8 (0xA68 - 0x8A0)
// WidgetBlueprintGeneratedClass PartyFinderListItem_New.PartyFinderListItem_New_C
class UPartyFinderListItem_New_C : public UFortPartyTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered_FriendItem_Reverse;                        // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite_Reverse;                       // 0x8B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_FriendItem;                                // 0x8B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite;                               // 0x8C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_PartyIconsDisplay_C*           Athena_PartyIconsDisplay;                          // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_ButtonZone;                                      // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DisplayFriendsButton;                              // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               FriendItem_Border;                                 // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ButtonContainer;                                // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Header;                                            // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_3;                                   // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Location;                                          // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyFinder_ListItem_ButtonOptions_C* PartyFinder_ListItem_Invite;                       // 0x930(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x938(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0x940(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x948(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayerStatus;                                      // 0x950(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextState;                                         // 0x958(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  InviteJoinChanged;                                 // 0x960(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAbleToBeInvited;                                  // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_FriendListBorder;                              // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Param_TopGradient_R;                           // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_Border;                               // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_InviteItem_Border;                               // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewInvite;                                    // 0x998(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         ClickedInviteButton;                               // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x9A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ConfirmSlateBrush;                                 // 0x9B0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  RequestClosePartyFinder;                           // 0xA38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsConsolePlatform;                                // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SoftInviteDisableTimer;                            // 0xA50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_XboxBorder;                           // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_XboxButtonZone;                       // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	void ExecuteUbergraph_PartyFinderListItem_New(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue3, class UCommonInputContext* CallFunc_GetContext_ReturnValue4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UWidgetAnimation* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue1, enum class EFortSocialItemType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue2, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool Temp_bool_Variable2, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_EqualEqual_ByteByte_ReturnValue7, bool Temp_bool_Variable3, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool K2Node_Event_IsDesignTime, class UMaterialInterface* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UCommonButton* K2Node_CustomEvent_Button4, class UCommonButton* K2Node_CustomEvent_Button3, class UCommonButton* K2Node_CustomEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_IsValid_ReturnValue7, bool K2Node_Event_bIsSelected, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue7, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, class UFortPartyContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue8, bool CallFunc_Not_PreBool_ReturnValue8, bool CallFunc_Not_PreBool_ReturnValue9, class UCommonButton* K2Node_CustomEvent_Button1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_EqualEqual_ByteByte_ReturnValue9, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, class UWidgetAnimation* Temp_object_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue10, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, class UWidgetAnimation* K2Node_Select2_Default, class UWidgetAnimation* K2Node_Select3_Default, class UCommonButton* K2Node_CustomEvent_Button, class UWidgetAnimation* Temp_object_Variable2, bool CallFunc_IsValid_ReturnValue9, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue2, enum class EFortSocialItemType Temp_byte_Variable1, class UWidgetAnimation* Temp_object_Variable3, class UWidgetAnimation* K2Node_Select4_Default, class UWidgetAnimation* K2Node_Select5_Default, bool CallFunc_IsListItemExpanded_ReturnValue, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject);
	void RequestClosePartyFinder__DelegateSignature();
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
