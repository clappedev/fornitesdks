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

// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveBeginPlay
struct UUnderwaterAudioComponent_C_ReceiveBeginPlay_Params
{
};

// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.On Camera Underwater State Changed
struct UUnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed_Params
{
	bool                                               bIsUnderWater;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DepthUnderwater;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveEndPlay
struct UUnderwaterAudioComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ExecuteUbergraph_UnderwaterAudioComponent
struct UUnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
