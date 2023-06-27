// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NetDebugContainer.NetDebugContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNetDebugContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugContainer.NetDebugContainer_C.Construct");

	UNetDebugContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESlateVisibility*              InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNetDebugContainer_C::OnVisibilitySetEvent(ESlateVisibility* InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent");

	UNetDebugContainer_C_OnVisibilitySetEvent_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNetDebugContainer_C::ExecuteUbergraph_NetDebugContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer");

	UNetDebugContainer_C_ExecuteUbergraph_NetDebugContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
