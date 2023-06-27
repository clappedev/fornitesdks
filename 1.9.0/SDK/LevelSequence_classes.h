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

// Class LevelSequence.LevelSequence
// 0x00A0 (0x0380 - 0x02E0)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02E0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0020 (0x06B0 - 0x0690)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0690(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	void STATIC_CreateLevelSequencePlayer();
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0020 (0x0048 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0068 (0x03F0 - 0x0388)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0388(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0058 (0x0288 - 0x0230)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0230(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
