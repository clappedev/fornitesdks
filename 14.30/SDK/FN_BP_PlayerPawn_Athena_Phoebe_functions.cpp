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

// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                 LaunchVelocity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bXYOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZOverride                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_Athena_Phoebe_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched");

	ABP_PlayerPawn_Athena_Phoebe_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPawn_Athena_Phoebe_C::ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe");

	ABP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
