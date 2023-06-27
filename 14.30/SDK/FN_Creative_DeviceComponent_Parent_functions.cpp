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

// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Activated
// (Public, BlueprintCallable, BlueprintEvent)

void UCreative_DeviceComponent_Parent_C::Owning_Actor_Activated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Activated");

	UCreative_DeviceComponent_Parent_C_Owning_Actor_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Initialized
// (Public, BlueprintCallable, BlueprintEvent)

void UCreative_DeviceComponent_Parent_C::Owning_Actor_Initialized()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Initialized");

	UCreative_DeviceComponent_Parent_C_Owning_Actor_Initialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCreative_DeviceComponent_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ReceiveBeginPlay");

	UCreative_DeviceComponent_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ExecuteUbergraph_Creative_DeviceComponent_Parent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_DeviceComponent_Parent_C::ExecuteUbergraph_Creative_DeviceComponent_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ExecuteUbergraph_Creative_DeviceComponent_Parent");

	UCreative_DeviceComponent_Parent_C_ExecuteUbergraph_Creative_DeviceComponent_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
