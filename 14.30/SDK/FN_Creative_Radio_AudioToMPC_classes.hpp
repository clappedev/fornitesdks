#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C
// 0x0000 (0x0100 - 0x0100)
class UCreative_Radio_AudioToMPC_C : public UFortAudioToMPCComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C");
		
		return ptr;
	}


	void OnGatheredFFTData(TArray<struct FChannelData>* FFTData, float* OutAmplitudeAverage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
