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

// Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.ValetVehicleExploded
// (Final, Native, Protected)
// Parameters:
// class AFortDagwoodVehicle*     Veh                            (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent_Valet::ValetVehicleExploded(class AFortDagwoodVehicle* Veh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.ValetVehicleExploded");

	UStreamingRadioPlayerComponent_Valet_ValetVehicleExploded_Params params;
	params.Veh = Veh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
