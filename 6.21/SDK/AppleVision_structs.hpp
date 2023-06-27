#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
enum class EDetectedFaceFeatureType : uint8
{
	Unkown                         = 0,
	FaceContour                    = 1,
	InnerLips                      = 2,
	LeftEye                        = 3,
	LeftEyebrow                    = 4,
	LeftPupil                      = 5,
	MedianLine                     = 6,
	Nose                           = 7,
	NoseCrest                      = 8,
	OuterLips                      = 9,
	RightEye                       = 10,
	RightEyebrow                   = 11,
	RightPupil                     = 12,
	EDetectedFaceFeatureType_MAX   = 13,
};
// 0x4 (0x4 - 0x0)
// ScriptStruct AppleVision.DetectedFeature
struct FDetectedFeature
{
public:
	float                                        Confidence;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x18 - 0x4)
// ScriptStruct AppleVision.DetectedFeatureRegion
struct FDetectedFeatureRegion : public FDetectedFeature
{
public:
	uint8                                        Pad_2299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     Points;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x18 - 0x4)
// ScriptStruct AppleVision.DetectedFeature2D
struct FDetectedFeature2D : public FDetectedFeature
{
public:
	struct FBox2D                                BoundingBox;                                       // 0x4(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x1C - 0x18)
// ScriptStruct AppleVision.DetectedFaceFeature2D
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{
public:
	enum class EDetectedFaceFeatureType          FeatureType;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_229A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct AppleVision.DetectedFaceFeatureRegion
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{
public:
	enum class EDetectedFaceFeatureType          FeatureType;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_229B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x50 - 0x18)
// ScriptStruct AppleVision.DetectedFace
struct FDetectedFace : public FDetectedFeatureRegion
{
public:
	struct FBox2D                                BoundingBox;                                       // 0x18(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_229C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDetectedFaceFeature2D>        Features;                                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDetectedFaceFeatureRegion>    FeatureRegions;                                    // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AppleVision.FaceDetectionResult
struct FFaceDetectionResult
{
public:
	TArray<struct FDetectedFace>                 DetectedFaces;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
