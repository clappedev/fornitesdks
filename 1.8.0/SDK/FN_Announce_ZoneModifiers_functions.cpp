// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announce_ZoneModifiers.Announce_ZoneModifiers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_ZoneModifiers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_ZoneModifiers.Announce_ZoneModifiers_C.UserConstructionScript");

	AAnnounce_ZoneModifiers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
