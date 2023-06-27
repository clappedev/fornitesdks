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

// BlueprintGeneratedClass GA_Athena_Bucket_Old_SecondaryAimed.GA_Athena_Bucket_Old_SecondaryAimed_C
// 0x0000 (0x0E4C - 0x0E4C)
class UGA_Athena_Bucket_Old_SecondaryAimed_C : public UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Bucket_Old_SecondaryAimed.GA_Athena_Bucket_Old_SecondaryAimed_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
