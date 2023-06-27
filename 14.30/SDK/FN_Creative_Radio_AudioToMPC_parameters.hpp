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

// Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData
struct UCreative_Radio_AudioToMPC_C_OnGatheredFFTData_Params
{
	TArray<struct FChannelData>                        FFTData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              OutAmplitudeAverage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
