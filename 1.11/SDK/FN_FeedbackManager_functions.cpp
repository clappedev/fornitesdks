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

// Function FeedbackManager.FeedbackManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFeedbackManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedbackManager.FeedbackManager_C.UserConstructionScript");

	AFeedbackManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
