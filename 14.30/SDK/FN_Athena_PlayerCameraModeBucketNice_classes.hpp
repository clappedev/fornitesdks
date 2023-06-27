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

// BlueprintGeneratedClass Athena_PlayerCameraModeBucketNice.Athena_PlayerCameraModeBucketNice_C
// 0x0000 (0x0DC0 - 0x0DC0)
class UAthena_PlayerCameraModeBucketNice_C : public UAthena_PlayerCameraModeRanged_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerCameraModeBucketNice.Athena_PlayerCameraModeBucketNice_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
