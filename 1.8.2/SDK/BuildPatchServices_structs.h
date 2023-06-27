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

// Enum BuildPatchServices.EManifestFileHeader
enum class EManifestFileHeader : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014
struct FSHAHashData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.FileManifestData
// 0x0070
struct FFileManifestData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018
struct FChunkPartData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Size;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040
struct FChunkInfoData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020
struct FCustomFieldData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
