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

// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObject_Generic_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObject_Generic.B_HeldObject_Generic_C.ReceiveBeginPlay");

	AB_HeldObject_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeldObject_Generic_C::ExecuteUbergraph_B_HeldObject_Generic(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic");

	AB_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
