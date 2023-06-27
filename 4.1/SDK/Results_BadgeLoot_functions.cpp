#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Results_BadgeLoot.Results_BadgeLoot_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Focus");

	Params::UResults_BadgeLoot_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.ShouldBadgeBeShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Badge                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShownBadgeBeShown                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBadgeItemDefinition*    K2Node_DynamicCast_AsFort_Badge_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMissionPoints_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_BadgeLoot_C::ShouldBadgeBeShown(class UFortItem* Badge, bool* ShownBadgeBeShown, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionPoints_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "ShouldBadgeBeShown");

	Params::UResults_BadgeLoot_C_ShouldBadgeBeShown_Params Parms;
	Parms.Badge = Badge;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Badge_Item_Definition = K2Node_DynamicCast_AsFort_Badge_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionPoints_ReturnValue = CallFunc_GetMissionPoints_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (ShownBadgeBeShown != nullptr)
		*ShownBadgeBeShown = Parms.ShownBadgeBeShown;

}

// Function Results_BadgeLoot.Results_BadgeLoot_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidgetAnimation*>    K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UWidgetAnimation*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_BadgeLoot_C::SkipToFinalState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UWidgetAnimation* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "SkipToFinalState");

	Params::UResults_BadgeLoot_C_SkipToFinalState_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::SetSkippingToEnd()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "SetSkippingToEnd");

	Params::UResults_BadgeLoot_C_SetSkippingToEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.InitializeDelays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1234                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue12345                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::InitializeDelays(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue1234, float CallFunc_Divide_FloatFloat_ReturnValue12345)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "InitializeDelays");

	Params::UResults_BadgeLoot_C_InitializeDelays_Params Parms;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue12 = CallFunc_Divide_FloatFloat_ReturnValue12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue123 = CallFunc_Divide_FloatFloat_ReturnValue123;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1234 = CallFunc_Divide_FloatFloat_ReturnValue1234;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue12345 = CallFunc_Divide_FloatFloat_ReturnValue12345;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "PlayAnimationCommon");

	Params::UResults_BadgeLoot_C_PlayAnimationCommon_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.StepBadgeQueues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            BadgeAnimation                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_Badge_C*            Badge                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_Badge_C*            CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::StepBadgeQueues(class UWidgetAnimation* BadgeAnimation, class UResults_Badge_C* Badge, int32 CallFunc_Array_Add_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, class UResults_Badge_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Add_ReturnValue1)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "StepBadgeQueues");

	Params::UResults_BadgeLoot_C_StepBadgeQueues_Params Parms;
	Parms.BadgeAnimation = BadgeAnimation;
	Parms.Badge = Badge;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.HasMoreBadgesToShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bMoreBadgesToShow                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_BadgeLoot_C::HasMoreBadgesToShow(bool* bMoreBadgesToShow, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "HasMoreBadgesToShow");

	Params::UResults_BadgeLoot_C_HasMoreBadgesToShow_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (bMoreBadgesToShow != nullptr)
		*bMoreBadgesToShow = Parms.bMoreBadgesToShow;

}

// Function Results_BadgeLoot.Results_BadgeLoot_C.PopulateNextBadge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResults_Badge_C*            Badge                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::PopulateNextBadge(class UResults_Badge_C* Badge, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown, bool CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortItem* CallFunc_Array_Get_Item1)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "PopulateNextBadge");

	Params::UResults_BadgeLoot_C_PopulateNextBadge_Params Parms;
	Parms.Badge = Badge;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown = CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown;
	Parms.CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow = CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           RewardItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_Badge_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidgetAnimation*>    K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UResults_Badge_C*>    K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)

void UResults_BadgeLoot_C::Initialize(TArray<class UFortItem*>& RewardItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResults_Badge_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, TArray<class UResults_Badge_C*>& K2Node_MakeArray_Array1)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Initialize");

	Params::UResults_BadgeLoot_C_Initialize_Params Parms;
	Parms.RewardItems = RewardItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Intro Sequence");

	Params::UResults_BadgeLoot_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Badges Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Add_Badges_Sequence()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Add Badges Sequence");

	Params::UResults_BadgeLoot_C_Add_Badges_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Next Badge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Add_Next_Badge()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Add Next Badge");

	Params::UResults_BadgeLoot_C_Add_Next_Badge_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.OnConvertFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::OnConvertFinished()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "OnConvertFinished");

	Params::UResults_BadgeLoot_C_OnConvertFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.FinishedAddingBadges
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::FinishedAddingBadges()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "FinishedAddingBadges");

	Params::UResults_BadgeLoot_C_FinishedAddingBadges_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Zoom In Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Zoom_In_Sequence()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Zoom In Sequence");

	Params::UResults_BadgeLoot_C_Zoom_In_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip To End Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Skip_To_End_Sequence()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Skip To End Sequence");

	Params::UResults_BadgeLoot_C_Skip_To_End_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestIntroDone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_BadgeLoot_C::HandleClientEvent_ChestIntroDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "HandleClientEvent_ChestIntroDone");

	Params::UResults_BadgeLoot_C_HandleClientEvent_ChestIntroDone_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestProgressionDone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_BadgeLoot_C::HandleClientEvent_ChestProgressionDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "HandleClientEvent_ChestProgressionDone");

	Params::UResults_BadgeLoot_C_HandleClientEvent_ChestProgressionDone_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestResultFocusDone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_BadgeLoot_C::HandleClientEvent_ChestResultFocusDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "HandleClientEvent_ChestResultFocusDone");

	Params::UResults_BadgeLoot_C_HandleClientEvent_ChestResultFocusDone_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestOutroDone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_BadgeLoot_C::HandleClientEvent_ChestOutroDone(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "HandleClientEvent_ChestOutroDone");

	Params::UResults_BadgeLoot_C_HandleClientEvent_ChestOutroDone_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Skip()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Skip");

	Params::UResults_BadgeLoot_C_Skip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_BadgeLoot_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.ExecuteUbergraph_Results_BadgeLoot
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234567                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidItem_HasValidItem                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidItem_HasValidItem1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidItem_HasValidItem12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_Badge_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidItem_HasValidItem123                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456789                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidItem_HasValidItem1234                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidItem_HasValidItem12345                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678910                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent123                          (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent12                           (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent1                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// bool                               CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BadgeLoot_C::ExecuteUbergraph_Results_BadgeLoot(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue1234, bool CallFunc_BooleanOR_ReturnValue12345, bool CallFunc_BooleanOR_ReturnValue123456, bool CallFunc_BooleanOR_ReturnValue1234567, bool CallFunc_BooleanOR_ReturnValue12345678, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable1, bool Temp_bool_B_Execution_Happened_Variable1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_HasValidItem_HasValidItem, bool CallFunc_HasValidItem_HasValidItem1, bool CallFunc_HasValidItem_HasValidItem12, class UResults_Badge_C* CallFunc_Array_Get_Item, bool CallFunc_HasValidItem_HasValidItem123, bool CallFunc_BooleanOR_ReturnValue123456789, class UWidgetAnimation* CallFunc_Array_Get_Item1, bool CallFunc_HasValidItem_HasValidItem1234, bool CallFunc_HasValidItem_HasValidItem12345, bool CallFunc_BooleanOR_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_HandleClientEvent_EventSource123, class UObject* K2Node_HandleClientEvent_EventFocus123, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent123, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "ExecuteUbergraph_Results_BadgeLoot");

	Params::UResults_BadgeLoot_C_ExecuteUbergraph_Results_BadgeLoot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.CallFunc_BooleanOR_ReturnValue1234 = CallFunc_BooleanOR_ReturnValue1234;
	Parms.CallFunc_BooleanOR_ReturnValue12345 = CallFunc_BooleanOR_ReturnValue12345;
	Parms.CallFunc_BooleanOR_ReturnValue123456 = CallFunc_BooleanOR_ReturnValue123456;
	Parms.CallFunc_BooleanOR_ReturnValue1234567 = CallFunc_BooleanOR_ReturnValue1234567;
	Parms.CallFunc_BooleanOR_ReturnValue12345678 = CallFunc_BooleanOR_ReturnValue12345678;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_A_Execution_Happened_Variable1 = Temp_bool_A_Execution_Happened_Variable1;
	Parms.Temp_bool_B_Execution_Happened_Variable1 = Temp_bool_B_Execution_Happened_Variable1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_HasValidItem_HasValidItem = CallFunc_HasValidItem_HasValidItem;
	Parms.CallFunc_HasValidItem_HasValidItem1 = CallFunc_HasValidItem_HasValidItem1;
	Parms.CallFunc_HasValidItem_HasValidItem12 = CallFunc_HasValidItem_HasValidItem12;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasValidItem_HasValidItem123 = CallFunc_HasValidItem_HasValidItem123;
	Parms.CallFunc_BooleanOR_ReturnValue123456789 = CallFunc_BooleanOR_ReturnValue123456789;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_HasValidItem_HasValidItem1234 = CallFunc_HasValidItem_HasValidItem1234;
	Parms.CallFunc_HasValidItem_HasValidItem12345 = CallFunc_HasValidItem_HasValidItem12345;
	Parms.CallFunc_BooleanOR_ReturnValue12345678910 = CallFunc_BooleanOR_ReturnValue12345678910;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_HandleClientEvent_EventSource123 = K2Node_HandleClientEvent_EventSource123;
	Parms.K2Node_HandleClientEvent_EventFocus123 = K2Node_HandleClientEvent_EventFocus123;
	Parms.K2Node_HandleClientEvent_ClientEvent123 = K2Node_HandleClientEvent_ClientEvent123;
	Parms.K2Node_HandleClientEvent_EventSource12 = K2Node_HandleClientEvent_EventSource12;
	Parms.K2Node_HandleClientEvent_EventFocus12 = K2Node_HandleClientEvent_EventFocus12;
	Parms.K2Node_HandleClientEvent_ClientEvent12 = K2Node_HandleClientEvent_ClientEvent12;
	Parms.K2Node_HandleClientEvent_EventSource1 = K2Node_HandleClientEvent_EventSource1;
	Parms.K2Node_HandleClientEvent_EventFocus1 = K2Node_HandleClientEvent_EventFocus1;
	Parms.K2Node_HandleClientEvent_ClientEvent1 = K2Node_HandleClientEvent_ClientEvent1;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow = CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_BadgeLoot.Results_BadgeLoot_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_BadgeLoot_C::Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_BadgeLoot_C", "Finished__DelegateSignature");

	Params::UResults_BadgeLoot_C_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
