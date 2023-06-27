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

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetHitActorsFromEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEventData      GameplayEventData              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class AActor*> UGA_WaffleTruck_TrackingPistol_Indicator_C::GetHitActorsFromEventData(const struct FGameplayEventData& GameplayEventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetHitActorsFromEventData");

	UGA_WaffleTruck_TrackingPistol_Indicator_C_GetHitActorsFromEventData_Params params;
	params.GameplayEventData = GameplayEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortPlayerController* UGA_WaffleTruck_TrackingPistol_Indicator_C::GetAvatarAsFortPlayerController()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPlayerController");

	UGA_WaffleTruck_TrackingPistol_Indicator_C_GetAvatarAsFortPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPawn*               AsFort_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_WaffleTruck_TrackingPistol_Indicator_C::GetAvatarAsFortPawn(class AFortPawn** AsFort_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPawn");

	UGA_WaffleTruck_TrackingPistol_Indicator_C_GetAvatarAsFortPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Pawn != nullptr)
		*AsFort_Pawn = params.AsFort_Pawn;
}


// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_WaffleTruck_TrackingPistol_Indicator_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.K2_ActivateAbilityFromEvent");

	UGA_WaffleTruck_TrackingPistol_Indicator_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_WaffleTruck_TrackingPistol_Indicator_C::ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator");

	UGA_WaffleTruck_TrackingPistol_Indicator_C_ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
