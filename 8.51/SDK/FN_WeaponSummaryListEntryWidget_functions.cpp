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

// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSummaryListEntryWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.Update");

	UWeaponSummaryListEntryWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UWeaponSummaryListEntryWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.OnStatChanged");

	UWeaponSummaryListEntryWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.ExecuteUbergraph_WeaponSummaryListEntryWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSummaryListEntryWidget_C::ExecuteUbergraph_WeaponSummaryListEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.ExecuteUbergraph_WeaponSummaryListEntryWidget");

	UWeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
