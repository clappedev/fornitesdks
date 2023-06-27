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

// UserDefinedStruct FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
// 0x0130
struct FFluidForceDynamicPerInstanceData
{
	struct FFluidForceDynamic                          ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1;             // 0x0000(0x0070) (Edit, BlueprintVisible)
	struct FVector                                     ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD;    // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361;     // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03;         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8;           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FVector>                 SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA;    // 0x0090(0x0050) (Edit, BlueprintVisible)
	TMap<struct FName, struct FVector>                 SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537;    // 0x00E0(0x0050) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
