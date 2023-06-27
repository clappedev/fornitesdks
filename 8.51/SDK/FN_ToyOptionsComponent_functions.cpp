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

// Function ToyOptionsComponent.ToyOptionsComponent_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UToyOptionsComponent_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsComponent.ToyOptionsComponent_C.BlueprintOnLocalInteract");

	UToyOptionsComponent_C_BlueprintOnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ToyOptionsComponent.ToyOptionsComponent_C.OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToyOptionsComponent_C::OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsComponent.ToyOptionsComponent_C.OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27");

	UToyOptionsComponent_C_OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsComponent.ToyOptionsComponent_C.DisplayOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       InteractingPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToyOptionsComponent_C::DisplayOptions(class APlayerController* InteractingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsComponent.ToyOptionsComponent_C.DisplayOptions");

	UToyOptionsComponent_C_DisplayOptions_Params params;
	params.InteractingPlayer = InteractingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsComponent.ToyOptionsComponent_C.ExecuteUbergraph_ToyOptionsComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToyOptionsComponent_C::ExecuteUbergraph_ToyOptionsComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsComponent.ToyOptionsComponent_C.ExecuteUbergraph_ToyOptionsComponent");

	UToyOptionsComponent_C_ExecuteUbergraph_ToyOptionsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
