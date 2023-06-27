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

// Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.HandleGridSnapUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C::HandleGridSnapUpdates(const struct FVector& NewLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.HandleGridSnapUpdates");

	ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C_HandleGridSnapUpdates_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ReceiveDestroyed");

	ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ExecuteUbergraph_BP_ProjectileTrajectory_SnapToGrid_BirthdayBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C::ExecuteUbergraph_BP_ProjectileTrajectory_SnapToGrid_BirthdayBox(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_SnapToGrid_BirthdayBox.BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C.ExecuteUbergraph_BP_ProjectileTrajectory_SnapToGrid_BirthdayBox");

	ABP_ProjectileTrajectory_SnapToGrid_BirthdayBox_C_ExecuteUbergraph_BP_ProjectileTrajectory_SnapToGrid_BirthdayBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
