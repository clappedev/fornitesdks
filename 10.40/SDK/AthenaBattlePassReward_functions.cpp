#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaBattlePassReward.AthenaBattlePassReward_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBattlePassReward_C::BPSetup(class UFortItem* InReward)
{
	static auto Func = Class->GetFunction("AthenaBattlePassReward_C", "BPSetup");

	Params::UAthenaBattlePassReward_C_BPSetup_Params Parms;
	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBattlePassReward.AthenaBattlePassReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaBattlePassReward_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaBattlePassReward_C", "BP_OnHovered");

	Params::UAthenaBattlePassReward_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBattlePassReward.AthenaBattlePassReward_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaBattlePassReward_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaBattlePassReward_C", "BP_OnUnhovered");

	Params::UAthenaBattlePassReward_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBattlePassReward.AthenaBattlePassReward_C.ExecuteUbergraph_AthenaBattlePassReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRarityColor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_HasModifiableVariants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBattlePassReward_C::ExecuteUbergraph_AthenaBattlePassReward(int32 EntryPoint, class UFortItem* K2Node_Event_InReward, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_HasModifiableVariants_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBattlePassReward_C", "ExecuteUbergraph_AthenaBattlePassReward");

	Params::UAthenaBattlePassReward_C_ExecuteUbergraph_AthenaBattlePassReward_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReward = K2Node_Event_InReward;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetRarityColor_ReturnValue = CallFunc_GetRarityColor_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_HasModifiableVariants_ReturnValue = CallFunc_HasModifiableVariants_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
