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

// Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerRatingWidget_C::UpdateWidgetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState");

	UPowerRatingWidget_C_UpdateWidgetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerRatingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.Construct");

	UPowerRatingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            BasePowerRating                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingWidget_C::OnBasePowerRatingUpdated(int BasePowerRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated");

	UPowerRatingWidget_C_OnBasePowerRatingUpdated_Params params;
	params.BasePowerRating = BasePowerRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            TeamPowerRating                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingWidget_C::OnTeamPowerRatingUpdated(int TeamPowerRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated");

	UPowerRatingWidget_C_OnTeamPowerRatingUpdated_Params params;
	params.TeamPowerRating = TeamPowerRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          BaseRatingProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TeamRatingProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated");

	UPowerRatingWidget_C_OnPowerRatingProgressUpdated_Params params;
	params.BaseRatingProgress = BaseRatingProgress;
	params.TeamRatingProgress = TeamRatingProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct");

	UPowerRatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged
// (Event, Protected, BlueprintEvent)

void UPowerRatingWidget_C::OnTeamMembershipChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged");

	UPowerRatingWidget_C_OnTeamMembershipChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerRatingWidget_C::ExecuteUbergraph_PowerRatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget");

	UPowerRatingWidget_C_ExecuteUbergraph_PowerRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
