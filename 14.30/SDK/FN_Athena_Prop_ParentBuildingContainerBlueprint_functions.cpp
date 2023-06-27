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

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimeOfDayBlueprintDefaultVariables OutVariables                   (Parm, OutParm)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_GetTimeOfDayBlueprintDefaultVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVariables != nullptr)
		*OutVariables = params.OutVariables;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>     CurrentDayPhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>     PreviousDayPhase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtCreation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::Loop_Animation_Curve()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_Loop_Animation_Curve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortBounceData         Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnBounceAnimationUpdate(const struct FFortBounceData& Data)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnSetSearched()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_OnSetSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_ParentBuildingContainerBlueprint_C::ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint");

	AAthena_Prop_ParentBuildingContainerBlueprint_C_ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
