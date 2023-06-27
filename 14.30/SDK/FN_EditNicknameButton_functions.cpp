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

// Function EditNicknameButton.EditNicknameButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UEditNicknameButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EditNicknameButton.EditNicknameButton_C.BP_OnHovered");

	UEditNicknameButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditNicknameButton.EditNicknameButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEditNicknameButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EditNicknameButton.EditNicknameButton_C.BP_OnUnhovered");

	UEditNicknameButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditNicknameButton.EditNicknameButton_C.ExecuteUbergraph_EditNicknameButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEditNicknameButton_C::ExecuteUbergraph_EditNicknameButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EditNicknameButton.EditNicknameButton_C.ExecuteUbergraph_EditNicknameButton");

	UEditNicknameButton_C_ExecuteUbergraph_EditNicknameButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
