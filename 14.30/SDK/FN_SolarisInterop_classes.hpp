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

// Class SolarisInterop.VerseCoroutineLib
// 0x0000 (0x0028 - 0x0028)
class UVerseCoroutineLib : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SolarisInterop.VerseCoroutineLib");
		
		return ptr;
	}


	int STATIC_GetState(class UObject* Context);
	void STATIC_Deallocate(class UObject* Context);
	class UObject* STATIC_Allocate(class UObject* Type, class UObject* Caller, int CallerResumeState);
	void STATIC_Abort(class UObject* Context, bool bAbortCallers);
};


// Class SolarisInterop.CoroutineContextPlaceholder
// 0x00E8 (0x0110 - 0x0028)
class UCoroutineContextPlaceholder : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SolarisInterop.CoroutineContextPlaceholder");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
