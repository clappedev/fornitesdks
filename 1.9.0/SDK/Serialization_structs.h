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

// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x00F0
struct FStructSerializerMapTestStruct
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x01D8
struct FStructSerializerTestStruct
{
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0000(0x01D8) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0040
struct FStructSerializerArrayTestStruct
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0060
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0018(0x0048) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0010
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
