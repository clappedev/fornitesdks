#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleItemCountChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         Definition                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta, bool CallFunc_Greater_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsInZone_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleItemCountChanged");

	Params::UTopBarSkillPoints_C_HandleItemCountChanged_Params Parms;
	Parms.Definition = Definition;
	Parms.Delta = Delta;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleLocalAccountInfoChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo     NewInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              DeltaXP                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo, int32 DeltaXP, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleLocalAccountInfoChanged");

	Params::UTopBarSkillPoints_C_HandleLocalAccountInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;
	Parms.DeltaXP = DeltaXP;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMissionRewardBadgeTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit, BlueprintVisible)
// class FText                        TooltipDescription                                               (Edit, BlueprintVisible)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRewardBoostBadgeTooltip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBarSkillPoints_C::GetMissionRewardBadgeTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UMissionRewardBoostBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetMissionRewardBadgeTooltipWidget");

	Params::UTopBarSkillPoints_C_GetMissionRewardBadgeTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Mission Reward Boost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_Mission_Reward_Boost(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has Mission Reward Boost");

	Params::UTopBarSkillPoints_C_Has_Mission_Reward_Boost_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetFounderBadgetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit, BlueprintVisible)
// class FText                        TooltipDescription                                               (Edit, BlueprintVisible)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFounderBadgeTooltip_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBarSkillPoints_C::GetFounderBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UFounderBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetFounderBadgetTooltipWidget");

	Params::UTopBarSkillPoints_C_GetFounderBadgetTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetMonthlyVIPBadgetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit, BlueprintVisible)
// class FText                        TooltipDescription                                               (Edit, BlueprintVisible)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMonthlyVIPBadgeTooltip_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBarSkillPoints_C::GetMonthlyVIPBadgetTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UMonthlyVIPBadgeTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetMonthlyVIPBadgetTooltipWidget");

	Params::UTopBarSkillPoints_C_GetMonthlyVIPBadgetTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Has VIP Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_VIP_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has VIP Badge");

	Params::UTopBarSkillPoints_C_Has_VIP_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Has Founder Badge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountBuffItem*        K2Node_DynamicCast_AsFort_Account_Buff_Item                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::Has_Founder_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Has Founder Badge");

	Params::UTopBarSkillPoints_C_Has_Founder_Badge_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Buff_Item = K2Node_DynamicCast_AsFort_Account_Buff_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemovedIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::HandleRemotePlayerRemoved(int32 RemovedIndex)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleRemotePlayerRemoved");

	Params::UTopBarSkillPoints_C_HandleRemotePlayerRemoved_Params Parms;
	Parms.RemovedIndex = RemovedIndex;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.HandleOnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UTopBarSkillPoints_C::HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "HandleOnTeamMemberStateChanged");

	Params::UTopBarSkillPoints_C_HandleOnTeamMemberStateChanged_Params Parms;
	Parms.NewMemberState = NewMemberState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Unbind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Unbind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Unbind Party Delegates");

	Params::UTopBarSkillPoints_C_Unbind_Party_Delegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Bind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Bind_Party_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Bind Party Delegates");

	Params::UTopBarSkillPoints_C_Bind_Party_Delegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.BoostExperiencePercentOfLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpPerAccountLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpBoostBalance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTopBarSkillPoints_C::BoostExperiencePercentOfLevel(int32 CallFunc_GetXpPerAccountLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "BoostExperiencePercentOfLevel");

	Params::UTopBarSkillPoints_C_BoostExperiencePercentOfLevel_Params Parms;
	Parms.CallFunc_GetXpPerAccountLevel_ReturnValue = CallFunc_GetXpPerAccountLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetXpBoostBalance_ReturnValue = CallFunc_GetXpBoostBalance_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.RestExperencePercentOfLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpPerAccountLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTopBarSkillPoints_C::RestExperencePercentOfLevel(int32 CallFunc_GetXpPerAccountLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "RestExperencePercentOfLevel");

	Params::UTopBarSkillPoints_C_RestExperencePercentOfLevel_Params Parms;
	Parms.CallFunc_GetXpPerAccountLevel_ReturnValue = CallFunc_GetXpPerAccountLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData12                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData123                          (HasGetValueTypeHash)
// int32                              CallFunc_BoostExperiencePercentOfLevel_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1234                         (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue12                                    ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array123                                        (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue123                                   ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData12345                        (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1234                                       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_RestExperencePercentOfLevel_ReturnValue12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue1234                                  ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData123456                       (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array12345                                      (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1234567                      (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue12345                                 ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array123456                                     (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue123456                                ()
// bool                               CallFunc_EqualEqual_NameName_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12345                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue123456                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopBarSkillPoints_C::GetBonusExperienceDescription(class FText* Result, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue12, class FText CallFunc_Format_ReturnValue, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, class FText CallFunc_Format_ReturnValue1, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, int32 CallFunc_BoostExperiencePercentOfLevel_ReturnValue12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234, class FText CallFunc_Format_ReturnValue12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array123, class FText CallFunc_Format_ReturnValue123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12345, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1234, int32 CallFunc_RestExperencePercentOfLevel_ReturnValue12, class FText CallFunc_Format_ReturnValue1234, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123456, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12345, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234567, class FText CallFunc_Format_ReturnValue12345, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array123456, class FText CallFunc_Format_ReturnValue123456, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_EqualEqual_NameName_ReturnValue1234, bool CallFunc_EqualEqual_NameName_ReturnValue12345, bool CallFunc_EqualEqual_NameName_ReturnValue123456)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetBonusExperienceDescription");

	Params::UTopBarSkillPoints_C_GetBonusExperienceDescription_Params Parms;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12 = CallFunc_EqualEqual_NameName_ReturnValue12;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue = CallFunc_RestExperencePercentOfLevel_ReturnValue;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue = CallFunc_BoostExperiencePercentOfLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue1 = CallFunc_RestExperencePercentOfLevel_ReturnValue1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeStruct_FormatArgumentData12 = K2Node_MakeStruct_FormatArgumentData12;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue1 = CallFunc_BoostExperiencePercentOfLevel_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData123 = K2Node_MakeStruct_FormatArgumentData123;
	Parms.CallFunc_BoostExperiencePercentOfLevel_ReturnValue12 = CallFunc_BoostExperiencePercentOfLevel_ReturnValue12;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_MakeStruct_FormatArgumentData1234 = K2Node_MakeStruct_FormatArgumentData1234;
	Parms.CallFunc_Format_ReturnValue12 = CallFunc_Format_ReturnValue12;
	Parms.K2Node_MakeArray_Array123 = K2Node_MakeArray_Array123;
	Parms.CallFunc_Format_ReturnValue123 = CallFunc_Format_ReturnValue123;
	Parms.K2Node_MakeStruct_FormatArgumentData12345 = K2Node_MakeStruct_FormatArgumentData12345;
	Parms.K2Node_MakeArray_Array1234 = K2Node_MakeArray_Array1234;
	Parms.CallFunc_RestExperencePercentOfLevel_ReturnValue12 = CallFunc_RestExperencePercentOfLevel_ReturnValue12;
	Parms.CallFunc_Format_ReturnValue1234 = CallFunc_Format_ReturnValue1234;
	Parms.K2Node_MakeStruct_FormatArgumentData123456 = K2Node_MakeStruct_FormatArgumentData123456;
	Parms.K2Node_MakeArray_Array12345 = K2Node_MakeArray_Array12345;
	Parms.K2Node_MakeStruct_FormatArgumentData1234567 = K2Node_MakeStruct_FormatArgumentData1234567;
	Parms.CallFunc_Format_ReturnValue12345 = CallFunc_Format_ReturnValue12345;
	Parms.K2Node_MakeArray_Array123456 = K2Node_MakeArray_Array123456;
	Parms.CallFunc_Format_ReturnValue123456 = CallFunc_Format_ReturnValue123456;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue123 = CallFunc_EqualEqual_NameName_ReturnValue123;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1234 = CallFunc_EqualEqual_NameName_ReturnValue1234;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12345 = CallFunc_EqualEqual_NameName_ReturnValue12345;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue123456 = CallFunc_EqualEqual_NameName_ReturnValue123456;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetSkillPointsTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBarSkillPoints_C::GetSkillPointsTooltipWidget(class UCommonInputContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetSkillPointsTooltipWidget");

	Params::UTopBarSkillPoints_C_GetSkillPointsTooltipWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.GetBonusExperienceTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TooltipHeader                                                    (Edit, BlueprintVisible)
// class FText                        TooltipDescription                                               (Edit, BlueprintVisible)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpBonusToolTip_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Custom_Tooltip_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTopBarSkillPoints_C::GetBonusExperienceTooltipWidget(class FText TooltipHeader, class FText TooltipDescription, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UXpBonusToolTip_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_Custom_Tooltip_Output)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "GetBonusExperienceTooltipWidget");

	Params::UTopBarSkillPoints_C_GetBonusExperienceTooltipWidget_Params Parms;
	Parms.TooltipHeader = TooltipHeader;
	Parms.TooltipDescription = TooltipDescription;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_Custom_Tooltip_Output = CallFunc_Create_Custom_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Update Boosts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567891011                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRestXpBalance_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpBoostBalance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortTeamMemberInfo> CallFunc_GetTeamMembers_TeamMembers                              (ZeroConstructor, ReferenceParm)
// struct FFortTeamMemberInfo         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_Mission_Reward_Boost_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789101112                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_VIP_Badge_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Founder_Badge_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12345_Default                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678910111213                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select123456_Default                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Update_Boosts(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable123, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, bool Temp_bool_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345678910, enum class ESlateVisibility Temp_byte_Variable1234567891011, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetRestXpBalance_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable12345, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, bool CallFunc_Has_Mission_Reward_Boost_Result, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility Temp_byte_Variable123456789101112, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Has_VIP_Badge_Result, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_Has_Founder_Badge_Result, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select123_Default, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, enum class ESlateVisibility K2Node_Select1234_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select12345_Default, enum class ESlateVisibility Temp_byte_Variable12345678910111213, bool Temp_bool_Variable123456, enum class ESlateVisibility K2Node_Select123456_Default)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Update Boosts");

	Params::UTopBarSkillPoints_C_Update_Boosts_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.Temp_byte_Variable1234567891011 = Temp_byte_Variable1234567891011;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetRestXpBalance_ReturnValue = CallFunc_GetRestXpBalance_ReturnValue;
	Parms.CallFunc_GetXpBoostBalance_ReturnValue = CallFunc_GetXpBoostBalance_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTeamMembers_TeamMembers = CallFunc_GetTeamMembers_TeamMembers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	Parms.CallFunc_Has_Mission_Reward_Boost_Result = CallFunc_Has_Mission_Reward_Boost_Result;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_byte_Variable123456789101112 = Temp_byte_Variable123456789101112;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Has_VIP_Badge_Result = CallFunc_Has_VIP_Badge_Result;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_Has_Founder_Badge_Result = CallFunc_Has_Founder_Badge_Result;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.Temp_byte_Variable12345678910111213 = Temp_byte_Variable12345678910111213;
	Parms.Temp_bool_Variable123456 = Temp_bool_Variable123456;
	Parms.K2Node_Select123456_Default = K2Node_Select123456_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.UpdateAccountInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UTopBarSkillPoints_C::UpdateAccountInfo(const struct FFortPublicAccountInfo& Info)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "UpdateAccountInfo");

	Params::UTopBarSkillPoints_C_UpdateAccountInfo_Params Parms;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Construct()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Construct");

	Params::UTopBarSkillPoints_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BoostAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Xp Boost Changed");

	Params::UTopBarSkillPoints_C_Xp_Boost_Changed_Params Parms;
	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopBarSkillPoints_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	Params::UTopBarSkillPoints_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::On_Party_Left()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "On Party Left");

	Params::UTopBarSkillPoints_C_On_Party_Left_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.On Party Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::On_Party_Joined()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "On Party Joined");

	Params::UTopBarSkillPoints_C_On_Party_Joined_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Founder Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Founder_Changed()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Founder Changed");

	Params::UTopBarSkillPoints_C_Founder_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTopBarSkillPoints_C::Destruct()
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "Destruct");

	Params::UTopBarSkillPoints_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TopBarSkillPoints.TopBarSkillPoints_C.ExecuteUbergraph_TopBarSkillPoints
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BoostAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// struct FFortPrivateAccountInfo     CallFunc_GetLocalAccountInfo_Result                              (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)

void UTopBarSkillPoints_C::ExecuteUbergraph_TopBarSkillPoints(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, class UCommonUIContext* CallFunc_GetContext_ReturnValue123, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, int32 K2Node_CustomEvent_BoostAmount, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678, class UBoostsRoot_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345)
{
	static auto Func = Class->GetFunction("TopBarSkillPoints_C", "ExecuteUbergraph_TopBarSkillPoints");

	Params::UTopBarSkillPoints_C_ExecuteUbergraph_TopBarSkillPoints_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_CustomEvent_BoostAmount = K2Node_CustomEvent_BoostAmount;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.CallFunc_GetLocalAccountInfo_Result = CallFunc_GetLocalAccountInfo_Result;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
