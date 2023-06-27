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

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
// 0x0010
struct FJsonToxicityBulkEvaluationResponse
{
	TArray<bool>                                       isToxic;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
// 0x0001
struct FJsonToxicityEvaluationResponse
{
	bool                                               toxic;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
// 0x0010
struct FJsonToxicityBulkEvaluationRequest
{
	TArray<struct FString>                             texts;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
// 0x0010
struct FJsonToxicityEvaluationRequest
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
