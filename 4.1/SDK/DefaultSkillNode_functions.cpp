#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESkillTreePages         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreeGroups        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select12_Default                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select123_Default                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultSkillNode_C::SetBackgroundColor(enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable1, enum class ESkillTreePages Temp_byte_Variable12, enum class ESkillTreeGroups Temp_byte_Variable123, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select12_Default, const struct FLinearColor& K2Node_Select123_Default)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "SetBackgroundColor");

	Params::UDefaultSkillNode_C_SetBackgroundColor_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::UpdateFromButtonState(bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromButtonState");

	Params::UDefaultSkillNode_C_UpdateFromButtonState_Params Parms;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultSkillNode_C::UpdateSelectionGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "UpdateSelectionGlow");

	Params::UDefaultSkillNode_C_UpdateSelectionGlow_Params Parms;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultSkillNode_C::UpdateHoverGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "UpdateHoverGlow");

	Params::UDefaultSkillNode_C_UpdateHoverGlow_Params Parms;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetGlowPercentage                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::StepSelectionGlowInterpolation(float TargetGlowPercentage, bool CallFunc_GetSelected_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "StepSelectionGlowInterpolation");

	Params::UDefaultSkillNode_C_StepSelectionGlowInterpolation_Params Parms;
	Parms.TargetGlowPercentage = TargetGlowPercentage;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetGlowPercentage                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::StepHoverGlowInterpolation(float TargetGlowPercentage, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "StepHoverGlowInterpolation");

	Params::UDefaultSkillNode_C_StepHoverGlowInterpolation_Params Parms;
	Parms.TargetGlowPercentage = TargetGlowPercentage;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHomebaseNodeMagnitudeTemp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortSkillTreeNodeDisplayDataCallFunc_TryGetNodeDisplayData_OutDisplayData                    ()
// bool                               CallFunc_TryGetNodeDisplayData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseNode               CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData               ()
// bool                               CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSkillTreeNodeSizeByMagnitude_Size                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultSkillNode_C::UpdateFromNodeData(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345, const struct FFortSkillTreeNodeDisplayData& CallFunc_TryGetNodeDisplayData_OutDisplayData, bool CallFunc_TryGetNodeDisplayData_ReturnValue, bool Temp_bool_Variable, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSkillTreeNodeSizeByMagnitude_Size, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromNodeData");

	Params::UDefaultSkillNode_C_UpdateFromNodeData_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.CallFunc_TryGetNodeDisplayData_OutDisplayData = CallFunc_TryGetNodeDisplayData_OutDisplayData;
	Parms.CallFunc_TryGetNodeDisplayData_ReturnValue = CallFunc_TryGetNodeDisplayData_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData = CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData;
	Parms.CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue = CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSkillTreeNodeSizeByMagnitude_Size = CallFunc_GetSkillTreeNodeSizeByMagnitude_Size;
	Parms.CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare = CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare;
	Parms.CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode = CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseNodeState          CallFunc_TryGetSkillTreeNodeState_OutNodeState                   (NoDestructor)
// bool                               CallFunc_TryGetSkillTreeNodeState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::UpdateFromNodeState(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FHomebaseNodeState& CallFunc_TryGetSkillTreeNodeState_OutNodeState, bool CallFunc_TryGetSkillTreeNodeState_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromNodeState");

	Params::UDefaultSkillNode_C_UpdateFromNodeState_Params Parms;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.CallFunc_TryGetSkillTreeNodeState_OutNodeState = CallFunc_TryGetSkillTreeNodeState_OutNodeState;
	Parms.CallFunc_TryGetSkillTreeNodeState_ReturnValue = CallFunc_TryGetSkillTreeNodeState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::Construct()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "Construct");

	Params::UDefaultSkillNode_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.HandleSkillTreeNodeStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::HandleSkillTreeNodeStateChanged()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "HandleSkillTreeNodeStateChanged");

	Params::UDefaultSkillNode_C_HandleSkillTreeNodeStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "PreConstruct");

	Params::UDefaultSkillNode_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "OnUnhovered");

	Params::UDefaultSkillNode_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::OnHovered()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "OnHovered");

	Params::UDefaultSkillNode_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::OnSelected()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "OnSelected");

	Params::UDefaultSkillNode_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDefaultSkillNode_C::OnDeselected()
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "OnDeselected");

	Params::UDefaultSkillNode_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue12                               (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue123                              (NoDestructor)
// struct FHomebaseNode               CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData               ()
// bool                               CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue12, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue123, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultSkillNode_C", "ExecuteUbergraph_DefaultSkillNode");

	Params::UDefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.CallFunc_K2_SetTimer_ReturnValue12 = CallFunc_K2_SetTimer_ReturnValue12;
	Parms.CallFunc_K2_SetTimer_ReturnValue123 = CallFunc_K2_SetTimer_ReturnValue123;
	Parms.CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData = CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData;
	Parms.CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue = CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
