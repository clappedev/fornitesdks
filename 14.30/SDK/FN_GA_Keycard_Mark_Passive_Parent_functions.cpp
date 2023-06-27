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

// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.InitAbility
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Keycard_Mark_Passive_Parent_C::InitAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.InitAbility");

	UGA_Keycard_Mark_Passive_Parent_C_InitAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.OnSync_5619E23F4D1F97AAF6EB6C8A62F04951
// (BlueprintCallable, BlueprintEvent)

void UGA_Keycard_Mark_Passive_Parent_C::OnSync_5619E23F4D1F97AAF6EB6C8A62F04951()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.OnSync_5619E23F4D1F97AAF6EB6C8A62F04951");

	UGA_Keycard_Mark_Passive_Parent_C_OnSync_5619E23F4D1F97AAF6EB6C8A62F04951_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Keycard_Mark_Passive_Parent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.K2_ActivateAbility");

	UGA_Keycard_Mark_Passive_Parent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.DrawTrailToVault
// (BlueprintCallable, BlueprintEvent)

void UGA_Keycard_Mark_Passive_Parent_C::DrawTrailToVault()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.DrawTrailToVault");

	UGA_Keycard_Mark_Passive_Parent_C_DrawTrailToVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ReplicatedDrawTrailToVault
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Keycard_Mark_Passive_Parent_C::ReplicatedDrawTrailToVault(const struct FRotator& Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ReplicatedDrawTrailToVault");

	UGA_Keycard_Mark_Passive_Parent_C_ReplicatedDrawTrailToVault_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Keycard_Mark_Passive_Parent_C::ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent");

	UGA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
