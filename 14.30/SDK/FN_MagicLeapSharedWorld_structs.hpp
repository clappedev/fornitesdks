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

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// 0x0010
struct FMagicLeapSharedWorldSharedData
{
	TArray<struct FGuid>                               PinIDs;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{
	TArray<struct FTransform>                          AlignmentTransforms;                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// 0x0020
struct FMagicLeapSharedWorldPinData
{
	struct FGuid                                       PinID;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMagicLeapARPinState                        PinState;                                                 // 0x0010(0x0010) (BlueprintVisible)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// 0x0010
struct FMagicLeapSharedWorldLocalData
{
	TArray<struct FMagicLeapSharedWorldPinData>        LocalPins;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
