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

// UserDefinedStruct FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
// 0x0028
struct FFluidForceImpulseTimedEffects
{
	bool                                               EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70;// 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength_29_2CAA30794D1EFF60AE1C3491D011CECF;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF;     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
