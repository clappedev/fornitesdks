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

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.GetTimeOfDayBlueprintDefaultVariables
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimeOfDayBlueprintDefaultVariables OutVariables                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AParent_BuildingPropActor_C::GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.GetTimeOfDayBlueprintDefaultVariables");

	AParent_BuildingPropActor_C_GetTimeOfDayBlueprintDefaultVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVariables != nullptr)
		*OutVariables = params.OutVariables;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Call Animation Curve Again
// (Public, BlueprintCallable, BlueprintEvent)

void AParent_BuildingPropActor_C::Call_Animation_Curve_Again()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Call Animation Curve Again");

	AParent_BuildingPropActor_C_Call_Animation_Curve_Again_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Add to TOD Light Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*         NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void AParent_BuildingPropActor_C::Add_to_TOD_Light_Array(class ULightComponent** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Add to TOD Light Array");

	AParent_BuildingPropActor_C_Add_to_TOD_Light_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewItem != nullptr)
		*NewItem = params.NewItem;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set  MID Values For Lights
// (Public, BlueprintCallable, BlueprintEvent)

void AParent_BuildingPropActor_C::Set__MID_Values_For_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set  MID Values For Lights");

	AParent_BuildingPropActor_C_Set__MID_Values_For_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Previous_to_Current_Day_Phase_Alpha (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParent_BuildingPropActor_C::Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters");

	AParent_BuildingPropActor_C_Set_Light_parameters_Params params;
	params.Previous_to_Current_Day_Phase_Alpha = Previous_to_Current_Day_Phase_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AParent_BuildingPropActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript");

	AParent_BuildingPropActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>     CurrentDayPhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>     PreviousDayPhase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtCreation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParent_BuildingPropActor_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged");

	AParent_BuildingPropActor_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParent_BuildingPropActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay");

	AParent_BuildingPropActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortBounceData         Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AParent_BuildingPropActor_C::OnBounceAnimationUpdate(struct FFortBounceData Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate");

	AParent_BuildingPropActor_C_OnBounceAnimationUpdate_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Loop Animation Curve
// (BlueprintCallable, BlueprintEvent)

void AParent_BuildingPropActor_C::Loop_Animation_Curve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Loop Animation Curve");

	AParent_BuildingPropActor_C_Loop_Animation_Curve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParent_BuildingPropActor_C::ExecuteUbergraph_Parent_BuildingPropActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor");

	AParent_BuildingPropActor_C_ExecuteUbergraph_Parent_BuildingPropActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
