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

// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSeasonBPTrackerSimpleWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnAccountInfoChanged");

	UAthenaSeasonBPTrackerSimpleWidget_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonBPTrackerSimpleWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnInitialized");

	UAthenaSeasonBPTrackerSimpleWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonBPTrackerSimpleWidget_C::ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget");

	UAthenaSeasonBPTrackerSimpleWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
