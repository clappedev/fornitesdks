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

// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Growth__FinishedFunc
// (BlueprintEvent)

void ABP_Curie_IceBlock_C::Growth__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Growth__FinishedFunc");

	ABP_Curie_IceBlock_C_Growth__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Growth__UpdateFunc
// (BlueprintEvent)

void ABP_Curie_IceBlock_C::Growth__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Growth__UpdateFunc");

	ABP_Curie_IceBlock_C_Growth__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Shrink__FinishedFunc
// (BlueprintEvent)

void ABP_Curie_IceBlock_C::Shrink__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Shrink__FinishedFunc");

	ABP_Curie_IceBlock_C_Shrink__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Shrink__UpdateFunc
// (BlueprintEvent)

void ABP_Curie_IceBlock_C::Shrink__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.Shrink__UpdateFunc");

	ABP_Curie_IceBlock_C_Shrink__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Curie_IceBlock_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.ReceiveBeginPlay");

	ABP_Curie_IceBlock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.HandleShrink
// (BlueprintCallable, BlueprintEvent)

void ABP_Curie_IceBlock_C::HandleShrink()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.HandleShrink");

	ABP_Curie_IceBlock_C_HandleShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.ExecuteUbergraph_BP_Curie_IceBlock
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Curie_IceBlock_C::ExecuteUbergraph_BP_Curie_IceBlock(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Curie_IceBlock.BP_Curie_IceBlock_C.ExecuteUbergraph_BP_Curie_IceBlock");

	ABP_Curie_IceBlock_C_ExecuteUbergraph_BP_Curie_IceBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
