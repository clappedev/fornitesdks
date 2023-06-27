// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeaveDialog.LeaveDialog_C.OnMouseButtonDownTapToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply ULeaveDialog_C::OnMouseButtonDownTapToClose(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveDialog.LeaveDialog_C.OnMouseButtonDownTapToClose");

	ULeaveDialog_C_OnMouseButtonDownTapToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LeaveDialog.LeaveDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaveDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveDialog.LeaveDialog_C.Construct");

	ULeaveDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveDialog.LeaveDialog_C.ExecuteUbergraph_LeaveDialog
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveDialog_C::ExecuteUbergraph_LeaveDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveDialog.LeaveDialog_C.ExecuteUbergraph_LeaveDialog");

	ULeaveDialog_C_ExecuteUbergraph_LeaveDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveDialog.LeaveDialog_C.OnLeaveDialogClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaveDialog_C::OnLeaveDialogClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveDialog.LeaveDialog_C.OnLeaveDialogClosed__DelegateSignature");

	ULeaveDialog_C_OnLeaveDialogClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
