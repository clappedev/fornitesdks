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

// Class GameFeedback.LogOptions
// 0x0010 (0x0038 - 0x0028)
class ULogOptions : public UObject
{
public:
	TArray<struct FLogSubmitOptions>                   LogOptions;                                               // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameFeedback.LogOptions");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
