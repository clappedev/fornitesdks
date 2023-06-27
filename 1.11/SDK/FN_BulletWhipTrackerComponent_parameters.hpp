#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.PlayWhipSound
struct UBulletWhipTrackerComponent_C_PlayWhipSound_Params
{
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.GetLocalPawnForTracking
struct UBulletWhipTrackerComponent_C_GetLocalPawnForTracking_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.TrackWhipStatus
struct UBulletWhipTrackerComponent_C_TrackWhipStatus_Params
{
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Whip_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ReceiveTick
struct UBulletWhipTrackerComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Reset
struct UBulletWhipTrackerComponent_C_Reset_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.Update Velocity
struct UBulletWhipTrackerComponent_C_Update_Velocity_Params
{
	struct FVector                                     Current_Velocity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BulletWhipTrackerComponent.BulletWhipTrackerComponent_C.ExecuteUbergraph_BulletWhipTrackerComponent
struct UBulletWhipTrackerComponent_C_ExecuteUbergraph_BulletWhipTrackerComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
