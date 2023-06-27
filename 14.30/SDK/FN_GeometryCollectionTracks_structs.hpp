#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x0030
struct FMovieSceneGeometryCollectionParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FSoftObjectPath                             GeometryCollectionCache;                                  // 0x0008(0x0018) (Edit, ZeroConstructor)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0020(0x0004) (Edit)
	struct FFrameNumber                                EndFrameOffset;                                           // 0x0024(0x0004) (Edit)
	float                                              PlayRate;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// 0x0008 (0x0038 - 0x0030)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0030(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x0034(0x0004)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                   // 0x0020(0x0038)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
