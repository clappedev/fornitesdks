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

// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalSquadDisplay_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded");

	UMinimalSquadDisplay_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAthenaTeamDisplayInfo  SquadStyle                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMinimalSquadDisplay_C::OnSquadAssigned(struct FAthenaTeamDisplayInfo SquadStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned");

	UMinimalSquadDisplay_C_OnSquadAssigned_Params params;
	params.SquadStyle = SquadStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalSquadDisplay_C::ExecuteUbergraph_MinimalSquadDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay");

	UMinimalSquadDisplay_C_ExecuteUbergraph_MinimalSquadDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
