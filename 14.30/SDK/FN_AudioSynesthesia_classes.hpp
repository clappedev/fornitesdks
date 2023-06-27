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

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRTSettings");
		
		return ptr;
	}

};


// Class AudioSynesthesia.AudioSynesthesiaNRT
// 0x0000 (0x0078 - 0x0078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRT");
		
		return ptr;
	}

};


// Class AudioSynesthesia.ConstantQNRTSettings
// 0x0020 (0x0048 - 0x0028)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              StartingFrequency;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumBands;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NumBandsPerOctave;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnalysisPeriod;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDownmixToMono;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConstantQFFTSizeEnum                              FFTSize;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFFTWindowType                                     WindowType;                                               // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAudioSpectrumType                                 SpectrumType;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BandWidthStretch;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConstantQNormalizationEnum                        CQTNormalization;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRTSettings");
		
		return ptr;
	}

};


// Class AudioSynesthesia.ConstantQNRT
// 0x0008 (0x0080 - 0x0078)
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                       Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRT");
		
		return ptr;
	}


	void GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);
	void GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);
};


// Class AudioSynesthesia.LoudnessNRTSettings
// 0x0018 (0x0040 - 0x0028)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              AnalysisPeriod;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELoudnessNRTCurveTypeEnum                          CurveType;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRTSettings");
		
		return ptr;
	}

};


// Class AudioSynesthesia.LoudnessNRT
// 0x0008 (0x0080 - 0x0078)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                        Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRT");
		
		return ptr;
	}


	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);
};


// Class AudioSynesthesia.OnsetNRTSettings
// 0x0018 (0x0040 - 0x0028)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                               bDownmixToMono;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              GranularityInSeconds;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRTSettings");
		
		return ptr;
	}

};


// Class AudioSynesthesia.OnsetNRT
// 0x0008 (0x0080 - 0x0078)
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                           Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRT");
		
		return ptr;
	}


	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
