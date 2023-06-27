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

// Class UACCommon.UACNetComponent
// 0x0090 (0x0180 - 0x00F0)
class UUACNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACCommon.UACNetComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
