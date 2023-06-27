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

// Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete
// (Event, Protected, BlueprintEvent)

void UFortHoagieVehicleReticle::OnSetupComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete");

	UFortHoagieVehicleReticle_OnSetupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
