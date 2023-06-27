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

// Function LowTowerRuntime.FortHardyComponent_Telemetry.SetExtractionReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EHardyExtractionReason         Reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortHardyComponent_Telemetry::SetExtractionReason(EHardyExtractionReason Reason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortHardyComponent_Telemetry.SetExtractionReason");

	UFortHardyComponent_Telemetry_SetExtractionReason_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LowTowerRuntime.FortLaurelAnimInstance.SetLaurelInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInHasItemInInventory          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInPawnIsDestroyingBuildingForNav (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHasPawnGoal                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InGoalActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortLaurelAnimInstance::SetLaurelInformation(bool bInHasItemInInventory, bool bInPawnIsDestroyingBuildingForNav, bool bInHasPawnGoal, class AActor* InGoalActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortLaurelAnimInstance.SetLaurelInformation");

	UFortLaurelAnimInstance_SetLaurelInformation_Params params;
	params.bInHasItemInInventory = bInHasItemInInventory;
	params.bInPawnIsDestroyingBuildingForNav = bInPawnIsDestroyingBuildingForNav;
	params.bInHasPawnGoal = bInHasPawnGoal;
	params.InGoalActor = InGoalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LowTowerRuntime.FortLaurelAnimInstance.SetAnimInstanceInformation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortLaurelAnimInstance::SetAnimInstanceInformation(bool bInIsActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortLaurelAnimInstance.SetAnimInstanceInformation");

	UFortLaurelAnimInstance_SetAnimInstanceInformation_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetLaurelType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELaurelType                    Type                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortLaurelComponent_Telemetry::SetLaurelType(ELaurelType Type)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetLaurelType");

	UFortLaurelComponent_Telemetry_SetLaurelType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetExtractionReason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELaurelExtractionReason        Reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortLaurelComponent_Telemetry::SetExtractionReason(ELaurelExtractionReason Reason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetExtractionReason");

	UFortLaurelComponent_Telemetry_SetExtractionReason_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LowTowerRuntime.FortLaurelComponent_Telemetry.OnDropAllItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ELaurelDropItemReason> DropItemReason                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortLaurelComponent_Telemetry::OnDropAllItems(TEnumAsByte<ELaurelDropItemReason> DropItemReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LowTowerRuntime.FortLaurelComponent_Telemetry.OnDropAllItems");

	UFortLaurelComponent_Telemetry_OnDropAllItems_Params params;
	params.DropItemReason = DropItemReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
