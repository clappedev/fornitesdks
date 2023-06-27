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

// Function B_HookGunRope.B_HookGunRope_C.Reel In__FinishedFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Reel_In__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.Reel In__FinishedFunc");

	AB_HookGunRope_C_Reel_In__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.Reel In__UpdateFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Reel_In__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.Reel In__UpdateFunc");

	AB_HookGunRope_C_Reel_In__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.Tight__FinishedFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Tight__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.Tight__FinishedFunc");

	AB_HookGunRope_C_Tight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.Tight__UpdateFunc
// (BlueprintEvent)

void AB_HookGunRope_C::Tight__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.Tight__UpdateFunc");

	AB_HookGunRope_C_Tight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.End Reel
// (BlueprintCallable, BlueprintEvent)

void AB_HookGunRope_C::End_Reel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.End Reel");

	AB_HookGunRope_C_End_Reel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.TightenRope
// (BlueprintCallable, BlueprintEvent)

void AB_HookGunRope_C::TightenRope()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.TightenRope");

	AB_HookGunRope_C_TightenRope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HookGunRope_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.ReceiveBeginPlay");

	AB_HookGunRope_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_HookGunRope_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.ReceiveDestroyed");

	AB_HookGunRope_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HookGunRope.B_HookGunRope_C.ExecuteUbergraph_B_HookGunRope
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HookGunRope_C::ExecuteUbergraph_B_HookGunRope(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HookGunRope.B_HookGunRope_C.ExecuteUbergraph_B_HookGunRope");

	AB_HookGunRope_C_ExecuteUbergraph_B_HookGunRope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
