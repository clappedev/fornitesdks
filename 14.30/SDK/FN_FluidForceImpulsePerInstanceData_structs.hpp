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

// UserDefinedStruct FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
// 0x0059
struct FFluidForceImpulsePerInstanceData
{
	struct FFluidForceImpulse                          ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC;      // 0x0000(0x0050) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F;          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F;          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284;       // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
