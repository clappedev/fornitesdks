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

// UserDefinedStruct FluidForceImpulse.FluidForceImpulse
// 0x0050
struct FFluidForceImpulse
{
	struct FVector                                     WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC;        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A;     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F;// 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFluidForceImpulseTimedEffects              TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E;// 0x0028(0x0028) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
