// Fortnite (8.51) SDK
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

// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.On_BorderTouch_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaBannerSelectModal_C::On_BorderTouch_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.On_BorderTouch_MouseButtonDown_1");

	UAthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleNextAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandleNextAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleNextAction");

	UAthenaBannerSelectModal_C_HandleNextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandlePreviousAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandlePreviousAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandlePreviousAction");

	UAthenaBannerSelectModal_C_HandlePreviousAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBannerSelectModal_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers");

	UAthenaBannerSelectModal_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::HandleCloseAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction");

	UAthenaBannerSelectModal_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBannerSelectModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct");

	UAthenaBannerSelectModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent(struct FName IconId, struct FName ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent");

	UAthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaBannerSelectModal_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnDeactivated");

	UAthenaBannerSelectModal_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaBannerSelectModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.OnActivated");

	UAthenaBannerSelectModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Close
// (BlueprintCallable, BlueprintEvent)

void UAthenaBannerSelectModal_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Close");

	UAthenaBannerSelectModal_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBannerSelectModal_C::ExecuteUbergraph_AthenaBannerSelectModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal");

	UAthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
