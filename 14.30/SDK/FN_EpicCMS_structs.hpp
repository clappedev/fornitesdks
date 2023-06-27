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

// ScriptStruct EpicCMS.DownloadCacheEntry
// 0x0028
struct FDownloadCacheEntry
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SourceUrl;                                                // 0x0010(0x0010) (ZeroConstructor)
	double                                             LastAccessTime;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EpicCMS.DownloadCache
// 0x0058
struct FDownloadCache
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                Version;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FDownloadCacheEntry>   Cache;                                                    // 0x0008(0x0050)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
