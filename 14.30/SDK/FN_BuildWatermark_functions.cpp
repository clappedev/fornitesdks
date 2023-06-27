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

// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Construct");

	UBuildWatermark_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::HandlePartyJoined()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePartyJoined");

	UBuildWatermark_C_HandlePartyJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Destruct");

	UBuildWatermark_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBuildWatermark_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged");

	UBuildWatermark_C_HandlePlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark");

	UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
