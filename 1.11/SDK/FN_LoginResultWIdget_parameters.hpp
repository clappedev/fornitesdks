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

// Function LoginResultWIdget.LoginResultWIdget_C.SetResultsData
struct ULoginResultWIdget_C_SetResultsData_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowError;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginResultWIdget.LoginResultWIdget_C.SetDescription
struct ULoginResultWIdget_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginResultWIdget.LoginResultWIdget_C.SetTitle
struct ULoginResultWIdget_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowError;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginResultWIdget.LoginResultWIdget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct ULoginResultWIdget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginResultWIdget.LoginResultWIdget_C.Construct
struct ULoginResultWIdget_C_Construct_Params
{
};

// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
struct ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginResultWIdget.LoginResultWIdget_C.OnResultConfirmed__DelegateSignature
struct ULoginResultWIdget_C_OnResultConfirmed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
