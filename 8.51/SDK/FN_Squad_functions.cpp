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

// Function Squad.Squad_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquad_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Squad.Squad_C.OnLoaded");

	USquad_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Squad.Squad_C.OnSquadAssigned
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAthenaTeamDisplayInfo  SquadStyle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquad_C::OnSquadAssigned(struct FAthenaTeamDisplayInfo SquadStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Squad.Squad_C.OnSquadAssigned");

	USquad_C_OnSquadAssigned_Params params;
	params.SquadStyle = SquadStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Squad.Squad_C.OnSquadIsEmptyChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSquadIsEmpty                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquad_C::OnSquadIsEmptyChanged(bool bSquadIsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Squad.Squad_C.OnSquadIsEmptyChanged");

	USquad_C_OnSquadIsEmptyChanged_Params params;
	params.bSquadIsEmpty = bSquadIsEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Squad.Squad_C.ExecuteUbergraph_Squad
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquad_C::ExecuteUbergraph_Squad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Squad.Squad_C.ExecuteUbergraph_Squad");

	USquad_C_ExecuteUbergraph_Squad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
