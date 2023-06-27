#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ModifyNumberOfTiersToBuy
struct UAthenaSeasonLevelConfirmationModal_C_ModifyNumberOfTiersToBuy_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GenerateItemWidgets
struct UAthenaSeasonLevelConfirmationModal_C_GenerateItemWidgets_Params
{
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetNumberOfTiersBuying
struct UAthenaSeasonLevelConfirmationModal_C_GetNumberOfTiersBuying_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetVBuckPrice
struct UAthenaSeasonLevelConfirmationModal_C_GetVBuckPrice_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetRewards
struct UAthenaSeasonLevelConfirmationModal_C_GetRewards_Params
{
	TArray<class UFortItem*>                           Output_Get;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.GetHeaderText
struct UAthenaSeasonLevelConfirmationModal_C_GetHeaderText_Params
{
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.Setup
struct UAthenaSeasonLevelConfirmationModal_C_Setup_Params
{
	class UFortSeasonPassLevelInfo*                    Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<int, class UFortSeasonPassLevelInfo*>         AllLevels;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.InitWidgets
struct UAthenaSeasonLevelConfirmationModal_C_InitWidgets_Params
{
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.OnPurchaseFinished
struct UAthenaSeasonLevelConfirmationModal_C_OnPurchaseFinished_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationModal_C_BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.BindInput
struct UAthenaSeasonLevelConfirmationModal_C_BindInput_Params
{
};

// Function AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationModal
struct UAthenaSeasonLevelConfirmationModal_C_ExecuteUbergraph_AthenaSeasonLevelConfirmationModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
