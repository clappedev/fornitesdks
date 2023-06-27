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

// Function LetoBorder.LetoBorder_C.UpdateBorderWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          HalfBorderWidth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULetoBorder_C::UpdateBorderWidth(float HalfBorderWidth)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LetoBorder.LetoBorder_C.UpdateBorderWidth");

	ULetoBorder_C_UpdateBorderWidth_Params params;
	params.HalfBorderWidth = HalfBorderWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULetoBorder_C::ExecuteUbergraph_LetoBorder(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder");

	ULetoBorder_C_ExecuteUbergraph_LetoBorder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
