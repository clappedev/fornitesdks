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

// Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	None                           = 0,
	Plain                          = 1,
	Complex                        = 2,
	Bool                           = 3,
	Struct                         = 4,
	Object                         = 5,
	Name                           = 6,
	Array                          = 7,
	PromoteBoolToByte              = 8,
	PromoteBoolToInt32             = 9,
	PromoteBoolToInt64             = 10,
	PromoteBoolToFloat             = 11,
	PromoteByteToInt32             = 12,
	PromoteByteToInt64             = 13,
	PromoteByteToFloat             = 14,
	PromoteInt32ToInt64            = 15,
	PromoteInt32ToFloat            = 16,
	EPropertyAccessCopyType_MAX    = 17
};


// Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	None                           = 0,
	Object                         = 1,
	WeakObject                     = 2,
	SoftObject                     = 3,
	EPropertyAccessObjectType_MAX  = 4
};


// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	Offset                         = 0,
	Object                         = 1,
	Array                          = 2,
	ScriptFunction                 = 3,
	NativeFunction                 = 4,
	EPropertyAccessIndirectionType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PropertyAccess.PropertyAccessSegment
// 0x0040
struct FPropertyAccessSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStruct*                                     Struct;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty PropertyAccess.PropertyAccessSegment.Property
	class UFunction*                                   Function;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Flags;                                                    // 0x003C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct PropertyAccess.PropertyAccessPath
// 0x000C
struct FPropertyAccessPath
{
	int                                                PathSegmentStartIndex;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PathSegmentCount;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasEvents : 1;                                           // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct PropertyAccess.PropertyAccessCopy
// 0x0010
struct FPropertyAccessCopy
{
	int                                                AccessIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestAccessStartIndex;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestAccessEndIndex;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EPropertyAccessCopyType                            Type;                                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// 0x0010
struct FPropertyAccessCopyBatch
{
	TArray<struct FPropertyAccessCopy>                 Copies;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// 0x0030
struct FPropertyAccessIndirectionChain
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty PropertyAccess.PropertyAccessIndirectionChain.Property
	int                                                IndirectionStartIndex;                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IndirectionEndIndex;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EventId;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PropertyAccess.PropertyAccessIndirection
// 0x0040
struct FPropertyAccessIndirection
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty PropertyAccess.PropertyAccessIndirection.ArrayProperty
	class UFunction*                                   Function;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ReturnBufferSize;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReturnBufferAlignment;                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	EPropertyAccessObjectType                          ObjectType;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	EPropertyAccessIndirectionType                     Type;                                                     // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct PropertyAccess.PropertyAccessLibrary
// 0x00C8
struct FPropertyAccessLibrary
{
	TArray<struct FPropertyAccessSegment>              PathSegments;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessPath>                 SrcPaths;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPropertyAccessPath>                 DestPaths;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FPropertyAccessCopyBatch                    CopyBatches[0x4];                                         // 0x0030(0x0010)
	TArray<struct FPropertyAccessIndirectionChain>     SrcAccesses;                                              // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPropertyAccessIndirectionChain>     DestAccesses;                                             // 0x0080(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPropertyAccessIndirection>          Indirections;                                             // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        EventAccessIndices;                                       // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
