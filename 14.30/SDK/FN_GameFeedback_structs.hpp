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

// ScriptStruct GameFeedback.LogSubmitOptions
// 0x0030
struct FLogSubmitOptions
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bSubmitLogs;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSubmitLogsInOptionState;                                 // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                LogTailKb;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LogSubmitChance;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             DoNotUploadReasons;                                       // 0x0020(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
