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

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound
struct UBP_SurfaceTypeSoundComponent_C_ActuallyPlaySound_Params
{
};

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType
struct UBP_SurfaceTypeSoundComponent_C_SetSurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound
struct UBP_SurfaceTypeSoundComponent_C_PlaySound_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay
struct UBP_SurfaceTypeSoundComponent_C_Test_Delay_Params
{
};

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent
struct UBP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
