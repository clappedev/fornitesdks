#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum McpProfileSys.EServerClientFlag
enum class EServerClientFlag : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020
struct FMcpLootResult
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0058
struct FMcpLootEntry
{
	struct FString                                     ItemType;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// 0x0028
struct FProfileUpdateNotification
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0050
struct FProfileUpdateSingle
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x00F0 (0x0140 - 0x0050)
struct FProfileUpdate : public FProfileUpdateSingle
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0050(0x00F0) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileHttpRequest
// 0x0070
struct FProfileHttpRequest
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0018
struct FProfileEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0070
struct FBaseUrlContext
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FPublicUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FClientUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0070 - 0x0070)
struct FDedicatedServerUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020
struct FProfileGroupEntry
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058
struct FMcpProfileChangeRequest
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030
struct FMcpChangeAttributesRequest
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018
struct FMcpChangeQuantityRequest
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010
struct FMcpRemoveItemRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048
struct FMcpAddItemRequest
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
