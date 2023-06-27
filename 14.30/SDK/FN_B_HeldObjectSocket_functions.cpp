// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_HeldObject_Parent_C*  HeldObject_Input               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AB_HeldObject_Parent_C*  HeldObject_Output              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_HeldObjectSocket_C::ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject");

	AB_HeldObjectSocket_C_ValidateHeldObject_Params params;
	params.HeldObject_Input = HeldObject_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeldObject_Output != nullptr)
		*HeldObject_Output = params.HeldObject_Output;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::OnRep_SocketIsFilled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled");

	AB_HeldObjectSocket_C_OnRep_SocketIsFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObjectSocket_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay");

	AB_HeldObjectSocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_HeldObjectSocket_C::OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject");

	AB_HeldObjectSocket_C_OnHitHeldObject_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::EventOnSocketFilled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled");

	AB_HeldObjectSocket_C_EventOnSocketFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocket_C::EventOnSocketEmptied()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied");

	AB_HeldObjectSocket_C_EventOnSocketEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeldObjectSocket_C::ExecuteUbergraph_B_HeldObjectSocket(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket");

	AB_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
