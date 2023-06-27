#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WaveSpectrumSettings.WaveSpectrumSettings
// 0x0048
struct FWaveSpectrumSettings
{
	int                                                MaxWaves_47_AD00BF8D49793419E5C91DBF5FC4E3E5;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed_44_5A20C59F49709BC4ABA138A1F35CDE74;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLineSeparatorNullStruct                    _____Wavelengths______4_D8291BAF453D111FBB38ED86F14F7672; // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MinWavelength_7_C6EF199C44159E1369A806BA912B1646;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWavelength_9_1D9584A64602B31C61015982BA077EFD;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WavelengthFalloff_20_9A8C28744DA185C47F0D37B9EBA36CAF;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLineSeparatorNullStruct                    _____Amplitudes______29_9B421DBF4D0FC60AB8654CB437162427; // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              MinAmplitude_17_B33A1CC14597F4063D0218970D63971D;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmplitude_18_CAC1A8164D55C6CC0A3ED0A6A4590493;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmplitudeFalloff_19_72E6C4064F70E7DFE67742BA06E0ADE5;     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLineSeparatorNullStruct                    _____Directions______38_33B59F7C41013BF07C0BD796C8A07ABF; // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector2D                                   DominantWaveDirection_40_F5412C4B4F9B44471E1FC7B1B5295B7D;// 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionAngularSpread_21_966C6D764D2457F563C07993AE5A7310;// 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLineSeparatorNullStruct                    _____Steepness______39_1746E5384A989CED9021B4B6340C8D36;  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              SmallWaveSteepness_23_454E2EB64C779AFEAD5A1C9397C743D3;   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LargeWaveSteepness_24_65207D7A43BB685658EFAF8B34511A2F;   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteepnessFalloff_26_C822870B4711F2EA3930D389A3DD8370;     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
