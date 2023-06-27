#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride
struct UVehicleDNBOAnimLayerInterface_C_VehicleDBNOJoggingOverride_Params
{
	struct FPoseLink                                   VehicleDBNOJoggingOverride;                               // (Parm, OutParm)
};

// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride
struct UVehicleDNBOAnimLayerInterface_C_VehicleDBNOCarriedLeansOverride_Params
{
	struct FPoseLink                                   InPoseDBNOCarried;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleDBNOCarriedLeansOverride;                          // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
