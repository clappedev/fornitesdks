#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Rejoin.RejoinCheck
// 0x0188 (0x01B0 - 0x0028)
class URejoinCheck : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Rejoin.RejoinCheck");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
