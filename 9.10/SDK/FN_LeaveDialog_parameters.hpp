#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LeaveDialog.LeaveDialog_C.OnMouseButtonDownTapToClose
struct ULeaveDialog_C_OnMouseButtonDownTapToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LeaveDialog.LeaveDialog_C.Construct
struct ULeaveDialog_C_Construct_Params
{
};

// Function LeaveDialog.LeaveDialog_C.ExecuteUbergraph_LeaveDialog
struct ULeaveDialog_C_ExecuteUbergraph_LeaveDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaveDialog.LeaveDialog_C.OnLeaveDialogClosed__DelegateSignature
struct ULeaveDialog_C_OnLeaveDialogClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
