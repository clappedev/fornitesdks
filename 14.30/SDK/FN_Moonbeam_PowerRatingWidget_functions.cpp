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

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::SetBackgroundColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor");

	UMoonbeam_PowerRatingWidget_C_SetBackgroundColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::UpdateWidgetState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState");

	UMoonbeam_PowerRatingWidget_C_UpdateWidgetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct");

	UMoonbeam_PowerRatingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            BasePowerRating                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::OnBasePowerRatingUpdated(int BasePowerRating)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated");

	UMoonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated_Params params;
	params.BasePowerRating = BasePowerRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            TeamPowerRating                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::OnTeamPowerRatingUpdated(int TeamPowerRating)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated");

	UMoonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated_Params params;
	params.TeamPowerRating = TeamPowerRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          BaseRatingProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TeamRatingProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated");

	UMoonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated_Params params;
	params.BaseRatingProgress = BaseRatingProgress;
	params.TeamRatingProgress = TeamRatingProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct");

	UMoonbeam_PowerRatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged
// (Event, Protected, BlueprintEvent)

void UMoonbeam_PowerRatingWidget_C::OnTeamMembershipChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged");

	UMoonbeam_PowerRatingWidget_C_OnTeamMembershipChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoonbeam_PowerRatingWidget_C::ExecuteUbergraph_Moonbeam_PowerRatingWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget");

	UMoonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
