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

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};


// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Latest                         = 0,
	EngineTime                     = 1,
	Timecode                       = 2,
	ELiveLinkSourceMode_MAX        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkSubjectName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0050
struct FLiveLinkSourceBufferManagementSettings
{
	bool                                               bValidEngineTimeEnabled;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ValidEngineTime;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineTimeOffset;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             EngineTimeClockOffset;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FFrameRate                                  TimecodeFrameRate;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateSubFrame;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTimecodeSmoothLatest;                                 // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FFrameRate                                  SourceTimecodeFrameRate;                                  // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTimecodeFrameEnabled;                               // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                ValidTimecodeFrame;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimecodeFrameOffset;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimecodeClockOffset;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LatestOffset;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfFrameToBuffered;                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAtLeastOneFrame;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050
struct FLiveLinkCurveConversionSettings
{
	TMap<struct FString, struct FSoftObjectPath>       CurveConversionAssetMap;                                  // 0x0000(0x0050) (Edit)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0018
struct FLiveLinkSubjectKey
{
	struct FGuid                                       Source;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0038
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey                         Key;                                                      // 0x0000(0x0018) (Edit, EditConst)
	class ULiveLinkRole*                               Role;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class ULiveLinkSubjectSettings*                    Settings;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class ULiveLinkVirtualSubject*                     VirtualSubject;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkWorldTime
{
	double                                             Time;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Offset;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetaData;                                           // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0050(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x00A0
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0000(0x0010) (Edit, EditConst)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0010(0x0060) (Edit, BlueprintVisible)
	TArray<float>                                      PropertyValues;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0010 (0x00B0 - 0x00A0)
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0010
struct FLiveLinkBaseStaticData
{
	TArray<struct FName>                               PropertyNames;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0020 (0x0030 - 0x0010)
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018
struct FLiveLinkSourceHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0008
struct FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0010 (0x0018 - 0x0008)
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0020
struct FLiveLinkTransform
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0160
struct FCachedSubjectFrame
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0070
struct FSubjectMetadata
{
	TMap<struct FName, struct FString>                 StringMetaData;                                           // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FTimecode                                   SceneTimecode;                                            // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  SceneFramerate;                                           // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x00B0 (0x00B8 - 0x0008)
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkBaseStaticData                     StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FLiveLinkBaseFrameData                      FrameData;                                                // 0x0018(0x00A0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
	bool                                               bIsFieldOfViewSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAspectRatioSupported;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocalLengthSupported;                                  // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsProjectionModeSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackWidth;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackHeight;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsApertureSupported;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusDistanceSupported;                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0030 (0x00D0 - 0x00A0)
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
	struct FTransform                                  Transform;                                                // 0x00A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0020 (0x00F0 - 0x00D0)
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
	float                                              FieldOfView;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocalLength;                                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aperture;                                                 // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistance;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELiveLinkCameraProjectionMode                      ProjectionMode;                                           // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00E5(0x000B) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x0118 (0x0120 - 0x0008)
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkCameraStaticData                   StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkCameraFrameData                    FrameData;                                                // 0x0030(0x00F0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
	bool                                               bIsTemperatureSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIntensitySupported;                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLightColorSupported;                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInnerConeAngleSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOuterConeAngleSupported;                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttenuationRadiusSupported;                            // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSourceLenghtSupported;                                 // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSourceRadiusSupported;                                 // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSoftSourceRadiusSupported;                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0030 (0x0100 - 0x00D0)
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
	float                                              Temperature;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerConeAngle;                                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftSourceRadius;                                         // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0128 (0x0130 - 0x0008)
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkLightStaticData                    StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkLightFrameData                     FrameData;                                                // 0x0030(0x0100) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0030
struct FLiveLinkSourcePreset
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class ULiveLinkSourceSettings*                     Settings;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       SourceType;                                               // 0x0018(0x0018) (Edit, EditConst)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0010
struct FLiveLinkSubjectRepresentation
{
	struct FLiveLinkSubjectName                        Subject;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible)
	class ULiveLinkRole*                               Role;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008
struct FLiveLinkInterpolationSettings
{
	bool                                               bUseInterpolation;                                        // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InterpolationOffset;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x000C
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate                                  FrameRate;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                FrameOffset;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0010
struct FLiveLinkSourceDebugInfo
{
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0000(0x0008) (Edit, EditConst)
	int                                                SnapshotIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumberOfBufferAtSnapshot;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x00E8 (0x00F0 - 0x0008)
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkTransformStaticData                StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FLiveLinkTransformFrameData                 FrameData;                                                // 0x0020(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C
struct FLiveLinkCurveElement
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurveValue;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkCurveElement>               CurveElements;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0020(0x0010)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0030(0x0060)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int                                                Seconds;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLiveLinkFrameRate                          FrameRate;                                                // 0x0008(0x0008)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0018
struct FLiveLinkTime
{
	double                                             WorldTime;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0008(0x0010) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
