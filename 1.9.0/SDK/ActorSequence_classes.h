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

// Class ActorSequence.ActorSequence
// 0x0020 (0x0300 - 0x02E0)
class UActorSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0040 (0x0130 - 0x00F0)
class UActorSequenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x0690 - 0x0690)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
