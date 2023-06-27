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

// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)

void AStoreCardReveal_Parent_C::InitiatePinata()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata");

	AStoreCardReveal_Parent_C_InitiatePinata_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent");

	AStoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
