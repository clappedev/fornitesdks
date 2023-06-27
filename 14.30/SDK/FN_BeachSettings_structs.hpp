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

// UserDefinedStruct BeachSettings.BeachSettings
// 0x0030
struct FBeachSettings
{
	float                                              WaterZ_10_AF6283D2469F29DE1CF4BD94645FD47A;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveBreakLocation_27_F8DD48EE41882365228D8883992A2ADA;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakLength_11_849E881049603F68445F2AB0A9AACA41;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterMaxDepth_8_EBF0C69145C735F23F11AF905A0F5E34;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrashStartPower_16_68C00113428F34AA71B1C39C2ADF1398;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrashEndPower_17_A24D05E94306F842C62446A84D5D214A;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveCrashFadeDist_20_C65B066340EADE72665B4BA5E2D88EDC;    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakTangent_23_348D6F1B4F700D19579A07AC52EC5846;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakCosine_26_0A20DCE94E2C27A8A1B1D488B2AF31FC;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotation_30_2C68ACD248A8C646FADC2AA599056172;          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllWaveFadeStart_33_07B04B77485A1DFE15421BA0674D024F;     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllWaveFadeLength_37_47A4D83144CA147B5B3250B9B892EF35;    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
