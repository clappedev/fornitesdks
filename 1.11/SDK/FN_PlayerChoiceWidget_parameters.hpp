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

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText
struct UPlayerChoiceWidget_C_CreateButtonAndSetText_Params
{
	struct FChoiceDataEntry                            ChoiceData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ChoiceID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerChoiceButtonWidget_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_1
struct UPlayerChoiceWidget_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice3_Text_1
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice3_Text_1_Params
{
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice2_Text_1
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice2_Text_1_Params
{
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice1_Text_1
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice1_Text_1_Params
{
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Construct
struct UPlayerChoiceWidget_C_Construct_Params
{
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected
struct UPlayerChoiceWidget_C_ChoiceSelected_Params
{
	int                                                ChoiceID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices
struct UPlayerChoiceWidget_C_SetChoices_Params
{
	struct FChoiceData*                                ChoiceItems;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Destruct
struct UPlayerChoiceWidget_C_Destruct_Params
{
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget
struct UPlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature
struct UPlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature_Params
{
	int                                                SelectedChoice;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
