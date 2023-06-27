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

// Function Store_BannerMessage.Store_BannerMessage_C.Pulse
// (Public, BlueprintCallable, BlueprintEvent)

void UStore_BannerMessage_C::Pulse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Store_BannerMessage.Store_BannerMessage_C.Pulse");

	UStore_BannerMessage_C_Pulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
