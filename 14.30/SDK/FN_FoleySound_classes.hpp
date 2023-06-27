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

// Class FoleySound.FoleySoundSubsystem
// 0x00A0 (0x00D0 - 0x0030)
class UFoleySoundSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FoleySound.FoleySoundSubsystem");
		
		return ptr;
	}


	void RemoveLibrary(class AActor* Actor, class UFoleySoundLibrary* Library);
	void AddLibrary(class AActor* Actor, class UFoleySoundLibrary* Library);
};


// Class FoleySound.FoleySoundLibrary
// 0x0088 (0x00B0 - 0x0028)
class UFoleySoundLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: MapProperty FoleySound.FoleySoundLibrary.Sounds
	TArray<class USoundBase*>                          LoadedSoundObjects;                                       // 0x0078(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class FoleySound.FoleySoundLibrary");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
