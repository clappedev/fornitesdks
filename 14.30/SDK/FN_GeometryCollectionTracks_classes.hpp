#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x0030 (0x0118 - 0x00E8)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams         Params;                                                   // 0x00E8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
		
		return ptr;
	}

};


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x0018 (0x0090 - 0x0078)
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0080(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
