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

// BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C
// 0x0000 (0x3CA8 - 0x3CA8)
class UDefaultUIDataConfiguration_C : public UFortUIDataConfiguration
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
