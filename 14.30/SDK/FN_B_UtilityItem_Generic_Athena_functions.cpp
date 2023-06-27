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

// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_UtilityItem_Generic_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ReceiveBeginPlay");

	AB_UtilityItem_Generic_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Targeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Targeting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_UtilityItem_Generic_Athena_C::ThrowConsumableHudActionKey_Targeting(bool Targeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Targeting");

	AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Targeting_Params params;
	params.Targeting = Targeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Visible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_UtilityItem_Generic_Athena_C::ThrowConsumableHudActionKey_Visible(bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Visible");

	AB_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Visible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ExecuteUbergraph_B_UtilityItem_Generic_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_UtilityItem_Generic_Athena_C::ExecuteUbergraph_B_UtilityItem_Generic_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ExecuteUbergraph_B_UtilityItem_Generic_Athena");

	AB_UtilityItem_Generic_Athena_C_ExecuteUbergraph_B_UtilityItem_Generic_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
