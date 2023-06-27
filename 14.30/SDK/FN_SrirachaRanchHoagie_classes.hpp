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

// Class SrirachaRanchHoagie.StreamingRadioPlayerComponent_Hoagie
// 0x0000 (0x0380 - 0x0380)
class UStreamingRadioPlayerComponent_Hoagie : public UStreamingRadioPlayerComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanchHoagie.StreamingRadioPlayerComponent_Hoagie");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
