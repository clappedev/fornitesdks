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

// Function ErrorCodeOverflowItem.ErrorCodeOverflowItem_C.SetErrorCodeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ErrorCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UErrorCodeOverflowItem_C::SetErrorCodeDisplay(struct FString ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorCodeOverflowItem.ErrorCodeOverflowItem_C.SetErrorCodeDisplay");

	UErrorCodeOverflowItem_C_SetErrorCodeDisplay_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
