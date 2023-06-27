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

// Function DivisionDetailsProgress.DivisionDetailsProgress_C.OnSetInProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsProgress_C::OnSetInProgress(float NewPercent, bool bIsInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsProgress.DivisionDetailsProgress_C.OnSetInProgress");

	UDivisionDetailsProgress_C_OnSetInProgress_Params params;
	params.NewPercent = NewPercent;
	params.bIsInProgress = bIsInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionDetailsProgress.DivisionDetailsProgress_C.ExecuteUbergraph_DivisionDetailsProgress
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsProgress_C::ExecuteUbergraph_DivisionDetailsProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsProgress.DivisionDetailsProgress_C.ExecuteUbergraph_DivisionDetailsProgress");

	UDivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
