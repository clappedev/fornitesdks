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

// ScriptStruct HighTowerCobaltRuntime.ItemLoadoutBucket
// 0x0038
struct FItemLoadoutBucket
{
	struct FScalableFloat                              bEnabled;                                                 // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FItemLoadoutContainer>               Loadouts;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct HighTowerCobaltRuntime.PlayerBucketSelection
// 0x000C
struct FPlayerBucketSelection
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
