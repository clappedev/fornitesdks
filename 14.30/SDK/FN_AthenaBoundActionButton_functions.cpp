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

// Function AthenaBoundActionButton.AthenaBoundActionButton_C.UpdateInputActionIconSize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBoundActionButton_C::UpdateInputActionIconSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaBoundActionButton.AthenaBoundActionButton_C.UpdateInputActionIconSize");

	UAthenaBoundActionButton_C_UpdateInputActionIconSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBoundActionButton.AthenaBoundActionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBoundActionButton_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaBoundActionButton.AthenaBoundActionButton_C.Construct");

	UAthenaBoundActionButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBoundActionButton.AthenaBoundActionButton_C.ExecuteUbergraph_AthenaBoundActionButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBoundActionButton_C::ExecuteUbergraph_AthenaBoundActionButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaBoundActionButton.AthenaBoundActionButton_C.ExecuteUbergraph_AthenaBoundActionButton");

	UAthenaBoundActionButton_C_ExecuteUbergraph_AthenaBoundActionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
