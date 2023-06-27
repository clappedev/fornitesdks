#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SrirachaRanch.EOnlineRadioSourceType
enum class EOnlineRadioSourceType : uint8_t
{
	Epic                           = 0,
	EOnlineRadioSourceType_MAX     = 1
};


// Enum SrirachaRanch.ERadioSource
enum class ERadioSource : uint8_t
{
	Invalid                        = 0,
	Vehicle                        = 1,
	ERadioSource_MAX               = 2
};


// Enum SrirachaRanch.EStreamingRadioSourceState
enum class EStreamingRadioSourceState : uint8_t
{
	None                           = 0,
	Loading                        = 1,
	LoadingPlayer                  = 2,
	LoadedPlayer                   = 3,
	Playing                        = 4,
	EStreamingRadioSourceState_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SrirachaRanch.SrirachaInputMappingData
// 0x0028
struct FSrirachaInputMappingData
{
	struct FName                                       MainActionName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GamepadActionName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct SrirachaRanch.StreamingRadioSourceData
// 0x0018
struct FStreamingRadioSourceData
{
	EStreamingRadioSourceState                         State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayingIndex;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeoutSeconds;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class URadioContentSourceItemDefinition*           SavedSource;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SrirachaRanch.SrirachaPerClassSpecialSeats
// 0x0010
struct FSrirachaPerClassSpecialSeats
{
	TArray<int>                                        OutsideSeatIndices;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
