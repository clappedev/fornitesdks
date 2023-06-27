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

// Class AudioAnalyzer.AudioAnalyzerAsset
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerAsset");
		
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRTSettings");
		
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRT
// 0x0050 (0x0078 - 0x0028)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
public:
	class USoundWave*                                  Sound;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSeconds;                                        // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0034(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRT");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
