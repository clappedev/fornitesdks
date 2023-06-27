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

// Class SoundCueTemplates.SoundCueTemplate
// 0x0000 (0x0570 - 0x0570)
class USoundCueTemplate : public USoundCue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplate");
		
		return ptr;
	}

};


// Class SoundCueTemplates.SoundCueContainer
// 0x0000 (0x0570 - 0x0570)
class USoundCueContainer : public USoundCueTemplate
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueContainer");
		
		return ptr;
	}

};


// Class SoundCueTemplates.SoundCueDistanceCrossfade
// 0x0000 (0x0570 - 0x0570)
class USoundCueDistanceCrossfade : public USoundCueTemplate
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueDistanceCrossfade");
		
		return ptr;
	}

};


// Class SoundCueTemplates.SoundCueTemplateSettings
// 0x0000 (0x0038 - 0x0038)
class USoundCueTemplateSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplateSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
