// Fortnite (9.1) SDK
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

// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProfileStatsWeaponsSubScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleBack");

	UProfileStatsWeaponsSubScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileStatsWeaponsSubScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.Construct");

	UProfileStatsWeaponsSubScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleStatViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaBaseStatView*     StatView                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsWeaponsSubScreen_C::HandleStatViewChanged(class UAthenaBaseStatView* StatView)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleStatViewChanged");

	UProfileStatsWeaponsSubScreen_C_HandleStatViewChanged_Params params;
	params.StatView = StatView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.ExecuteUbergraph_ProfileStatsWeaponsSubScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsWeaponsSubScreen_C::ExecuteUbergraph_ProfileStatsWeaponsSubScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.ExecuteUbergraph_ProfileStatsWeaponsSubScreen");

	UProfileStatsWeaponsSubScreen_C_ExecuteUbergraph_ProfileStatsWeaponsSubScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
