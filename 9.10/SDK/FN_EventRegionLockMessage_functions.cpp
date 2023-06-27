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

// Function EventRegionLockMessage.EventRegionLockMessage_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventRegionLockMessage_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRegionLockMessage.EventRegionLockMessage_C.RefreshDataBP");

	UEventRegionLockMessage_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventRegionLockMessage.EventRegionLockMessage_C.ExecuteUbergraph_EventRegionLockMessage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventRegionLockMessage_C::ExecuteUbergraph_EventRegionLockMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRegionLockMessage.EventRegionLockMessage_C.ExecuteUbergraph_EventRegionLockMessage");

	UEventRegionLockMessage_C_ExecuteUbergraph_EventRegionLockMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
