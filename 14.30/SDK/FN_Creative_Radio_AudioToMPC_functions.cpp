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

// Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FChannelData>    FFTData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          OutAmplitudeAverage            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCreative_Radio_AudioToMPC_C::OnGatheredFFTData(TArray<struct FChannelData>* FFTData, float* OutAmplitudeAverage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData");

	UCreative_Radio_AudioToMPC_C_OnGatheredFFTData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FFTData != nullptr)
		*FFTData = params.FFTData;
	if (OutAmplitudeAverage != nullptr)
		*OutAmplitudeAverage = params.OutAmplitudeAverage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
