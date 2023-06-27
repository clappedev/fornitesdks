// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::Set_Scroll_Box_to_Nav_Scroll_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget");

	USquadSlotDetailsPanel_C_Set_Scroll_Box_to_Nav_Scroll_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<EFortSquadSlottingRestrictionReason> Reasons                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void USquadSlotDetailsPanel_C::GetRestrictionReasonsAsText(TArray<EFortSquadSlottingRestrictionReason>* Reasons, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText");

	USquadSlotDetailsPanel_C_GetRestrictionReasonsAsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reasons != nullptr)
		*Reasons = params.Reasons;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::UpdateSkillTreeButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility");

	USquadSlotDetailsPanel_C_UpdateSkillTreeButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP");

	USquadSlotDetailsPanel_C_HandleDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotStateChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP");

	USquadSlotDetailsPanel_C_HandleSquadSlotStateChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadSlotDetailsPanel_C::BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	USquadSlotDetailsPanel_C_BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct");

	USquadSlotDetailsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP");

	USquadSlotDetailsPanel_C_HandleSquadSlotRestrictionFactorsChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USquadSlotDetailsPanel_C::ExecuteUbergraph_SquadSlotDetailsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel");

	USquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
