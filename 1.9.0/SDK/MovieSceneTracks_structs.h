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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{

};


// Enum MovieSceneTracks.EShow3DTrajectory
enum class EShow3DTrajectory : uint8_t
{

};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{

};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0070 (0x0078 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0050 (0x0058 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0018(0x0040) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0020
struct FMovieSceneEventSectionData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0020
struct FEventPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0018
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x01D0
struct FColorParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0000(0x01D0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0160
struct FVectorParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0080
struct FScalarParameterNameAndCurve
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0090
struct FMovieSceneSkeletalAnimationParams
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0040 (0x0048 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0060 - 0x0048)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FVector4                                    Vector;                                                   // 0x0050(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                   // 0x0048(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   // 0x0048(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0048 - 0x0018)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0018(0x0070) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0088 (0x00A0 - 0x0018)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0018(0x0088) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
// 0x03F0 (0x0408 - 0x0018)
struct FMovieScene3DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x0018(0x03F0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00A0 (0x00B8 - 0x0018)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0018(0x00A0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0108 (0x0120 - 0x0018)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0018(0x0108) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0108
struct FMovieSceneAudioSectionTemplateData
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0010 (0x0028 - 0x0018)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x01D8 (0x01F0 - 0x0018)
struct FMovieSceneColorSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0018(0x01D8) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneLevelVisibilitySharedTrack : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0030 - 0x0018)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0048 - 0x0048)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0018(0x0070) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x01E8 (0x0200 - 0x0018)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0018(0x01E8) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneStringPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0018(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0088 (0x00A0 - 0x0018)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0018(0x0088) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBytePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneSkeletalAnimationSharedTrack : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0018(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x0098 - 0x0090)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0018(0x0070) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0008 (0x00B0 - 0x00A8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
