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

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{

};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{

};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{

};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{

};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0040
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0038
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0070
struct FMovieSceneEditorData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectBindingPtr
// 0x0010
struct FMovieSceneObjectBindingPtr
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0028
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x001C
struct FMovieSceneBindingOverrideData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// 0x0001
struct FMovieSceneTrackCompilationParams
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0010
struct FMovieSceneEvaluationMetaData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0010
struct FMovieSceneEvaluationGroupLUTIndex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0050
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0080
struct FMovieSceneEvaluationTrack
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0008
struct FMovieSceneSequenceTransform
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0010
struct FMovieSceneSectionParameters
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x0028
struct FMovieSceneSubSequenceData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0220
struct FMovieSceneEvaluationTemplate
{
	unsigned char                                      UnknownData00[0x220];                                     // 0x0000(0x0220) MISSED OFFSET
};

// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// 0x0000 (0x0220 - 0x0220)
struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{

};

// ScriptStruct MovieScene.MovieSceneGenerationLedger
// 0x00A8
struct FMovieSceneGenerationLedger
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// 0x0018
struct FMovieSceneSequenceCachedSignature
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0020
struct FMovieScenePropertySectionData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
