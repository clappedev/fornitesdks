#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG                            = 0,
	JPG                            = 1,
	BMP                            = 2,
	EXR                            = 3,
	EDesiredImageFormat_MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
struct FImageWriteOptions
{
	EDesiredImageFormat                                Format;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0001(0x0010) UNKNOWN PROPERTY: DelegateProperty ImageWriteQueue.ImageWriteOptions.OnComplete
	int                                                CompressionQuality;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverwriteFile;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x46];                                      // 0x001A(0x0046) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
