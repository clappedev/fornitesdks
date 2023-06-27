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

// Class SolarisUi.SolUserWidget
// 0x0020 (0x0280 - 0x0260)
class USolUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SolarisUi.SolUserWidget");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
