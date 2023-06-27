#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
