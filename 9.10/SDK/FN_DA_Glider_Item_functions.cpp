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

// Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOnGround                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADA_Glider_Item_C::IsOnGround(bool* bOnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround");

	ADA_Glider_Item_C_IsOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOnGround != nullptr)
		*bOnGround = params.bOnGround;
}


// Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADA_Glider_Item_C::RaiseUsageError(struct FGameplayTagContainer FailedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError");

	ADA_Glider_Item_C_RaiseUsageError_Params params;
	params.FailedReason = FailedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Glider_Item_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger");

	ADA_Glider_Item_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Glider_Item_C::ExecuteUbergraph_DA_Glider_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item");

	ADA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
