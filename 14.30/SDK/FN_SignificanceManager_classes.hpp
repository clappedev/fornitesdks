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

// Class SignificanceManager.SignificanceManager
// 0x0120 (0x0148 - 0x0028)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET
	struct FSoftClassPath                              SignificanceManagerClassName;                             // 0x0108(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
