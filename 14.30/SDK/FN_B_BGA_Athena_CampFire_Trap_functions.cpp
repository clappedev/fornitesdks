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

// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBuildingInitializationReason> InitializationReason           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_CampFire_Trap_C::OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized");

	AB_BGA_Athena_CampFire_Trap_C_OnBuildingActorInitialized_Params params;
	params.InitializationReason = InitializationReason;
	params.BuildingPersistentState = BuildingPersistentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.ExecuteUbergraph_B_BGA_Athena_CampFire_Trap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_CampFire_Trap_C::ExecuteUbergraph_B_BGA_Athena_CampFire_Trap(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.ExecuteUbergraph_B_BGA_Athena_CampFire_Trap");

	AB_BGA_Athena_CampFire_Trap_C_ExecuteUbergraph_B_BGA_Athena_CampFire_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
