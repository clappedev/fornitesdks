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

// Function SmallStatRowWidget.SmallStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void USmallStatRowWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallStatRowWidget.SmallStatRowWidget_C.OnStatChanged");

	USmallStatRowWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallStatRowWidget.SmallStatRowWidget_C.ExecuteUbergraph_SmallStatRowWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USmallStatRowWidget_C::ExecuteUbergraph_SmallStatRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallStatRowWidget.SmallStatRowWidget_C.ExecuteUbergraph_SmallStatRowWidget");

	USmallStatRowWidget_C_ExecuteUbergraph_SmallStatRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
