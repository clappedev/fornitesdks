#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (0x00E0 - 0x00D0)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (0x0100 - 0x00E0)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (0x0160 - 0x00E0)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0400 (0x04D0 - 0x00D0)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x400];                                     // 0x00D0(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x00A0 (0x0170 - 0x00D0)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0150 - 0x0150)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0100 (0x01D0 - 0x00D0)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x00D0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (0x0110 - 0x00D0)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01D0 (0x02A0 - 0x00D0)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0110 (0x01E0 - 0x00D0)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00D0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x00E0 - 0x00C0)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x00D8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0010 (0x0160 - 0x0150)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0150 - 0x0150)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (0x00F0 - 0x00D0)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0020 (0x00E0 - 0x00C0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (0x0100 - 0x00D0)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x0140 - 0x00D0)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00C0 (0x0190 - 0x00D0)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00D0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (0x0150 - 0x00D0)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FStringCurve                                StringCurve;                                              // 0x00D8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (0x0110 - 0x00D0)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubSection
// 0x0070 (0x0140 - 0x00D0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0010 (0x0150 - 0x0140)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01D0 (0x02A0 - 0x00D0)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
