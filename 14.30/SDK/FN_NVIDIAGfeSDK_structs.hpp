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

// Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
enum class EGfeSDKHighlightSignificance : uint8_t
{
	NONE                           = 0,
	ExtremelyBad                   = 1,
	VeryBad                        = 2,
	Bad                            = 3,
	Neutral                        = 4,
	Good                           = 5,
	VeryGood                       = 6,
	ExtremelyGood                  = 7,
	MAX                            = 8
};


// Enum NVIDIAGfeSDK.EGfeSDKHighlightType
enum class EGfeSDKHighlightType : uint8_t
{
	NONE                           = 0,
	Milestone                      = 1,
	Achievement                    = 2,
	Incident                       = 3,
	StateChange                    = 4,
	MAX                            = 5
};


// Enum NVIDIAGfeSDK.EGfeSDKPermission
enum class EGfeSDKPermission : uint8_t
{
	Granted                        = 0,
	Denied                         = 1,
	MustAsk                        = 2,
	Unknown                        = 3,
	MAX                            = 4
};


// Enum NVIDIAGfeSDK.EGfeSDKScope
enum class EGfeSDKScope : uint8_t
{
	Highlights                     = 0,
	HighlightsRecordVideo          = 1,
	HighlightsRecordScreenshot     = 2,
	MAX                            = 3
};


// Enum NVIDIAGfeSDK.EGfeSDKReturnCode
enum class EGfeSDKReturnCode : uint8_t
{
	Success                        = 0,
	SuccessIpcOldSdk               = 1,
	SuccessIpcOldGfe               = 2,
	Error                          = 3,
	ErrorGfeVersion                = 4,
	ErrorSdkVersion                = 5,
	ErrorModuleNotLoaded           = 6,
	EGfeSDKReturnCode_MAX          = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
// 0x0018
struct FGfeSDKHighlightGroupView
{
	struct FString                                     GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	EGfeSDKHighlightType                               TagsFilter;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EGfeSDKHighlightSignificance                       SignificanceFilter;                                       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// 0x0010
struct FGfeSDKHighlightSummaryParams
{
	TArray<struct FGfeSDKHighlightGroupView>           GroupViews;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// 0x0028
struct FGfeSDKHighlightVideoParams
{
	struct FString                                     GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     HighlightId;                                              // 0x0010(0x0010) (ZeroConstructor)
	int                                                StartDelta;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndDelta;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// 0x0020
struct FGfeSDKHighlightScreenshotParams
{
	struct FString                                     GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     HighlightId;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// 0x0018
struct FGfeSDKHighlightCloseGroupParams
{
	struct FString                                     GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	bool                                               DestroyHighlights;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// 0x0060
struct FGfeSDKHighlightOpenGroupParams
{
	struct FString                                     GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               GroupDescriptionTranslationTable;                         // 0x0010(0x0050)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// 0x0050
struct FGfeSDKPermissionsChangedData
{
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                         // 0x0000(0x0050)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// 0x0010
struct FGfeSDKRequestPermissionsParams
{
	TArray<EGfeSDKScope>                               Scopes;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
// 0x0068
struct FGfeSDKHighlightDefinition
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	bool                                               UserDefaultInterest;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EGfeSDKHighlightType                               HighlightTags;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	EGfeSDKHighlightSignificance                       Significance;                                             // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	TMap<struct FString, struct FString>               NameTranslationTable;                                     // 0x0018(0x0050)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// 0x0020
struct FGfeSDKHighlightConfigParams
{
	TArray<struct FGfeSDKHighlightDefinition>          HighlightDefinitions;                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DefaultLocale;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
// 0x0068
struct FGfeSDKCreateResponse
{
	uint16_t                                           VersionMajor;                                             // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           VersionMinor;                                             // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     NVIDIAGfeVersion;                                         // 0x0008(0x0010) (ZeroConstructor)
	TMap<EGfeSDKScope, EGfeSDKPermission>              ScopePermissions;                                         // 0x0018(0x0050)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
// 0x0028
struct FGfeSDKCreateInputParams
{
	struct FString                                     AppName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<EGfeSDKScope>                               RequiredScopes;                                           // 0x0010(0x0010) (ZeroConstructor)
	bool                                               PollForCallbacks;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
