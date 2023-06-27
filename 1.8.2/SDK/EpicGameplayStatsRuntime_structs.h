#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
enum class EEpicLeaderboardUpdateFunction : uint8_t
{

};


// Enum EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
enum class EEpicLeaderboardTimeWindow : uint8_t
{

};


// Enum EpicGameplayStatsRuntime.EEpicLeaderboardDataType
enum class EEpicLeaderboardDataType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
// 0x0008 (0x0010 - 0x0008)
struct FGameplayStatTag : public FGameplayTag
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
// 0x0001
struct FTagTableManagerHelper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// 0x0088 (0x0090 - 0x0008)
struct FGameplayStatMetadataTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// 0x0010
struct FManagedGameplayTagDataTableItem
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
