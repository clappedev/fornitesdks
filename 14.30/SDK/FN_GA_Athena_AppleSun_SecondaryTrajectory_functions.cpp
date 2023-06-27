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

// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::K2_CommitExecute()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.K2_CommitExecute");

	UGA_Athena_AppleSun_SecondaryTrajectory_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.UpdateTrajectory");

	UGA_Athena_AppleSun_SecondaryTrajectory_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.Remove Item?
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::Remove_Item_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.Remove Item?");

	UGA_Athena_AppleSun_SecondaryTrajectory_C_Remove_Item__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_AppleSun_SecondaryTrajectory_C::ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_SecondaryTrajectory.GA_Athena_AppleSun_SecondaryTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory");

	UGA_Athena_AppleSun_SecondaryTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_SecondaryTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
