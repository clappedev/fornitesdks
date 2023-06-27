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

// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius");

	AAOE_Commando_KeepOutExplosion_C_OnRep_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAOE_Commando_KeepOutExplosion_C::Send_Info(float Radius)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info");

	AAOE_Commando_KeepOutExplosion_C_Send_Info_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed");

	AAOE_Commando_KeepOutExplosion_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay");

	AAOE_Commando_KeepOutExplosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	AAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
