#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Rewind IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardDeltaWidget_C::Rewind_IntroAnim()
{
	static auto Func = Class->GetFunction("MissionRewardDeltaWidget_C", "Rewind IntroAnim");

	Params::UMissionRewardDeltaWidget_C_Rewind_IntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Reset IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardDeltaWidget_C::Reset_IntroAnim()
{
	static auto Func = Class->GetFunction("MissionRewardDeltaWidget_C", "Reset IntroAnim");

	Params::UMissionRewardDeltaWidget_C_Reset_IntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardDeltaWidget_C::IntroAnim()
{
	static auto Func = Class->GetFunction("MissionRewardDeltaWidget_C", "IntroAnim");

	Params::UMissionRewardDeltaWidget_C_IntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.SetDeltaReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemDelta              DeltaReward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardDeltaWidget_C::SetDeltaReward(const struct FFortItemDelta& DeltaReward, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class FText CallFunc_GetDisplayName_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("MissionRewardDeltaWidget_C", "SetDeltaReward");

	Params::UMissionRewardDeltaWidget_C_SetDeltaReward_Params Parms;
	Parms.DeltaReward = DeltaReward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
