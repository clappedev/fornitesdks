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

// Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDivisionIconButton_C::OnRankButtonSelected(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected");

	UDivisionIconButton_C_OnRankButtonSelected_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UDivisionIconButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered");

	UDivisionIconButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UDivisionIconButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered");

	UDivisionIconButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDivisionIconButton_C::ExecuteUbergraph_DivisionIconButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton");

	UDivisionIconButton_C_ExecuteUbergraph_DivisionIconButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
