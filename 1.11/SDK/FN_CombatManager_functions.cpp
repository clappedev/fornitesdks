// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CombatManager.CombatManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACombatManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatManager.CombatManager_C.UserConstructionScript");

	ACombatManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
