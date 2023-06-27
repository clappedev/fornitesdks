// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ModifyNumberOfTiersToBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::ModifyNumberOfTiersToBuy(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ModifyNumberOfTiersToBuy");

	UAthenaSeasonLevelConfirmationModal_C_ModifyNumberOfTiersToBuy_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GenerateItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationModal_C::GenerateItemWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GenerateItemWidgets");

	UAthenaSeasonLevelConfirmationModal_C_GenerateItemWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetNumberOfTiersBuying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAthenaSeasonLevelConfirmationModal_C::GetNumberOfTiersBuying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetNumberOfTiersBuying");

	UAthenaSeasonLevelConfirmationModal_C_GetNumberOfTiersBuying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetVBuckPrice
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAthenaSeasonLevelConfirmationModal_C::GetVBuckPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetVBuckPrice");

	UAthenaSeasonLevelConfirmationModal_C_GetVBuckPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Output_Get                     (Parm, OutParm, ZeroConstructor)

void UAthenaSeasonLevelConfirmationModal_C::GetRewards(TArray<class UFortItem*>* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetRewards");

	UAthenaSeasonLevelConfirmationModal_C_GetRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetHeaderText
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)

void UAthenaSeasonLevelConfirmationModal_C::GetHeaderText(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetHeaderText");

	UAthenaSeasonLevelConfirmationModal_C_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.Setup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo* Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<int, class UFortSeasonPassLevelInfo*> AllLevels                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::Setup(class UFortSeasonPassLevelInfo* Level, int MaxLevel, TMap<int, class UFortSeasonPassLevelInfo*>* AllLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.Setup");

	UAthenaSeasonLevelConfirmationModal_C_Setup_Params params;
	params.Level = Level;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllLevels != nullptr)
		*AllLevels = params.AllLevels;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.InitWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationModal_C::InitWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.InitWidgets");

	UAthenaSeasonLevelConfirmationModal_C_InitWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.OnPurchaseFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::OnPurchaseFinished(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.OnPurchaseFinished");

	UAthenaSeasonLevelConfirmationModal_C_OnPurchaseFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationModal_C_BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BindInput
// (BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationModal_C::BindInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BindInput");

	UAthenaSeasonLevelConfirmationModal_C_BindInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationModal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationModal_C::ExecuteUbergraph_AthenaSeasonLevelConfirmationModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationModal");

	UAthenaSeasonLevelConfirmationModal_C_ExecuteUbergraph_AthenaSeasonLevelConfirmationModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
