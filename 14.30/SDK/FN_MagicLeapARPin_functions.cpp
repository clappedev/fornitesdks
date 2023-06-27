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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// (Final, Native, Public, BlueprintCallable)

void UMagicLeapARPinComponent::UnPin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");

	UMagicLeapARPinComponent_UnPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	UMagicLeapARPinComponent_PinSceneComponent_Params params;
	params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");

	UMagicLeapARPinComponent_PinRestoredOrSynced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToPin                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	UMagicLeapARPinComponent_PinActor_Params params;
	params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bRestoredOrSynced              (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params;
	params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::IsPinned()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");

	UMagicLeapARPinComponent_IsPinned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMagicLeapARPinState    State                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	UMagicLeapARPinComponent_GetPinState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	UMagicLeapARPinComponent_GetPinnedPinID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PinID != nullptr)
		*PinID = params.PinID;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMagicLeapARPinSaveGame* PinDataClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UMagicLeapARPinSaveGame* PinDataClass)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	UMagicLeapARPinComponent_GetPinData_Params params;
	params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapARPinFunctionLibrary::STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid");

	UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetNumAvailableARPins(int* Count)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SearchPoint                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuid                   PinID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin");

	UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PinID != nullptr)
		*PinID = params.PinID;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumRequested                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGuid>           Pins                           (Parm, OutParm, ZeroConstructor)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params;
	params.NumRequested = NumRequested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinState    State                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMagicLeapARPinFunctionLibrary::STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString");

	UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinID                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FMagicLeapARPinState    State                          (Parm, OutParm)
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetARPinState(const struct FGuid& PinID, struct FMagicLeapARPinState* State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState");

	UMagicLeapARPinFunctionLibrary_GetARPinState_Params params;
	params.PinID = PinID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinID                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinID, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params;
	params.PinID = PinID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PinID                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params;
	params.PinID = PinID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker");

	UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EMagicLeapPassableWorldError   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker");

	UMagicLeapARPinFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapARPinFunctionLibrary::STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
