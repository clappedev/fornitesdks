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

// Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULocalUserSettingButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered");

	ULocalUserSettingButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULocalUserSettingButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered");

	ULocalUserSettingButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserSettingButton_C::ExecuteUbergraph_LocalUserSettingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton");

	ULocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
