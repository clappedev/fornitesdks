// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.OnActionCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckPlayerBanStatus_C::OnActionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.OnActionCompleted");

	ACheckPlayerBanStatus_C_OnActionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ShowBan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckPlayerBanStatus_C::ShowBan()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ShowBan");

	ACheckPlayerBanStatus_C_ShowBan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckPlayerBanStatus_C::Execute(struct FFortScriptedActionParams Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.Execute");

	ACheckPlayerBanStatus_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ExecuteUbergraph_CheckPlayerBanStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckPlayerBanStatus_C::ExecuteUbergraph_CheckPlayerBanStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ExecuteUbergraph_CheckPlayerBanStatus");

	ACheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
