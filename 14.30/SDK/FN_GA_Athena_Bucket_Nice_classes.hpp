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

// BlueprintGeneratedClass GA_Athena_Bucket_Nice.GA_Athena_Bucket_Nice_C
// 0x0000 (0x0E24 - 0x0E24)
class UGA_Athena_Bucket_Nice_C : public UGA_Athena_Bucket_Old_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Bucket_Nice.GA_Athena_Bucket_Nice_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
