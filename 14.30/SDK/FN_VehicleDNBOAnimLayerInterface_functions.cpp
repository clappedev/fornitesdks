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

// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               VehicleDBNOJoggingOverride     (Parm, OutParm)

void UVehicleDNBOAnimLayerInterface_C::VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride");

	UVehicleDNBOAnimLayerInterface_C_VehicleDBNOJoggingOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleDBNOJoggingOverride != nullptr)
		*VehicleDBNOJoggingOverride = params.VehicleDBNOJoggingOverride;
}


// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseDBNOCarried              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleDBNOCarriedLeansOverride (Parm, OutParm)

void UVehicleDNBOAnimLayerInterface_C::VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride");

	UVehicleDNBOAnimLayerInterface_C_VehicleDBNOCarriedLeansOverride_Params params;
	params.InPoseDBNOCarried = InPoseDBNOCarried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleDBNOCarriedLeansOverride != nullptr)
		*VehicleDBNOCarriedLeansOverride = params.VehicleDBNOCarriedLeansOverride;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
